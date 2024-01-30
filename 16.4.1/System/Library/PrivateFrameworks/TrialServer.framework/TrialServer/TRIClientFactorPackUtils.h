@interface TRIClientFactorPackUtils : NSObject

+ (BOOL)_enumerateAssetFactorLevelsInFactorPack:(id)a0 trialAssetBlock:(id /* block */)a1 maAssetBlock:(id /* block */)a2;
+ (id)unlinkedOnDemandAssetsWithFactorPack:(id)a0 factorPackPath:(id)a1 assetStore:(id)a2 maProvider:(id)a3 aliasToUnaliasMap:(id)a4 unlinkedMAAssetsOnDisk:(id *)a5;
+ (id)aliasesInNamespace:(id)a0;
+ (id)requiredAssetsForInstallationWithFactorPack:(id)a0 assetStore:(id)a1 maProvider:(id)a2 subscriptionSettings:(id)a3 aliasToUnaliasMap:(id)a4;
+ (BOOL)_enumerateMetadataForAssetsInFactorPack:(id)a0 assetStore:(id)a1 maProvider:(id)a2 aliasToUnaliasMap:(id)a3 ckBlock:(id /* block */)a4 maBlock:(id /* block */)a5;
+ (id)uniqueAssets:(id)a0;

@end
