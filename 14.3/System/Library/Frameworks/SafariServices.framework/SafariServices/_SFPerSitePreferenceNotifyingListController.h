@interface _SFPerSitePreferenceNotifyingListController : PSListController

- (id)init;
- (void)dealloc;
- (void)_didUpdatePerSitePreferenceNotificationReceived:(id)a0;
- (void)perSitePreferenceValueDidChange;
- (void)notifyPerSitePreferenceValueDidChange;

@end
