@interface _SBHostedKeyboardViewController : SBFTouchPassThroughViewController

- (BOOL)shouldAutorotate;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;

@end
