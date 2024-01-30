@interface CNDonatedMeCardPersistenceHelper : NSObject

+ (BOOL)createNewMeContact:(id)a0 inStore:(id)a1;
+ (id)defaultKeysForValuesToPersist;
+ (id)mutableCopyOfContact:(id)a0 byCopyingModificationsAndValuesForKeysOnly:(id)a1;
+ (id)mutableCopyOfContact:(id)a0 byCopyingValuesForKeysOnly:(id)a1;
+ (id)propertyGroupItemLog;

@end
