@interface _SBHostedKeyboardViewController : SBFTouchPassThroughViewController

- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;

@end
