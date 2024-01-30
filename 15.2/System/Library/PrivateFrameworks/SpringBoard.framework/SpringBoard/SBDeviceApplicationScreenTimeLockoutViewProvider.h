@class STBlockingViewController;

@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider {
    STBlockingViewController *_blockingViewController;
    BOOL _isActive;
}

- (void)_handleInstalledAppsChanged:(id)a0;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1;
- (id)_realOverlayViewController;
- (void)showContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)hideContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_activateIfPossible;
- (void)_deactivateIfPossible;
- (void).cxx_destruct;
- (long long)priority;
- (id)_newBlockingViewControllerWithBundleIdentifier:(id)a0;
- (void)dealloc;

@end
