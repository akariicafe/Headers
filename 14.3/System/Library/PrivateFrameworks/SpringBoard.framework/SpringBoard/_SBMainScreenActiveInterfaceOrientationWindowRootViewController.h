@interface _SBMainScreenActiveInterfaceOrientationWindowRootViewController : SBFTouchPassThroughViewController

@property (nonatomic) unsigned long long supportedInterfaceOrientations;

- (id)_viewControllerForSupportedInterfaceOrientationsWithDismissCheck:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (BOOL)_canShowWhileLocked;

@end
