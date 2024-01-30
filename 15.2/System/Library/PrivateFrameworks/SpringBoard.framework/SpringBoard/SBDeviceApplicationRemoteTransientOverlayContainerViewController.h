@class SBDeviceApplicationRemoteTransientOverlayViewProvider;

@interface SBDeviceApplicationRemoteTransientOverlayContainerViewController : UIViewController {
    SBDeviceApplicationRemoteTransientOverlayViewProvider *_viewProvider;
}

- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithViewProvider:(id)a0;

@end
