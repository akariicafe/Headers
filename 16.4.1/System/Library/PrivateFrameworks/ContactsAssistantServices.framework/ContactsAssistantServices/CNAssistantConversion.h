@class NSArray;

@interface CNAssistantConversion : NSObject

@property (class, readonly, nonatomic) NSArray *descriptorsForRequiredKeys;

+ (void)removeFieldsFromPerson:(id)a0 toContactWithIdentifier:(id)a1 usingStore:(id)a2 saveRequest:(id)a3;
+ (id)addressesFromContact:(id)a0;
+ (id)relationsForSyncFromContact:(id)a0;
+ (id)personFromMeContact:(id)a0;
+ (id)filterLabeledValues:(id)a0 droppingEmptyLabels:(BOOL)a1 droppingDuplicates:(BOOL)a2;
+ (id)createSASourceFromCNContainer:(id)a0;
+ (id)phoneNumbersFromContact:(id)a0;
+ (id)relationsFromContact:(id)a0;
+ (id)keysFromPerson:(id)a0;
+ (id)descriptorsForRequiredKeysForConversionType:(long long)a0;
+ (id)emailAddressesFromPerson:(id)a0;
+ (id)personFromContact:(id)a0 useABPerson:(BOOL)a1;
+ (id)personFromContact:(id)a0;
+ (id)phoneNumbersForSyncFromContact:(id)a0;
+ (void)markMeContactInPeople:(id)a0 usingStore:(id)a1;
+ (id)socialProfilesFromContact:(id)a0;
+ (id)createSAPersonFromCNContactWithExternalIdentifier:(id)a0;
+ (void)setFieldsFromPerson:(id)a0 toContactWithIdentifier:(id)a1 usingStore:(id)a2 saveRequest:(id)a3;
+ (id)createSAPersonFromCNContact:(id)a0 conversionType:(long long)a1;
+ (void)applyUpdate:(id)a0 toContactWithIdentifier:(id)a1 usingStore:(id)a2 saveRequest:(id)a3;
+ (id)relationsFromPerson:(id)a0;
+ (id)verifyContact:(id)a0 hasDescriptorsForRequiredKeys:(id)a1;
+ (void)addFieldsFromPerson:(id)a0 toContactWithIdentifier:(id)a1 usingStore:(id)a2 saveRequest:(id)a3;
+ (id)addressesFromPerson:(id)a0;
+ (id)personForSyncFromContact:(id)a0;
+ (id)addressesForSyncFromContact:(id)a0;
+ (id)emailAddressesForSyncFromContact:(id)a0;
+ (id)phoneNumbersFromPerson:(id)a0;
+ (id)createSAPersonFromCNContact:(id)a0;
+ (id)emailAddressesFromContact:(id)a0;

@end
