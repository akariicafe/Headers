@class HDDaemon, NSString, NSUUID, NSMutableDictionary, HDIDSPersistentDictionary, NSObject, IDSService;
@protocol OS_dispatch_queue, OS_dispatch_source, HDIDSMessageCenterDelegate;

@interface HDIDSMessageCenter : NSObject <IDSServiceDelegate> {
    HDDaemon *_daemon;
    NSString *_shortServiceIdentifier;
    NSUUID *_pairingUUID;
    IDSService *_service;
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_errorHandlers;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_pbMapping;
    HDIDSPersistentDictionary *_persistentContextStore;
    double _nextExpireTimerFireDate;
    NSObject<OS_dispatch_source> *_expireTimer;
    _Atomic BOOL _invalidated;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<HDIDSMessageCenterDelegate> delegate;
@property (readonly, nonatomic) IDSService *idsService;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPersistentDictionaryWithURL:(id)a0;

- (void)mapPBRequest:(Class)a0 toResponse:(Class)a1 messageID:(unsigned short)a2;
- (id)deviceForFromID:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)sendRequest:(id)a0;
- (id)_queue;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)obliterateWithReason:(id)a0 preserveCopy:(BOOL)a1;
- (void)dealloc;
- (void)_handleError:(id)a0 context:(id)a1;
- (id)_logPrefix;
- (void)service:(id)a0 didSwitchActivePairedDevice:(id)a1 acknowledgementBlock:(id /* block */)a2;
- (void)addRequestHandler:(SEL)a0 forMessageID:(unsigned short)a1;
- (void)_updateExpireTimerWithTimestamp:(double)a0;
- (id)nanoSyncDevices;
- (void)resume;
- (void)_expireMessages;
- (id)_pbMappingForMessageID:(unsigned short)a0;
- (void)addErrorHandler:(SEL)a0 forMessageID:(unsigned short)a1;
- (void)_sendResponse:(id)a0;
- (void)addResponseHandler:(SEL)a0 forMessageID:(unsigned short)a1;
- (id)initWithIDSServiceIdentifier:(id)a0 persistentDictionary:(id)a1 queue:(id)a2 daemon:(id)a3;
- (void)cancelPendingRequestsWithMessageID:(unsigned short)a0 device:(id)a1;
- (void)invalidate;

@end
