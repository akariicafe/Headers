@interface MCNotifier : NSObject

- (void)sendSettingsChangedNotification;
- (void)sendPasscodeChangedNotification;
- (void)sendActivationLockBypassCodeWasStoredNotification;
- (void)sendActivationRecordStoredNotification;
- (void)sendAirPlayPreferencesChangedNotification;
- (void)sendAllowPasscodeModificationChangedNotification;
- (void)sendAppWhitelistChangedNotification;
- (void)sendClientTruthChangedNotification;
- (void)sendCloudConfigurationDetailsChangedNotification;
- (void)sendDependencyChangedNotification;
- (void)sendDiagnosticsCollectedNotification;
- (void)sendEffectiveSettingsChangedNotificationWithPID:(int)a0;
- (void)sendHomeScreenLayoutChangedNotification;
- (void)sendKeyboardSettingsChangedNotification;
- (void)sendManagedAppsChangedNotification;
- (void)sendManagedBooksChangedNotification;
- (void)sendNewsSettingsChangedNotification;
- (void)sendPasscodePolicyChangedNotification;
- (void)sendProfileListChangedNotification;
- (void)sendRemovedSystemAppsChangedNotification;
- (void)sendRestrictionChangedNotification;
- (void)sendSafariCookiePolicyChangedNotification;
- (void)sendTriggerRollKeybagsNotification;
- (void)sendUnlockScreenTypeDidChangeNotification;
- (void)sendUserNotificationsSettingsChangedNotification;
- (void)sendWebContentFilterChangedNotification;
- (void)sendWebContentFilterTypeChangedNotification;
- (void)sendWebContentFilterUIActiveChangedNotification;

@end
