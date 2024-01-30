@interface _SFPerSitePreferenceNotifyingListController : PSListController

- (void)dealloc;
- (id)init;
- (void)perSitePreferenceValueDidChange;
- (void)_didUpdatePerSitePreferenceNotificationReceived:(id)a0;
- (void)_didUpdatePerSitePreferenceRemotely:(id)a0;
- (void)notifyPerSitePreferenceValueDidChange;

@end
