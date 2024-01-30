@class NSMutableArray, NSMutableDictionary, NSData, NSObject, IDSDataChannelLinkContext;
@protocol OS_nw_path_evaluator, OS_nw_context, OS_nw_connection, OS_dispatch_queue;

@interface _IDSDatagramChannel : NSObject {
    BOOL _verboseFunctionalLogging;
    int _socketDescriptor;
    id /* block */ _eventHandler;
    id /* block */ _readHandler;
    id /* block */ _readHandlerWithOptions;
    id /* block */ _writeHandler;
    BOOL _connected;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _writeLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readLock;
    BOOL _isInvalidated;
    long long _operationMode;
    long long _preferredDataPathType;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_nw_context> *_context;
    NSObject<OS_dispatch_queue> *_queue;
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
    unsigned long long _outgoingPackets;
    unsigned long long _incomingPackets;
    double _lastOutgoingStatReport;
    double _lastIncomingStatReport;
    NSMutableDictionary *_MKIArrivalTime;
    NSMutableDictionary *_firstPacketArrivalTimeForMKI;
    NSMutableDictionary *_probingDict;
    NSObject<OS_nw_connection> *_directConnectionsByLinkID[256];
    IDSDataChannelLinkContext *_linkContextsByLinkID[256];
    NSMutableDictionary *_linkIDToParticipantMap;
    NSMutableDictionary *_localRemoteRelayLinkIDToVirtualLinkIDMap;
}

- (id)init;
- (void).cxx_destruct;

@end
