@class NSNumber, LAContext, NSData, NSError, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, NPKQuickPaymentSessionLocalAuthenticationCoordinatorCredentialDelegate;

@interface NPKQuickPaymentSessionLocalAuthenticationCoordinator : NSObject <LAUIDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *localAuthenticationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) LAContext *completedContext;
@property (retain, nonatomic) NSData *completedCredential;
@property (retain, nonatomic) NSError *completedError;
@property (retain, nonatomic) LAContext *inProgressContext;
@property (retain, nonatomic) NSMutableArray *pendingLocalAuthenticationEvents;
@property (retain, nonatomic) NSNumber *activeLocalAuthenticationEvent;
@property (weak, nonatomic) id<NPKQuickPaymentSessionLocalAuthenticationCoordinatorCredentialDelegate> credentialDelegate;

- (void)_performDelegateCallback:(id /* block */)a0;
- (id)initWithCallbackQueue:(id)a0;
- (void).cxx_destruct;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)beginLocalAuthenticationWithAccessControl:(struct __SecAccessControl { } *)a0 operation:(long long)a1 completion:(id /* block */)a2;
- (void)_activateLocalAuthenticationEvent:(long long)a0;
- (void)_cancelLocalAuthentication;
- (long long)_credentialTypeForEvent:(long long)a0;
- (void)_deactivateLocalAuthenticationEvent:(long long)a0;
- (void)_handleLocalAuthenticationPolicyEvaluatedWithContext:(id)a0 error:(id)a1;
- (void)_invokeCompletionHandlerForInvalidationWithError:(id)a0;
- (id)_nameForLocalAuthenticationEvent:(long long)a0;
- (void)_presentNextLocalAuthenticationEvent;
- (void)beginLocalAuthenticationWithCompletion:(id /* block */)a0;
- (void)beginLocalAuthenticationWithPolicy:(long long)a0 completion:(id /* block */)a1;
- (void)invalidateLocalAuthenticationContexts;

@end
