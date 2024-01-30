@interface HDMedicalIDDataMigrator : NSObject

+ (BOOL)migrateMedicalIDDataIfNeeded:(id)a0;
+ (BOOL)_migrateFromVersionNoneTo1:(id)a0;
+ (BOOL)_migrateEmergencyContactsToVersion2:(id)a0;
+ (BOOL)_migrateEmergencyContactsToVersion3:(id)a0;
+ (BOOL)_migrateFromVersion3ToVersion4:(id)a0;

@end
