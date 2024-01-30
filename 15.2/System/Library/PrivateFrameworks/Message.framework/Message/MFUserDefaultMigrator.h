@interface MFUserDefaultMigrator : NSObject

+ (id)log;
+ (void)migrateDefaults:(id)a0;
+ (id)oldKeysToNewKeysMap;
+ (void)migrateDefaultsFromOldKeysToNewKeys:(id)a0;
+ (id)_keysToMigrateToSharedAppGroup;
+ (void)_migrateExtPropertiesPlist;
+ (id)currentDeviceIdentifer;
+ (void)migratePropertyForOldKey:(id)a0 newKey:(id)a1;
+ (id)mobileMailDefaultForKey:(id)a0;
+ (void)removeMobileMailDefaultForKey:(id)a0;
+ (BOOL)migratePreferencesToSharedAppGroup;

@end
