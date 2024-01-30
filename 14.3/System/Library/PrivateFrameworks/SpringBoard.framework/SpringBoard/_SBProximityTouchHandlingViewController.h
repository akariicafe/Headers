@interface _SBProximityTouchHandlingViewController : UIViewController {
    double _statusBarHeight;
}

- (id)_view;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end
