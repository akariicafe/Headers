@interface TRIClientFactorPackUtils : NSObject

+ (id)subscribedOnDemandFactorsForAssetIds:(id)a0 factorPack:(id)a1 subscriptionSettings:(id)a2;
+ (id)unlinkedOnDemandAssetsWithFactorPack:(id)a0;
+ (id)requiredAssetsForInstallationWithFactorPack:(id)a0 assetStore:(id)a1 subscriptionSettings:(id)a2 aliases:(id)a3;
+ (id)_triCollectMetadataForAssetsInFactorPack:(id)a0 withTest:(id /* block */)a1;

@end
