@class NSString, NSObject;
@protocol OS_os_log;

@interface DMPluginFaulter : NSObject

@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) NSObject<OS_os_log> *os_log;

+ (id)_selectorNameFromPluginIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)MSUDataMigrator;
- (void)AccessibilityAccessibilityDataMigration;
- (void)VoiceShortcutsShortcutsMigrator;
- (void)BuddyMigrator;
- (void)CloudTabsMigratormigrator;
- (void)LaunchServicesMigrator;
- (void)MapsDataClassMigratormigrator;
- (void)MobileAsset;
- (void)MobileGestaltMobileGestaltMigrator;
- (void)MobileInstallationSystemAppMigrator;
- (void)NanoHealthMigrator;
- (void)PreferencesMigrator;
- (void)StocksMigrator;
- (void)MobileSlideShow;
- (void)AnisetteMigrator;
- (void)CallHistoryDataMigrator;
- (void)CookieDataMigratormigrator;
- (void)MKBMigrator;
- (void)MobileActivationMigrator;
- (void)MobileContainerManagerContainerMigrator;
- (void)MobileInstallationAppUserDataMigrator;
- (void)managedconfigurationmdmmigrator;
- (void)MobileSafarimigrator;
- (void)PassbookDataMigrator;
- (void)SoftwareUpdateBridge;
- (void)VideosMigrator;
- (void)WebBookmarksmigrator;
- (void)WiFiDataMigrator;
- (void)_faultForUnknownPluginIdentifier;
- (void)accountsmigrator;
- (void)accountsobsolescencemigrator;
- (void)addressbookmigrator;
- (void)airtrafficmigrator;
- (void)appleaccountmergebuddyprovisioningresponsemigrator;
- (void)appleaccountmigrator;
- (void)certuimigrator;
- (void)cloudrecentsmigrator;
- (void)coreaudioHAENDataMigrator;
- (void)dataaccessmigrator;
- (void)facetimemigrator;
- (void)faultWithPluginIdentifier:(id)a0 message:(id)a1;
- (void)iTunesStoremigrator;
- (void)keyboardsmigrator;
- (void)keyboardsuimigrator;
- (void)languageassetmigrator;
- (void)locationdmigrator;
- (void)managedconfigurationcleanupmigrator;
- (void)managedconfigurationmigrator;
- (void)messageAccountsMigrator;
- (void)messageLegacyAccountsMigrator;
- (void)mobilebackupmigrator;
- (void)mobilemailmigrator;
- (void)musiclibrarymigrator;
- (void)preferencesInternationalSupportMigrator;
- (void)sbmigrator;
- (void)securitydKeychainMigrator;
- (void)siriSiri;
- (void)smsmigrator;
- (void)timedmigrator;
- (void)tonemigrator;
- (void)vibrationmigrator;

@end
