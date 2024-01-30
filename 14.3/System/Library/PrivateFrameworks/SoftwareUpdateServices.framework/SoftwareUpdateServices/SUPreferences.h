@class NSMutableDictionary, NSDictionary, NSString, NSNumber, NSObject;
@protocol OS_dispatch_workloop, SUPreferencesObserver;

@interface SUPreferences : NSObject {
    NSObject<OS_dispatch_workloop> *_preferencesWorkloop;
}

@property (retain, nonatomic) NSDictionary *preferencesDefinitions;
@property (retain, nonatomic) NSMutableDictionary *cachedPreferences;
@property (nonatomic) id<SUPreferencesObserver> observer;
@property (readonly, nonatomic) BOOL disableManagedRequest;
@property (readonly, nonatomic) BOOL disableUserWiFiOnlyPeriod;
@property (readonly, nonatomic) BOOL disableBuildNumberComparison;
@property (readonly, nonatomic) BOOL allowSameBuildUpdates;
@property (readonly, nonatomic) BOOL disableAvailabilityAlerts;
@property (readonly, nonatomic, getter=isAutoDownloadDisabled) BOOL disableAutoDownload;
@property (readonly, nonatomic, getter=isAutoSUDisabled) BOOL disableAutoSU;
@property (readonly, nonatomic) BOOL scanWeeklyInternally;
@property (readonly, nonatomic) BOOL forceFullReplacement;
@property (readonly, nonatomic) BOOL disableFullReplacementFallback;
@property (readonly, nonatomic) NSNumber *updateDelayInterval;
@property (readonly, nonatomic) BOOL shouldDelayUpdates;
@property (readonly, nonatomic) BOOL shouldDelayInMinutes;
@property (readonly, nonatomic) NSNumber *unmetConstraints;
@property (readonly, nonatomic) NSNumber *mandatorySUFlags;
@property (readonly, nonatomic) NSString *requestedPMV;
@property (readonly, nonatomic) BOOL backgroundDLKnownBuilds;
@property (readonly, nonatomic) NSNumber *autoSUStartDelta;
@property (readonly, nonatomic) NSNumber *autoSUEndDelta;
@property (readonly, nonatomic) NSNumber *autoSUUnlockStartDelta;
@property (readonly, nonatomic) NSNumber *autoSUUnlockEndDelta;
@property (readonly, nonatomic) BOOL autoUpdateForceOn;
@property (readonly, nonatomic) BOOL autoUpdateForceOff;
@property (nonatomic, setter=enableAutomaticUpdateV2:) BOOL isAutomaticUpdateV2Enabled;
@property (readonly, nonatomic) NSNumber *bannerDelay;
@property (readonly, nonatomic) BOOL autoDownloadDeletedBuild;
@property (nonatomic, setter=enableAutomaticDownload:) BOOL isAutomaticDownloadEnabled;
@property (readonly, nonatomic) BOOL useSUCore;

+ (id)sharedInstance;

- (void)reload;
- (id)init;
- (void)dealloc;
- (void)_loadPreferences;
- (void)_setupAutomaticUpdateV2Enabled;
- (BOOL)_cachedBoolValueForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (BOOL)_autoDownloadDisableDefaultValue;
- (id)_cachedNumberValueForKey:(id)a0;
- (id)_mandatorySUFlagsForPreferences;
- (id)_cachedStringValueForKey:(id)a0;
- (BOOL)_autoInstallDefaultValue;
- (void)_setBooleanPreferenceForKey:(id)a0 value:(BOOL)a1;
- (void)_setObjectPreferenceForKey:(id)a0 value:(id)a1;
- (BOOL)isKeySetInPreferences:(id)a0;
- (id)_getValueOfKey:(id)a0 withType:(long long)a1;
- (BOOL)_getBooleanPreferenceForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (id)_copyNumberPreferenceForKey:(id)a0;
- (id)_copyStringPreferenceForKey:(id)a0;
- (void *)_copyPreferenceForKey:(struct __CFString { } *)a0 ofType:(unsigned long long)a1;
- (id)_cachedObjectForKey:(id)a0 ofClass:(Class)a1;
- (BOOL)disableAutoDownload;
- (void)_setCachedBooleanPreferenceForKey:(id)a0 value:(BOOL)a1;
- (void)setPreference:(id)a0 toBool:(BOOL)a1;
- (void)setPreference:(id)a0 toValue:(id)a1;

@end
