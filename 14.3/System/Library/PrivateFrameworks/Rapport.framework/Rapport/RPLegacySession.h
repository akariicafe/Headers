@class RPDevice, NSString, CUMobileDeviceSession, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface RPLegacySession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableArray *_messageSendQueue;
    BOOL _messagingReady;
    int _pairVerifyState;
    BOOL _secureReady;
    BOOL _mdEnabled;
    CUMobileDeviceSession *_mdSession;
    int _mdState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) RPDevice *peerDevice;
@property (nonatomic) unsigned int securityFlags;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;

- (void)_run;
- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_cleanup;
- (void)dealloc;
- (void)registerRequestID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)_sendMessage:(id)a0;
- (void)_invalidate;
- (void)sendRequestID:(id)a0 options:(id)a1 request:(id)a2 responseHandler:(id /* block */)a3;
- (void)pairSetupTryPIN:(id)a0;
- (void)pairSetupWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)_pairSetupWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)_pairSetupTryPIN:(id)a0;
- (void)pairVerifyWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)unpairWithCompletion:(id /* block */)a0;
- (void)_pairVerifyWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)_unpairWithCompletion:(id /* block */)a0;
- (int)_runPairVerify;
- (void)invalidate;
- (void)requestSystemInfoWithCompletion:(id /* block */)a0;
- (int)_runMobileDeviceStart;
- (void)_sendQueuedMessages;

@end
