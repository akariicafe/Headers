@class MOAppStoreSettingsGroup, MOAccountSettingsGroup, NSDictionary, MOShieldSettingsGroup, MOManagedSettingsSettingsGroup, MOSafariSettingsGroup, MOCellularSettingsGroup, MODateAndTimeSettingsGroup, MOAllowedClientSettingsGroup, MOMediaSettingsGroup, MOApplicationSettingsGroup, MOGameCenterSettingsGroup, MODeviceActivitySettingsGroup, MOPasscodeSettingsGroup, MOSiriSettingsGroup, MOUserSettingsGroup, MOWebContentSettingsGroup;
@protocol MOSettingsReader, MOSettingsWriter;

@interface MOSettingsStore : NSObject

@property (class, readonly, nonatomic) NSDictionary *directoryAttributes;
@property (class, readonly, nonatomic) NSDictionary *fileAttributes;

@property (readonly, weak) id<MOSettingsReader> reader;
@property (readonly, weak) id<MOSettingsWriter> writer;
@property (readonly, nonatomic) MOAccountSettingsGroup *account;
@property (readonly, nonatomic) MOAllowedClientSettingsGroup *allowedClient;
@property (readonly, nonatomic) MOApplicationSettingsGroup *application;
@property (readonly, nonatomic) MOAppStoreSettingsGroup *appStore;
@property (readonly, nonatomic) MOCellularSettingsGroup *cellular;
@property (readonly, nonatomic) MODateAndTimeSettingsGroup *dateAndTime;
@property (readonly, nonatomic) MODeviceActivitySettingsGroup *deviceActivity;
@property (readonly, nonatomic) MOGameCenterSettingsGroup *gameCenter;
@property (readonly, nonatomic) MOManagedSettingsSettingsGroup *managedSettings;
@property (readonly, nonatomic) MOMediaSettingsGroup *media;
@property (readonly, nonatomic) MOPasscodeSettingsGroup *passcode;
@property (readonly, nonatomic) MOSafariSettingsGroup *safari;
@property (readonly, nonatomic) MOShieldSettingsGroup *shield;
@property (readonly, nonatomic) MOSiriSettingsGroup *siri;
@property (readonly, nonatomic) MOUserSettingsGroup *user;
@property (readonly, nonatomic) MOWebContentSettingsGroup *webContent;

+ (void)createSettingsDirectoryAtURL:(id)a0;
+ (id)loadDataAtURL:(id)a0 outError:(id *)a1;
+ (id)loadSettingsAtURL:(id)a0;
+ (void)migrateSettingsIfNecessary:(id)a0;
+ (BOOL)saveSettings:(id)a0 toURL:(id)a1;

- (void).cxx_destruct;
- (id)initStore;
- (id)settingKeyFromSetting:(id)a0 group:(id)a1;

@end
