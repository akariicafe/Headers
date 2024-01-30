@interface ABSPublicABCNCompatibility : NSObject

+ (id)contactFromPublicABPerson:(void *)a0 keysToFetch:(id)a1;
+ (id)contactFromPublicABPerson:(void *)a0 keysToFetch:(id)a1 mutable:(BOOL)a2;
+ (id)contactPropertyKeyFromPublicABPropertyID:(int)a0;
+ (id)contactStoreForPublicAddressBook:(void *)a0;
+ (id)labeledValueFromPublicMultiValueIdentifier:(int)a0 contact:(id)a1 key:(id)a2 contactStore:(id)a3;
+ (BOOL)overwritePublicABPerson:(void *)a0 withContact:(id)a1;
+ (void *)publicABPersonFromContact:(id)a0 contactStore:(id)a1 publicAddressBook:(const void **)a2;
+ (int)publicABPropertyIDFromContactPropertyKey:(id)a0;
+ (int)publicMultiValueIdentifierFromLabeledValue:(id)a0 contactStore:(id)a1;
+ (BOOL)updateNewPublicABPerson:(void *)a0 withSavedContact:(id)a1 inAddressBook:(void *)a2;
+ (id)createAddressBookForConversion;

@end
