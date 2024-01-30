@class NSString, SBSStatusBarStyleOverridesCoordinator, SBSStatusBarStyleOverridesAssertion, MPMediaControls;

@interface MPMediaControlsStatusBarStyleOverridesCoordinator : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate> {
    SBSStatusBarStyleOverridesAssertion *_statusBarStyleOverride;
    SBSStatusBarStyleOverridesCoordinator *_coordinator;
    MPMediaControls *_mediaControls;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)statusBarCoordinator:(id)a0 receivedTapWithContext:(id)a1 completionBlock:(id /* block */)a2;
- (void)statusBarCoordinator:(id)a0 invalidatedRegistrationWithError:(id)a1;
- (void)presentMediaControls;
- (void)presentMediaControlsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
