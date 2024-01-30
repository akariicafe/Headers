@interface SearchUIPrivacyDetailsViewController : UINavigationController

- (void)dismiss;
- (BOOL)_canShowWhileLocked;
- (id)init;

@end
