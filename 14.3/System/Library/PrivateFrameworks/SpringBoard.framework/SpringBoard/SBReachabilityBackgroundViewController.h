@interface SBReachabilityBackgroundViewController : UIViewController

- (id)view;
- (BOOL)shouldAutorotate;
- (id)initWithWallpaperVariant:(long long)a0;
- (BOOL)_canShowWhileLocked;

@end
