@interface SafariDeveloperSettingsController : SafariSettingsListController

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)setRemoteInspectorEnabled:(id)a0 specifier:(id)a1;
- (id)remoteInspectorEnabled:(id)a0;
- (void)setRemoteAutomationEnabled:(id)a0 specifier:(id)a1;
- (id)_remoteAutomationEnabled:(id)a0;
- (void)_setRemoteInspectorEnabled:(BOOL)a0;
- (void)_setRemoteAutomationEnabled:(BOOL)a0;
- (id)_automationController;
- (BOOL)isJavaScriptRestricted:(id)a0;
- (id)isJavaScriptEnabled:(id)a0;

@end
