@interface MCNotifier : NSObject

- (void)sendRestrictionChangedNotification;
- (void)sendPasscodeChangedNotification;
- (void)sendPasscodePolicyChangedNotification;
- (void)sendKeyboardSettingsChangedNotification;
- (void)sendUserNotificationsSettingsChangedNotification;
- (void)sendHomeScreenLayoutChangedNotification;
- (void)sendNewsSettingsChangedNotification;
- (void)sendProfileListChangedNotification;
- (void)sendSettingsChangedNotification;
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
- (void)sendDependencyChangedNotification;
- (void)sendTriggerRollKeybagsNotification;
- (void)sendActivationLockBypassCodeWasStoredNotification;

@end
