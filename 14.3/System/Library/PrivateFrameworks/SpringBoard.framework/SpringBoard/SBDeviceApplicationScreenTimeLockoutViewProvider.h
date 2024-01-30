@class STBlockingViewController;

@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider {
    STBlockingViewController *_blockingViewController;
    BOOL _isActive;
}

- (void)_handleInstalledAppsChanged:(id)a0;
- (void)showContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_realOverlayViewController;
- (long long)priority;
- (void)_activateIfPossible;
- (id)_newBlockingViewControllerWithBundleIdentifier:(id)a0;
- (void)hideContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_deactivateIfPossible;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1;

@end
