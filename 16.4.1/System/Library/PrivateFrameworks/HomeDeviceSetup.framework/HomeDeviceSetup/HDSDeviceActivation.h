@class NSString, NSObject;
@protocol OS_os_log;

@interface HDSDeviceActivation : NSObject <SignpostProviding>

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly) unsigned long long signpostID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_setupUserAgent;
- (void)_mae_activateWithData:(id)a0 headers:(id)a1 completion:(id /* block */)a2;
- (void)_mae_createActivationWithData:(id)a0 completion:(id /* block */)a1;
- (void)_mae_createSessionWithCompletion:(id /* block */)a0;
- (void)_mae_getActivationStateWithCompletion:(id /* block */)a0;
- (void)performActivationStep:(id)a0 completion:(id /* block */)a1;

@end
