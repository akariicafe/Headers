@interface MCNotifier : NSObject

- (void)sendRestrictionChangedNotification;
- (void)sendPasscodeChangedNotification;
- (void)sendProfileListChangedNotification;
- (void)sendPasscodePolicyChangedNotification;
- (void)sendKeyboardSettingsChangedNotification;
- (void)sendUserNotificationsSettingsChangedNotification;
- (void)sendHomeScreenLayoutChangedNotification;
- (void)sendNewsSettingsChangedNotification;
- (void)sendSettingsChangedNotification;
- (void)sendDependencyChangedNotification;
- (void)sendManagingOrgInfoChangedNotification;
- (void)sendEffectiveSettingsChangedNotificationWithPID:(int)a0;
- (void)sendClientTruthChangedNotification;
- (void)sendAppWhitelistChangedNotification;
- (void)sendCloudConfigurationDetailsChangedNotification;
- (void)sendWebContentFilterChangedNotification;
- (void)sendWebContentFilterUIActiveChangedNotification;
- (void)sendWebContentFilterTypeChangedNotification;
- (void)sendAirPlayPreferencesChangedNotification;
- (void)sendUnlockScreenTypeDidChangeNotification;
- (void)sendManagedBooksChangedNotification;
- (void)sendManagedAppsChangedNotification;
- (void)sendSafariCookiePolicyChangedNotification;
- (void)sendAllowPasscodeModificationChangedNotification;
- (void)sendRemovedSystemAppsChangedNotification;
- (void)sendDiagnosticsCollectedNotification;
- (void)sendTriggerRollKeybagsNotification;
- (void)sendActivationLockBypassCodeWasStoredNotification;

@end
