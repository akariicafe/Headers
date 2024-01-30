@interface PKPortraitNavigationController : UINavigationController

- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;

@end
