@class NSDate, NSString, IDSService, _NMSDispatchQueue, NSMutableDictionary, _SYMultiSuspendableQueue, NMSWindowData, NSObject, NMSPersistentDictionary;
@protocol OS_os_activity, OS_dispatch_source, OS_dispatch_queue, NMSMessageCenterDelegate;

@interface NMSMessageCenter : NSObject <IDSServiceDelegate> {
    NSString *_serviceIdentifier;
    NSString *_launchNotification;
    struct __CFString { } *_loggingFacility;
    BOOL _resumed;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_errorHandlers;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_pbMapping;
    NMSPersistentDictionary *_persistentContextStore;
    NSDate *_nextExpireTimerFireDate;
    NSObject<OS_dispatch_source> *_expireTimer;
    unsigned long long _currentBytesInFlight;
    NMSWindowData *_windowData;
    NSObject<OS_dispatch_source> *_windowTimeout;
    _NMSDispatchQueue *_windowQueue;
    BOOL _checkedForQWS;
    _SYMultiSuspendableQueue *_idsIncomingQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (weak, nonatomic) id<NMSMessageCenterDelegate> delegate;
@property (nonatomic) BOOL delegateRequiresACKs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSService *service;
@property (readonly, nonatomic, getter=_currentBytesInFlight) unsigned long long currentBytesInFlight;
@property (retain, nonatomic) NSObject<OS_os_activity> *transportActivity;
@property (readonly, nonatomic) IDSService *idsService;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *actionQ;
@property (nonatomic) BOOL enableTransmissionWindow;
@property (nonatomic) unsigned long long maxMessagesInFlight;
@property (nonatomic) unsigned long long minMessagesInFlight;
@property (nonatomic) unsigned long long maxBytesInFlight;
@property (nonatomic) double windowResponseTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)messageWindowCountEnabled;
+ (void)setMessageWindowCountEnabled:(BOOL)a0;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)mapPBRequest:(Class)a0 toResponse:(Class)a1 messageID:(unsigned short)a2;
- (id)init;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)sendRequest:(id)a0;
- (void).cxx_destruct;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 connectedDevicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 hasBeenDeliveredWithContext:(id)a3;
- (void)dealloc;
- (void)_handleError:(id)a0 context:(id)a1;
- (void)service:(id)a0 didSwitchActivePairedDevice:(id)a1 acknowledgementBlock:(id /* block */)a2;
- (id)errorHandlers;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)resume;
- (void)_expireMessages;
- (id)_pbMappingForMessageID:(unsigned short)a0;
- (void)_sendResponse:(id)a0;
- (id)requestHandlers;
- (id)responseHandlers;
- (void)_obliterate;
- (id)initWithIDSServiceIdentifier:(id)a0 launchOnDemandNotification:(id)a1 cacheFolderPath:(id)a2;
- (void)addRequestHandlerForMessageID:(unsigned short)a0 usingBlock:(id /* block */)a1;
- (void)addResponseHandler:(unsigned short)a0 usingBlock:(id /* block */)a1;
- (void)addErrorHandlerForMessageID:(unsigned short)a0 usingBlock:(id /* block */)a1;
- (id)deviceIDFromDevice:(id)a0;
- (void)sendFile:(id)a0;
- (BOOL)cancelMessageWithID:(id)a0 error:(id *)a1;
- (void)suspendIncomingMessages;
- (void)resumeIncomingMessages;
- (id)initWithIDSServiceIdentifier:(id)a0;
- (void)_setNextWindowTimeoutFireDate;
- (void)_checkForSwitch;
- (void)_updateExpireTimerWithDate:(id)a0;
- (id)_buildDataForRequest:(id)a0 options:(id *)a1;
- (id)_buildDataForResponse:(id)a0 options:(id *)a1;
- (id)_decodeIncomingRequestData:(id)a0 context:(id)a1;
- (void)_timeoutWindowedMessages;
- (void)dropExtantMessages;

@end
