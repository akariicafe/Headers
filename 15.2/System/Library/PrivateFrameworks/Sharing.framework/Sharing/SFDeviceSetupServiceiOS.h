@class NSUUID, NSString, NSData, SFService, SFSession, NSObject, RPFileTransferSession, SFClient;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupServiceiOS : NSObject {
    BOOL _activateCalled;
    BOOL _advertiseFast;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSUUID *_peer;
    BOOL _pinShowing;
    SFClient *_preventExitForLocaleClient;
    NSData *_resumeAuthTag;
    NSString *_resumePassword;
    int _resumeState;
    SFService *_sfService;
    BOOL _sfServiceActivated;
    SFSession *_sfSession;
    BOOL _suspendPending;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) RPFileTransferSession *fileTransferSessionTemplate;
@property (copy, nonatomic) id /* block */ showPINHandlerEx;
@property (copy, nonatomic) id /* block */ showPINHandler;
@property (copy, nonatomic) id /* block */ hidePINHandler;
@property (copy, nonatomic) id /* block */ progressHandlerEx;
@property (copy, nonatomic) id /* block */ receivedObjectHandler;

- (void)_cleanup;
- (void)sendSetupAction:(unsigned int)a0 info:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleSessionStarted:(id)a0;
- (void)_handleSetupActionRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_completed:(int)a0;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)a0;
- (void)invalidate;
- (void)_run;
- (void)_invalidated;
- (void)dealloc;
- (int)_runResumeIfNeeded;
- (void)_handleSessionSecured:(id)a0;
- (void)_handleConfigRequestReceived:(id)a0;
- (void)sendObject:(id)a0;
- (void)_handleAppEventReceived:(id)a0;
- (void)_handleSetupActionSuspend;
- (void)_handleSetupActionResume;
- (void)_receivedObject:(id)a0 flags:(unsigned int)a1;

@end
