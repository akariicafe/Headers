@class NSString;

@interface DMPluginFaulter : NSObject <DMPluginFaulting>

@property (copy, nonatomic) NSString *message;

+ (id)_selectorNameFromPluginIdentifier:(id)a0;

- (void)_fault;
- (void).cxx_destruct;
- (void)Weather;
- (void)siriSiri;
- (void)sbmigrator;
- (void)MKBMigrator;
- (void)MobileAsset;
- (void)timedmigrator;
- (void)WiFiDataMigrator;
- (void)MobileContainerManagerContainerMigrator;
- (void)LaunchServicesMigrator;
- (void)MSUDataMigrator;
- (void)MobileInstallationSystemAppMigrator;
- (void)managedconfigurationmigrator;
- (void)MobileGestaltMobileGestaltMigrator;
- (void)BuddyMigrator;
- (void)MobileInstallationAppUserDataMigrator;
- (void)addressbookmigrator;
- (void)calendarmigrator;
- (void)accountsettingsmigrator;
- (void)certuimigrator;
- (void)WebBookmarksmigrator;
- (void)MobileSafarimigrator;
- (void)appleaccountmergeandremovemobilemeaccountsmigrator;
- (void)appleaccountmigrator;
- (void)appleaccountlegacymigrator;
- (void)appleaccountappleidaccountmigrator;
- (void)appleaccountmergebuddyprovisioningresponsemigrator;
- (void)messageLegacyAccountsMigrator;
- (void)dataaccessmigratorlegacy;
- (void)accountsmigrator;
- (void)locationdmigrator;
- (void)mobilebackupmigrator;
- (void)AccessibilityAccessibilityDataMigration;
- (void)airtrafficmigrator;
- (void)managedconfigurationmdmmigrator;
- (void)AnisetteMigrator;
- (void)CallHistoryDataMigrator;
- (void)cloudrecentsmigrator;
- (void)CloudTabsMigratormigrator;
- (void)CommCenterMigrator;
- (void)dataaccessmigrator;
- (void)CookieDataMigratormigrator;
- (void)facetimemigrator;
- (void)HealthMigrator;
- (void)preferencesInternationalSupportMigrator;
- (void)smsmigrator;
- (void)keyboardsmigrator;
- (void)keyboardsuimigrator;
- (void)languageassetmigrator;
- (void)MapsDataClassMigratormigrator;
- (void)musiclibrarymigrator;
- (void)messageAccountsMigrator;
- (void)mobilemailmigrator;
- (void)MobileSlideShow;
- (void)NanoAudioControlMigrator;
- (void)NanoHealthMigrator;
- (void)nanomailclientmigrator;
- (void)PassbookDataMigrator;
- (void)PreferencesMigrator;
- (void)SoftwareUpdateBridge;
- (void)StocksMigrator;
- (void)tonemigrator;
- (void)vibrationmigrator;
- (void)iTunesStoremigrator;
- (void)HomeKitMigrator;
- (void)VideosMigrator;
- (void)accountsobsolescencemigrator;
- (void)VoiceShortcutsShortcutsMigrator;
- (void)managedconfigurationcleanupmigrator;
- (void)coreaudioHAENDataMigrator;
- (void)faultWithPluginIdentifier:(id)a0 message:(id)a1;

@end
