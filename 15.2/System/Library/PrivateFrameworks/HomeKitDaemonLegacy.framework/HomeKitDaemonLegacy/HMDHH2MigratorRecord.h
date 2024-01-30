@class NSString;

@interface HMDHH2MigratorRecord : HMFObject <HMFLogging>

@property (retain, nonatomic) NSString *hh2MigratorRecordDataStorePath;
@property (nonatomic) BOOL isMigrationInProgress;
@property (nonatomic) unsigned int currentMigrationAttempt;
@property (nonatomic) BOOL shouldSkipKeyRollOperations;
@property (nonatomic) BOOL forceMigrationFailureForTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)prepareDictionary:(BOOL)a0 attempt:(unsigned int)a1 skipKeyRoll:(BOOL)a2 forceFailForTesting:(BOOL)a3;
+ (id)archiveMigratorDict:(id)a0;
+ (id)unarchiveMigratorDict:(id)a0;
+ (id)singleRecord;
+ (id)prepareDictionary:(id)a0;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)writeToDisk;
- (id)initWithLocalStorePath:(id)a0;
- (void)readMigratorRecord;
- (void)unarchiveRecordFromData:(id)a0;
- (void)updateValuesFromDict:(id)a0;
- (BOOL)writeNewMigrationRecord;
- (BOOL)writeMigratorRecord:(id)a0;
- (BOOL)beginMigration;
- (BOOL)isMaximumMigrationAttemptReached;
- (BOOL)finishMigration;

@end
