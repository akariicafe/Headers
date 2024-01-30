@class SBDeviceApplicationRemoteTransientOverlayViewProvider;

@interface SBDeviceApplicationRemoteTransientOverlayContainerViewController : UIViewController {
    SBDeviceApplicationRemoteTransientOverlayViewProvider *_viewProvider;
}

- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (id)initWithViewProvider:(id)a0;

@end
