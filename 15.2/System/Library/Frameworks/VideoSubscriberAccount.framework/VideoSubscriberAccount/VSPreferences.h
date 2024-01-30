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

- (void)noteSetTopBoxActicationTime;
- (BOOL)ignoreSetTopBoxProfile;
- (void)noteDidSendWelcomeMessage;
- (BOOL)allowInsecureAuthContext;
- (id)setTopBoxInfoBundleIdentifierOverride;
- (void)removeSkipSetupPreset;
- (BOOL)shouldIgnoreExtendedValidation;
- (id)setTopBoxInfoAppAdamIdOverride;
- (void)clearSetTopBoxActivationTime;
- (void)noteDesiredApp:(id)a0;
- (void).cxx_destruct;
- (id)setTopBoxInfoProviderIdOverride;
- (id)metricUserIDLastGenerated;
- (id)setTopBoxActivationTime;
- (void)noteIsInSTBMode:(BOOL)a0;
- (id)setTopBoxInfoProviderDisplayNameOverride;
- (BOOL)setTopBoxInfoIsSetTopBoxOverride;
- (BOOL)hasChosenDesiredApp;
- (void)_updateValue:(id)a0 forKey:(id)a1;
- (void)setMetricUserID:(id)a0;
- (void)_updateShouldSkipSetupWithNumber:(id)a0;
- (BOOL)isInSTBMode;
- (void)setIgnoreSetTopBoxProfile:(BOOL)a0;
- (void)noteShouldSkipSetup;
- (id)metricUserID;

@end
