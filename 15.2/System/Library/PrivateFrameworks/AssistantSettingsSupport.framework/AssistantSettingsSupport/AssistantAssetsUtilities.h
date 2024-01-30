@class NSString, TRIClient, AFSettingsConnection;

@interface AssistantAssetsUtilities : NSObject {
    TRIClient *_client;
    AFSettingsConnection *_connection;
}

@property (copy, nonatomic) NSString *requestedLanguage;

- (void)_statMountPoint:(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_currentLanguage;
- (BOOL)_deviceSupportsUOD;
- (unsigned long long)_getMockAssetStateWithContext:(id *)a0;
- (BOOL)_assetsAreAvailable;
- (void)_emitDownloadTriggerEventWithLanguage:(id)a0 hasExistingAssets:(BOOL)a1 retryCount:(unsigned long long)a2;
- (id)_requiredNamespaces;
- (id)_beginDownloadNamespaces:(id)a0;
- (BOOL)_hasInexpensiveNetwork;
- (id)_assetSpaceRequired;
- (void)_subscribeOnDemandAssetsForLanguage:(id)a0;
- (void)_downloadAssetsWithStatusHandler:(id /* block */)a0 availableAttempts:(unsigned long long)a1;
- (BOOL)_downloadAssetsWithState:(unsigned long long *)a0 context:(id *)a1;
- (BOOL)requestedLanguageDiffersFromCurrent;
- (BOOL)_supportsCurrentLocale;
- (void)_beginDownloadFactor:(id)a0 inNamespace:(id)a1;
- (id)_regionCodeFromLocale:(id)a0;
- (unsigned int)_veryLowDiskThresholdWithStats:(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0;
- (long long)_cacheDeleteAvailableWithStats:(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0;
- (void)checkAssetsWithStatusHandler:(id /* block */)a0;

@end
