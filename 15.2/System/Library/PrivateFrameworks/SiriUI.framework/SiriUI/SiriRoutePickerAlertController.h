@interface SiriRoutePickerAlertController : UIAlertController

- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;

@end
