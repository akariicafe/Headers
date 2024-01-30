@interface NCNotificationManagementTimeSensitiveSuggestionContentProvider : NCNotificationManagementSuggestionContentProvider

- (void)configureOptionButtons:(id)a0;
- (id)initWithNotificationRequest:(id)a0 bundleDisplayName:(id)a1 managementDelegate:(id)a2 suggestionDelegate:(id)a3;
- (void)handleKeepAction:(id)a0;
- (void)handleOffAction:(id)a0;

@end
