@interface SiriRoutePickerAlertController : UIAlertController

- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;

@end
