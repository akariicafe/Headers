@class NSDate, NSString, NSUndoManager, NSURL, VSDevice, NSDictionary, NSUserDefaults;

@interface VSPreferences : NSObject

@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSUserDefaults *globalUserDefaults;
@property (retain, nonatomic) VSDevice *device;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly, copy, nonatomic) NSURL *overridingAppBootURL;
@property (readonly, nonatomic) BOOL shouldDisableRequestTimeouts;
@property (readonly, nonatomic) BOOL shouldAlwaysAllowRemoteInspection;
@property (readonly, nonatomic) BOOL shouldSkipSetup;
@property (nonatomic) long long cachedAvailabilityStatus;
@property (nonatomic) long long cachedDeveloperProviderStatus;
@property (nonatomic) long long cachedStoreProviderStatus;
@property (readonly, nonatomic) BOOL allowNonSystemTrust;
@property (readonly, nonatomic) BOOL allowInsecureAuthContext;
@property (readonly, nonatomic) BOOL useLegacyVendorIdentifier;
@property (retain, nonatomic) NSDictionary *vendorIdentifierDictionary;
@property (nonatomic) BOOL isInSTBMode;
@property (readonly, nonatomic) BOOL setTopBoxInfoIsSetTopBoxOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoProviderIdOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoProviderDisplayNameOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoAppAdamIdOverride;
@property (readonly, nonatomic) NSString *setTopBoxInfoBundleIdentifierOverride;
@property (nonatomic) BOOL ignoreSetTopBoxProfile;
@property (readonly, nonatomic) NSDate *setTopBoxActivationTime;
@property (retain, nonatomic) NSString *metricUserID;
@property (readonly, nonatomic) NSDate *metricUserIDLastGenerated;
@property (readonly, nonatomic) BOOL performedSubcriptionToUserAccountMigration;
@property (readonly, nonatomic) BOOL flushMetrics;

- (void)setShouldSkipSetup;
- (void)clearFeature:(id)a0;
- (void)noteDesiredApp:(id)a0;
- (void)setSetTopBoxActivationTime;
- (void)disableFeature:(id)a0;
- (BOOL)performedSubcriptionToUserAccountMigration;
- (void)enableFeature:(id)a0;
- (BOOL)hasChosenDesiredApp;
- (BOOL)featureIsEnabled:(id)a0 present:(BOOL *)a1;
- (void)_updateValue:(id)a0 forKey:(id)a1;
- (BOOL)shouldSkipSetup;
- (void)_updateShouldSkipSetupWithNumber:(id)a0;
- (void)removeSkipSetupPreset;
- (long long)forcedAvailabilityStatus;
- (void)clearSetTopBoxActivationTime;
- (id)setTopBoxActivationTime;
- (BOOL)shouldUseLegacyVendorIdentifier;
- (void).cxx_destruct;
- (void)setPerformedSubcriptionToUserAccountMigration;

@end
