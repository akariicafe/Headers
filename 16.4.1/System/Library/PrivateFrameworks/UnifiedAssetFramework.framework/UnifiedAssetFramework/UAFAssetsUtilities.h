@class AFSettingsConnection, TRIClient, AFPreferences, NSObject;
@protocol OS_os_log;

@interface UAFAssetsUtilities : NSObject {
    TRIClient *_client;
    AFSettingsConnection *_connection;
    AFPreferences *_preferences;
    NSObject<OS_os_log> *_logCategory;
}

+ (id)stringFromUAFAssetsState:(unsigned long long)a0;

- (void)_statMountPoint:(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_currentLanguage;
- (unsigned long long)_cacheDeleteAvailableWithStats:(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0;
- (unsigned int)_veryLowDiskThresholdWithStats:(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0;
- (id)_assetSpaceRequired;
- (BOOL)_assetsAreAvailable;
- (void)_beginDownloadFactor:(id)a0 inNamespace:(id)a1;
- (id)_beginDownloadNamespaces:(id)a0;
- (BOOL)_downloadAssetsWithState:(unsigned long long *)a0 context:(id *)a1;
- (void)_emitDownloadTriggerEventWithLanguage:(id)a0 hasExistingAssets:(BOOL)a1 retryCount:(unsigned long long)a2;
- (unsigned long long)_getMockAssetStateWithContext:(id *)a0;
- (BOOL)_hasInexpensiveNetwork;
- (id)_lowPoweredNamespaces;
- (id)_regionCodeFromLocale:(id)a0;
- (id)_requiredNamespaces;
- (void)_subscribeOnDemandAssetsForLanguage:(id)a0;
- (void)_downloadAssetsWithStatusHandler:(id /* block */)a0 availableAttempts:(unsigned long long)a1 language:(id)a2;
- (BOOL)_languageDiffersFromCurrent:(id)a0;
- (BOOL)_languageSupportsUODWithASR:(id)a0;
- (BOOL)_supportsLocale:(id)a0;
- (void)checkAssetsForLanguage:(id)a0 userInitiated:(BOOL)a1 withStatusHandler:(id /* block */)a2;
- (id)initWithTrialClient:(id)a0 settingsConn:(id)a1 prefsInstance:(id)a2;

@end
