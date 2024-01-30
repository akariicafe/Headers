@interface AMSStorageDataMigrator : NSObject

+ (void)_migrateDeviceOfferEligibilityWithDatabase:(id)a0;
+ (void)_migrateSharedStoreReviewWithDatabase:(id)a0;
+ (void)migrateStorageToDefaultsForNonAMSInternal:(id)a0;

@end
