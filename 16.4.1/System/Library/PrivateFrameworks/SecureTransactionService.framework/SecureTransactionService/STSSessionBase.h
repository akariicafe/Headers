@class NFSecureElementManagerSession, NSString, STSHardwareManagerWrapper, STSHandler, NSObject;
@protocol NFSession, STSSessionBaseDelegate, OS_dispatch_semaphore, OS_dispatch_queue;

@interface STSSessionBase : NSObject <NFSessionDelegate, NFSecureElementManagerSessionDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sessionUpdateLock;
    BOOL _controlSessionSuspended;
    NSObject<OS_dispatch_semaphore> *_controlSessionSem;
    STSHardwareManagerWrapper *_nfHwManager;
}

@property (retain, nonatomic) STSHandler *handler;
@property (retain, nonatomic) NSObject<NFSession> *initiatingSession;
@property (retain, nonatomic) NFSecureElementManagerSession *masterSESession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) id /* block */ theStartCallback;
@property (readonly, nonatomic) BOOL hasStartedWithDelegate;
@property (weak, nonatomic) id<STSSessionBaseDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (void)handleSessionResumed:(id)a0;
- (void)handleSessionSuspended:(id)a0 withToken:(id)a1;
- (id)setActiveCredential:(id)a0;
- (void)startWithDelegate:(id)a0 isFirstInQueue:(BOOL *)a1 completion:(id /* block */)a2;
- (void)secureElementManagerSessionDidEndUnexpectedly:(id)a0;
- (id)canStartSession;
- (id)waitForControlSessionToBeReady:(int)a0;
- (void)_tearDownOnQueue:(BOOL)a0 completion:(id /* block */)a1;
- (id)activateChildSession;
- (id)createHandlerForCredential:(id)a0;
- (void)fireSessionDidEndUnexpectedlyEventWithStatus:(unsigned long long)a0;
- (id)nfHardwareManager;
- (void)startWithDelegate:(id)a0 isFirstInQueue:(BOOL *)a1;

@end
