@class SBProximitySettings;

@interface _SBProximityTouchHandlingViewController : UIViewController {
    double _statusBarHeight;
    SBProximitySettings *_proximitySettings;
}

- (id)_view;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;

@end
