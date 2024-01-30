@class NSUndoManager, NSURL, VSDevice, NSUserDefaults;

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
@property (readonly, nonatomic) BOOL hasSentWelcomeMessage;

- (BOOL)hasChosenDesiredApp;
- (void)_updateValue:(id)a0 forKey:(id)a1;
- (id)metricUserID;
- (id)setTopBoxInfoProviderIdOverride;
- (void).cxx_destruct;
- (void)_updateShouldSkipSetupWithNumber:(id)a0;
- (BOOL)setTopBoxInfoIsSetTopBoxOverride;
- (BOOL)shouldIgnoreExtendedValidation;
- (void)setMetricUserID:(id)a0;
- (BOOL)allowInsecureAuthContext;
- (void)noteDesiredApp:(id)a0;
- (BOOL)ignoreSetTopBoxProfile;
- (void)noteShouldSkipSetup;
- (id)setTopBoxInfoAppAdamIdOverride;
- (id)metricUserIDLastGenerated;
- (BOOL)isInSTBMode;
- (id)setTopBoxInfoBundleIdentifierOverride;
- (id)setTopBoxInfoProviderDisplayNameOverride;
- (void)removeSkipSetupPreset;
- (void)setIgnoreSetTopBoxProfile:(BOOL)a0;
- (void)noteDidSendWelcomeMessage;
- (void)noteIsInSTBMode:(BOOL)a0;

@end
