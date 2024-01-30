@class STBlockingViewController;

@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider {
    STBlockingViewController *_blockingViewController;
    BOOL _isActive;
}

- (void)_handleInstalledAppsChanged:(id)a0;
- (id)_realOverlayViewController;
- (void)_deactivateIfPossible;
- (long long)priority;
- (void)_activateIfPossible;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1;
- (void)showContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)hideContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)_newBlockingViewControllerWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
