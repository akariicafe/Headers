@interface CNDonatedMeCardPersistenceHelper : NSObject

+ (id)defaultKeysForValuesToPersist;
+ (id)mutableCopyOfContact:(id)a0 byCopyingValuesForKeysOnly:(id)a1;
+ (BOOL)createNewMeContact:(id)a0 inStore:(id)a1;
+ (id)mutableCopyOfContact:(id)a0 byCopyingModificationsAndValuesForKeysOnly:(id)a1;
+ (id)propertyGroupItemLog;

@end
