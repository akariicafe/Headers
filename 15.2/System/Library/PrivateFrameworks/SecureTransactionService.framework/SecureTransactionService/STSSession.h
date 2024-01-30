@class NFSecureElementManagerSession, NSString, NSObject, STSTransactionHandler;
@protocol NFSession, STSSessionDelegate, OS_dispatch_semaphore, OS_dispatch_queue;

@interface STSSession : NSObject <NFSessionDelegate> {
    id<STSSessionDelegate> _sessionDelegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sessionUpdateLock;
    BOOL _controlSessionSuspended;
    NSObject<OS_dispatch_semaphore> *_controlSessionSem;
}

@property (retain, nonatomic) STSTransactionHandler *handler;
@property (retain, nonatomic) NSObject<NFSession> *initiatingSession;
@property (retain, nonatomic) NFSecureElementManagerSession *masterSESession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) id /* block */ theStartCallback;
@property (weak, nonatomic) id<STSSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (void)startWithDelegate:(id)a0 isFirstInQueue:(BOOL *)a1 completion:(id /* block */)a2;
- (id)init;
- (id)setActiveCredential:(id)a0;
- (id)startTransactionWithAuthorization:(id)a0 options:(unsigned long long)a1;
- (id)releaseCredential:(id)a0 withAuthorization:(id)a1 iso18013Selection:(id)a2;
- (id)stopTransaction;
- (void)dealloc;
- (id)startWithDelegate:(id)a0;
- (void)handleSessionResumed:(id)a0;
- (void)handleSessionSuspended:(id)a0 withToken:(id)a1;
- (void)fireSessionDidEndUnexpectedlyEventWithStatus:(unsigned long long)a0;
- (void)fireTransactionStartEvent:(id)a0;
- (void)fireTransactionEndEvent:(id)a0;
- (void)fireFieldNotificationEvent:(id)a0;
- (void)fireFieldDetectEvent:(BOOL)a0;
- (void)fireDidExpireTransaction:(BOOL)a0;
- (void)fireDidFailDeferredAuth:(BOOL)a0;
- (void)fireHasPendingServerRequest:(BOOL)a0;
- (void)fireDidSelectVAS:(BOOL)a0;
- (void)fireDidPerformVASTransactions:(id)a0;
- (void)fireExpressModeStateChange:(unsigned int)a0 withObject:(id)a1;
- (void)fireDidReceiveActivityTimeout:(id)a0;
- (void)fireSessionDidConsumeAuthorizationEvent;
- (void)fireSessionEndEvent:(id)a0;
- (void)_tearDownWithCompletion:(id /* block */)a0;
- (id)_canStartSession;
- (void)_startWithDelegate:(id)a0 isFirstInQueue:(BOOL *)a1;
- (id)getHandlerForCredential:(id)a0;
- (id)waitForControlSessionToResume:(int)a0;
- (id)_activateChildSession;
- (id)startWithDelegate:(id)a0 callback:(id /* block */)a1;
- (id)enableExpressModeForActiveCredential:(BOOL)a0;
- (id)releaseCredential:(id)a0 withAuthorization:(id)a1;
- (id)startWithNotificationTesterDelegate:(id)a0 outNotificationListener:(id *)a1;
- (void)testSendToAlternativeCarrier:(id)a0 completion:(id /* block */)a1;

@end
