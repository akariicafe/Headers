@class NSDictionary, NSUserDefaults, NSObject;
@protocol OS_os_log;

@interface AUDeveloperSettingsDatabase : NSObject {
    NSUserDefaults *_database;
    NSObject<OS_os_log> *_log;
}

@property (readonly) NSDictionary *accessoriesDictionary;

+ (id)sharedDatabase;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)migrateExistingDefaults;
- (unsigned long long)urlLocationTypeForAccessory:(id)a0;
- (BOOL)isValidLocationType:(unsigned long long)a0;
- (void)addAccessoryWithSerialNumber:(id)a0 info:(id)a1;
- (void)setAccessoriesDictionary:(id)a0;
- (id)seedParticipationDictionary;
- (void)accessoryNameForIdentifier:(id)a0 name:(id *)a1 serialNumber:(id *)a2 fusingType:(unsigned long long *)a3;
- (BOOL)isSeedParticipationEnabled:(id)a0;
- (void)updateAccessory:(id)a0 locationType:(unsigned long long)a1;

@end
