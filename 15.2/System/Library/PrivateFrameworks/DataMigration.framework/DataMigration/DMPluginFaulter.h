@class NSString;

@interface DMPluginFaulter : NSObject <DMPluginFaulting>

@property (copy, nonatomic) NSString *message;

+ (id)_selectorNameFromPluginIdentifier:(id)a0;

- (void)_fault;
- (void)sbmigrator;
- (void)siriSiri;
- (void)MKBMigrator;
- (void).cxx_destruct;
- (void)LaunchServicesMigrator;
- (void)MobileContainerManagerContainerMigrator;
- (void)MSUDataMigrator;
- (void)MobileInstallationSystemAppMigrator;
- (void)timedmigrator;
- (void)managedconfigurationmigrator;
- (void)MobileGestaltMobileGestaltMigrator;
- (void)WiFiDataMigrator;
- (void)MobileInstallationAppUserDataMigrator;
- (void)addressbookmigrator;
- (void)smsmigrator;
- (void)calendarmigrator;
- (void)accountsettingsmigrator;
- (void)WebBookmarksmigrator;
- (void)MobileSafarimigrator;
- (void)appleaccountmergebuddyprovisioningresponsemigrator;
- (void)appleaccountmigrator;
- (void)messageLegacyAccountsMigrator;
- (void)dataaccessmigratorlegacy;
- (void)accountsmigrator;
- (void)locationdmigrator;
- (void)AccessibilityAccessibilityDataMigration;
- (void)mobilebackupmigrator;
- (void)BuddyMigrator;
- (void)airtrafficmigrator;
- (void)managedconfigurationmdmmigrator;
- (void)AnisetteMigrator;
- (void)CallHistoryDataMigrator;
- (void)certuimigrator;
- (void)cloudrecentsmigrator;
- (void)CloudTabsMigratormigrator;
- (void)MobileAsset;
- (void)CommCenterMigrator;
- (void)CookieDataMigratormigrator;
- (void)dataaccessmigrator;
- (void)facetimemigrator;
- (void)HealthMigrator;
- (void)preferencesInternationalSupportMigrator;
- (void)keyboardsmigrator;
- (void)keyboardsuimigrator;
- (void)languageassetmigrator;
- (void)MapsDataClassMigratormigrator;
- (void)musiclibrarymigrator;
- (void)messageAccountsMigrator;
- (void)mobilemailmigrator;
- (void)MobileSlideShow;
- (void)tonemigrator;
- (void)NanoAudioControlMigrator;
- (void)NanoHealthMigrator;
- (void)nanomailclientmigrator;
- (void)PassbookDataMigrator;
- (void)PreferencesMigrator;
- (void)SoftwareUpdateBridge;
- (void)StocksMigrator;
- (void)vibrationmigrator;
- (void)iTunesStoremigrator;
- (void)VideosMigrator;
- (void)accountsobsolescencemigrator;
- (void)VoiceShortcutsShortcutsMigrator;
- (void)managedconfigurationcleanupmigrator;
- (void)coreaudioHAENDataMigrator;
- (void)faultWithPluginIdentifier:(id)a0 message:(id)a1;

@end
