@interface PKPortraitNavigationController : UINavigationController

- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;

@end
