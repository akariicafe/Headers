@interface SearchUIPrivacyDetailsViewController : UINavigationController

- (id)init;
- (BOOL)_canShowWhileLocked;
- (void)dismiss;

@end
