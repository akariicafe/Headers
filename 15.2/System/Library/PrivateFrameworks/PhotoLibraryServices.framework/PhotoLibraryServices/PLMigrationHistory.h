@class NSString, NSDictionary, NSDate, NSNumber;

@interface PLMigrationHistory : PLManagedObject

@property (nonatomic) long long index;
@property (nonatomic) long long modelVersion;
@property (retain, nonatomic) NSNumber *sourceModelVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (nonatomic) short migrationType;
@property (retain, nonatomic) NSDate *migrationDate;
@property (retain, nonatomic) NSNumber *forceRebuildReason;
@property (retain, nonatomic) NSDictionary *globalKeyValues;
@property (retain, nonatomic) NSString *storeUUID;
@property (nonatomic) short origin;

+ (void)initialize;
+ (id)entityName;
+ (id)currentMigrationHistoryWithManagedObjectContext:(id)a0;
+ (id)insertCreatedWithManagedObjectContext:(id)a0 index:(long long)a1 migrationDate:(id)a2;
+ (id)insertLightweightWithManagedObjectContext:(id)a0 index:(long long)a1 sourceModelVersion:(unsigned long long)a2 migrationDate:(id)a3;
+ (id)insertRebuildWithManagedObjectContext:(id)a0 index:(long long)a1 migrationDate:(id)a2 forceRebuildReason:(id)a3;
+ (id)migrationHistoryWithManagedObjectContext:(id)a0;
+ (id)insertIntoManagedObjectContext:(id)a0 index:(long long)a1 sourceModelVersion:(id)a2 migrationType:(long long)a3 migrationDate:(id)a4 forceRebuildReason:(id)a5;
+ (BOOL)currentMigrationHistoryIndex:(long long *)a0 withManagedObjectContext:(id)a1 error:(id *)a2;
+ (id)migrateLegacyMigrationHistoryWithMetadata:(id)a0 index:(long long)a1 outGlobalKeyValues:(id)a2 managedObjectContext:(id)a3;
+ (BOOL)recordCurrentMigrationStateInManagedObjectContext:(id)a0 withPathManager:(id)a1 migrationType:(long long)a2 forceRebuildReason:(id)a3 sourceModelVersion:(id)a4 updateLegacyMigrationState:(BOOL)a5 journalRebuildRequred:(BOOL)a6 origin:(short)a7 libraryCreateOptions:(unsigned long long)a8;
+ (long long)_rebuildMigrationHistoryWithJournal:(id)a0 managedObjectContext:(id)a1;

- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)supportsCloudUpload;
- (id)payloadIDForTombstone:(id)a0;

@end
