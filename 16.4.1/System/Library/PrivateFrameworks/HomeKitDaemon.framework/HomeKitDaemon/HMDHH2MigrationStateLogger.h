@class NSDictionary;

@interface HMDHH2MigrationStateLogger : HMFObject

@property (retain, nonatomic) NSDictionary *logEventRecord;
@property (readonly, nonatomic, getter=isAutoMigration) BOOL autoMigration;
@property (readonly, nonatomic) long long totalTimeTakenForMigration;
@property (readonly, nonatomic, getter=isMigrationSuccessful) BOOL migrationSuccessful;

+ (id)allowedValues;
+ (void)recordIsDryRun:(BOOL)a0;
+ (void)_addInfoFromCoreDataError:(id)a0 logEvent:(id)a1;
+ (void)commitMigrationLogEventToDisk:(id)a0;
+ (void)commitMigrationLogEventToDiskWithKey:(id)a0 value:(id)a1;
+ (BOOL)doesLogEventExistOnDisk;
+ (void)incrementMigrationAttempt;
+ (long long)migrationAttempt;
+ (id)migrationLogEventRecord;
+ (void)recordMigrationEnd:(BOOL)a0;
+ (void)recordMigrationEndTimeWithValue:(unsigned long long)a0;
+ (void)recordMigrationFailedWithError:(id)a0 withReason:(id)a1;
+ (void)recordMigrationStart:(BOOL)a0 isDryRun:(BOOL)a1;
+ (void)recordMigrationStartTimeWithValue:(unsigned long long)a0;
+ (void)removeMigrationLogEventRecordFromDisk;
+ (void)setAutoMigration:(BOOL)a0;
+ (void)setMigrationSuccessful:(BOOL)a0;

- (id)init;
- (long long)migrationStartTime;
- (void).cxx_destruct;
- (BOOL)isDryRun;
- (id)migrationError;
- (id)migrationDetailsLogEventFromDisk;
- (id)migrationEndLogEventFromDisk;
- (long long)migrationEndTime;
- (void)populateTotalMigrationTime;
- (void)resetStoredMigrationState;
- (BOOL)shouldSubmitLogEvent;

@end
