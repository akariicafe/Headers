@interface HVHarvestEligibility : NSObject

+ (BOOL)searchableItemIsEligibleForHarvesting:(id)a0 eligibleExceptForAge:(BOOL *)a1;
+ (BOOL)searchableItemIsEligibleForHarvestingWithGetterBlock:(id /* block */)a0 bundleIdentifier:(id)a1 eligibleExceptForAge:(BOOL *)a2;
+ (BOOL)searchableItemIsStoredEncryptedWithGetterBlock:(id /* block */)a0 bundleIdentifier:(id)a1;
+ (BOOL)searchableItemIsEligibleForDeferredHarvesting:(id)a0;
+ (BOOL)searchableItemIsEligibleForDissectorPipeline:(id)a0 targetPluginsCustomAttributeName:(id)a1;

@end
