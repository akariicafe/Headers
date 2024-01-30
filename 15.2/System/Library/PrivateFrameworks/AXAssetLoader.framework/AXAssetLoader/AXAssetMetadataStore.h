@class NSUserDefaults;

@interface AXAssetMetadataStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) AXAssetMetadataStore *store;

@property (retain, nonatomic) NSUserDefaults *defaults;

- (void).cxx_destruct;
- (id)_init;
- (void)setValue:(id)a0 forKey:(id)a1 forAssetType:(id)a2;
- (void)_performWithLock:(id /* block */)a0;
- (void)recordLastAssetAccess:(id)a0;
- (void)_mutateAssertionsForAssetType:(id)a0 assertions:(id)a1 mutationBlock:(id /* block */)a2;
- (void)_mutateAssetAssertions:(id /* block */)a0;
- (void)_mutateInstalledAssetsForAssetType:(id)a0 installedAssets:(id)a1 mutationBlock:(id /* block */)a2;
- (void)_mutateInstalledAssets:(id /* block */)a0;
- (void)_mutateAssetEventsForAssetType:(id)a0 events:(id)a1 mutationBlock:(id /* block */)a2;
- (void)_mutateAssetEvents:(id)a0 block:(id /* block */)a1;
- (void)_mutateOverridesForAssetType:(id)a0 overrides:(id)a1 mutationBlock:(id /* block */)a2;
- (void)_mutateOverrides:(id /* block */)a0;
- (void)_mutateUserInfoForAssetType:(id)a0 userInfo:(id)a1 mutationBlock:(id /* block */)a2;
- (void)_mutateUserInfo:(id /* block */)a0;
- (void)requestAssertion:(id)a0;
- (void)discardAssertion:(id)a0;
- (void)discardAllAssertionsOfType:(id)a0 heldByClient:(id)a1;
- (void)discardAllAssertionsOfType:(id)a0;
- (id)heldAssertionsForAssetType:(id)a0;
- (void)recordInstalledAssets:(id)a0 forAssetType:(id)a1;
- (void)recordAssetRefreshEventForAssetType:(id)a0;
- (void)recordAssetsToBePurged:(id)a0 forAssetType:(id)a1;
- (void)recordAssetsToBeDownloaded:(id)a0 forAssetType:(id)a1;
- (id)overrideMinimumCompatibilityVersionForAssetType:(id)a0;
- (void)setOverrideMinimumCompatibilityVersion:(id)a0 forAssetType:(id)a1;
- (id)overrideMaximumCompatibilityVersionForAssetType:(id)a0;
- (void)setOverrideMaximumCompatibilityVersion:(id)a0 forAssetType:(id)a1;
- (id)valueForKey:(id)a0 forAssetType:(id)a1;

@end
