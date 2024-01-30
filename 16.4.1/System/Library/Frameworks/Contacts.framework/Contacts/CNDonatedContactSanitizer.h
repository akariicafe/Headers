@interface CNDonatedContactSanitizer : NSObject

+ (id)storeInfoFromPredicate:(id)a0;
+ (id)sanitizeDonatedContact:(id)a0 matchingPredicate:(id)a1;
+ (void)markContactAndMultiValuesAsDonated:(id)a0 usingStoreInfo:(id)a1 andStoreIdentifier:(id)a2;
+ (id)storeInfoByMergingStoreInfos:(id)a0;
+ (id)mutableCopyOfDonatedContact:(id)a0 withCustomIdentifier:(id)a1;

@end
