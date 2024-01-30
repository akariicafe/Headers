@class SBDeviceApplicationRemoteTransientOverlayViewProvider;

@interface SBDeviceApplicationRemoteTransientOverlayContainerViewController : UIViewController {
    SBDeviceApplicationRemoteTransientOverlayViewProvider *_viewProvider;
}

- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)_canShowWhileLocked;
- (long long)preferredStatusBarStyle;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (id)initWithViewProvider:(id)a0;

@end
