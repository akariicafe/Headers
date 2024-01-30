@class NSMutableArray, NSMutableDictionary, NSData, NSObject, IDSDataChannelLinkContext;
@protocol OS_nw_connection, OS_nw_path_evaluator;

@interface _IDSDatagramChannel : NSObject {
    BOOL _verboseFunctionalLogging;
    int _socketDescriptor;
    id /* block */ _eventHandler;
    id /* block */ _readHandler;
    id /* block */ _readHandlerWithOptions;
    BOOL _connected;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _writeLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readLock;
    BOOL _isInvalidated;
    NSObject<OS_nw_connection> *_connection;
    BOOL _hasMetadata;
    BOOL _sentFirstReadLinkInfo;
    BOOL _receivedPreConnectionData;
    BOOL _waitForPreConnectionDataForConnected;
    BOOL _startCalled;
    BOOL _startAutomatically;
    int _osChannelFD;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    struct channel { } *_osChannel;
    struct channel_ring_desc { } *_osChannelTXRing;
    struct channel_ring_desc { } *_osChannelRXRing;
    unsigned char _nexus_instance[16];
    IDSDataChannelLinkContext *_cellularLink;
    NSMutableDictionary *_linkContexts;
    char _defaultLinkID;
    NSData *_preConnectionData;
    NSMutableArray *_sendingMetadata;
    BOOL _needsMediaEncryptionInfo;
    unsigned long long _outgoingBytes;
    unsigned long long _incomingBytes;
    double _lastOutgoingStatReport;
    double _lastIncomingStatReport;
    NSMutableDictionary *_MKIArrivalTime;
    NSMutableDictionary *_firstPacketArrivalTimeForMKI;
    NSMutableDictionary *_probingDict;
}

- (id)init;
- (void).cxx_destruct;

@end
