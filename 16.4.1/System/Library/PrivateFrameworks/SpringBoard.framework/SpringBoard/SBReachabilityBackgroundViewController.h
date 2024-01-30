@interface SBReachabilityBackgroundViewController : UIViewController

- (BOOL)shouldAutorotate;
- (id)view;
- (BOOL)_canShowWhileLocked;
- (id)initWithWallpaperVariant:(long long)a0;
- (unsigned long long)supportedInterfaceOrientations;

@end
