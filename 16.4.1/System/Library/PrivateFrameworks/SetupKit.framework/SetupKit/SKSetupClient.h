@class NSString, CUNANSubscriber, NSObject, CUNANEndpoint;
@protocol OS_dispatch_queue;

@interface SKSetupClient : SKSetupBase <CUActivatable, CUAuthenticatableClient> {
    id /* block */ _activateCompletion;
    CUNANEndpoint *_nanEndpoint;
    CUNANSubscriber *_nanSubscriber;
}

@property (copy, nonatomic) id /* block */ overallCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ authPromptHandler;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activateWithCompletion:(id /* block */)a0;
- (void)_run;
- (void)tryPassword:(id)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_completeWithError:(id)a0;
- (id)init;
- (void)_invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_activateBLEWithCompletion:(id /* block */)a0;
- (void)_activateNANContinueWithError:(id)a0;
- (void)_activateNANWithCompletion:(id /* block */)a0;
- (void)_activateOOBWithCompletion:(id /* block */)a0;
- (void)_invalidateSteps;
- (void)_prepareSteps;
- (void)_prepareStepsOSRecovery;
- (void)_setupConnectionCommon:(id)a0;

@end
