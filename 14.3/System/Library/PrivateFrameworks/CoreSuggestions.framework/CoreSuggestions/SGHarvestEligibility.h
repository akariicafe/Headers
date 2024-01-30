@interface SGHarvestEligibility : NSObject

+ (BOOL)searchableItemIsStoredEncryptedWithGetterBlock:(id /* block */)a0 bundleIdentifier:(id)a1;
+ (id /* block */)messagesAppItemEligibilityCheckBlock;
+ (BOOL)searchableItemIsEligibleForHarvesting:(id)a0 eligibleExceptForAge:(BOOL *)a1;
+ (BOOL)searchableItemIsEligibleForDeferredHarvesting:(id)a0;
+ (BOOL)searchableItemIsEligibleForHarvestingWithGetterBlock:(id /* block */)a0 bundleIdentifier:(id)a1 eligibleExceptForAge:(BOOL *)a2;
+ (BOOL)searchableItemIsEligibleForDissectorPipeline:(id)a0;
+ (id /* block */)mailAppItemEligibilityCheckBlock;
+ (id /* block */)genericItemIneligibleBlock;
+ (id /* block */)genericItemEligibleBlock;

@end
