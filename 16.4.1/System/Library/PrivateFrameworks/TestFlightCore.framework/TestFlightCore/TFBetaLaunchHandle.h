@class BSProcessHandle, NSString;
@protocol TFBetaLaunchHandleActivationDelegate;

@interface TFBetaLaunchHandle : NSObject <SBSRemoteAlertHandleObserver>

@property (readonly, nonatomic) BSProcessHandle *processHandle;
@property (readonly, copy, nonatomic) NSString *logKey;
@property (weak, nonatomic) id<TFBetaLaunchHandleActivationDelegate> activationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (id)initWithProcessHandle:(id)a0;
- (void).cxx_destruct;
- (void)activateIfNeeded;
- (void)_activateRemoteAlertWithLaunchInfo:(id)a0;
- (BOOL)_remoteAlertShouldActivateForLaunchInfo:(id)a0;
- (void)_updatedLaunchInfoForActivation:(id)a0;
- (void)activateForTestingWithLaunchInfo:(id)a0;

@end
