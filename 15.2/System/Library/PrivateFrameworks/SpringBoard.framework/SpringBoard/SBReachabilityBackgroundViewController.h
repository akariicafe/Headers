@interface SBReachabilityBackgroundViewController : UIViewController

- (BOOL)_canShowWhileLocked;
- (id)view;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithWallpaperVariant:(long long)a0;
- (BOOL)shouldAutorotate;

@end
