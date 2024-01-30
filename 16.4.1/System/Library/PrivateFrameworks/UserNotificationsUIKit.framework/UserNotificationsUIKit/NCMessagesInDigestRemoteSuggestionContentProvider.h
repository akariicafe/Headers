@interface NCMessagesInDigestRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider

- (id)auxiliaryOptionActions;
- (void)handleLeaveOnButtonAction:(id)a0;
- (void)handleTurnOffMenuButtonAction:(id)a0;
- (id)initWithNotificationRequest:(id)a0 bundleDisplayName:(id)a1 managementDelegate:(id)a2 suggestionDelegate:(id)a3 uuid:(id)a4;

@end
