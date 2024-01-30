@interface SFDeviceSetupActivation : NSObject

- (void)_mae_getActivationStateWithCompletion:(id /* block */)a0;
- (id)_setupUserAgent;
- (void)_mae_createSessionWithCompletion:(id /* block */)a0;
- (void)_mae_createActivationWithData:(id)a0 completion:(id /* block */)a1;
- (void)_mae_activateWithData:(id)a0 headers:(id)a1 completion:(id /* block */)a2;
- (void)performActivationStep:(id)a0 completion:(id /* block */)a1;

@end
