@class NSString, FLLoggingContext, NSObject;
@protocol OS_os_log;

@interface FLSQLitePersistence : NSObject

@property (readonly, copy, nonatomic) NSString *databasePath;
@property (nonatomic) struct sqlite3 { } *db;
@property (nonatomic) struct sqlite3_stmt { } *insertRecordsStatement;
@property (nonatomic) struct sqlite3_stmt { } *iteratePayloadStatement;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) FLLoggingContext *context;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) _Atomic BOOL configured;
@property (nonatomic) unsigned long long maxBatchPayloadInBytes;
@property (nonatomic) unsigned long long maxAllowedDatabaseSizeInBytes;
@property (copy, nonatomic) NSString *currentBatchIdentifier;
@property (nonatomic) unsigned long long currentBatchPayloadSize;

+ (id)batchStatusDescription:(int)a0;

- (BOOL)deleteDatabase;
- (void).cxx_destruct;
- (BOOL)createDatabase;
- (void)dealloc;
- (BOOL)persist:(id)a0;
- (BOOL)open;
- (BOOL)closeOpenBatches;
- (BOOL)purgeBatch:(id)a0;
- (id)initWithPath:(id)a0 application:(id)a1 loggingContext:(id)a2;
- (BOOL)initializeConnectionForUseBy:(int)a0;
- (BOOL)tryPrepare:(const char *)a0 preparedStatement:(inout struct sqlite3_stmt **)a1;
- (id)_getBatchIdsHelper:(struct sqlite3_stmt { } *)a0;
- (BOOL)_updateMetadataHelperForBatch:(id)a0 query:(const char *)a1;
- (BOOL)_updateStatusHelperForBatch:(id)a0 toStatus:(int)a1;
- (BOOL)getIntValueForPragma:(id)a0 into:(inout int *)a1;
- (BOOL)executeSQLStatement:(const char *)a0;
- (BOOL)executeSQLStatement:(const char *)a0 usingTransaction:(BOOL)a1;
- (BOOL)__purgeStatementHelper:(const char *)a0 forBatchId:(id)a1;
- (BOOL)executeInTransactionMultipleSQLStatements:(id)a0;
- (id)getBatchIdsWithStatus:(int)a0;
- (id)getBatchIdsWithAllStatuses;
- (id)getPurgableBatchIds;
- (id)getRecordsRangeStart:(long long)a0 end:(long long)a1;
- (BOOL)getBatchMetadata:(id)a0 batchMetadata:(inout id *)a1;
- (BOOL)updateStatusForBatch:(id)a0 toStatus:(int)a1;
- (int)getDataVersion;
- (BOOL)initializeNewBatch;
- (BOOL)recoverOrphanedProcessingBatches;
- (BOOL)markBatchesforPurge;
- (long long)doBatchesHousekeeping;
- (BOOL)purgeAllBatches;
- (int)getSchemaVersion;
- (BOOL)updateSchema;
- (BOOL)prepareSchema;
- (unsigned long long)getCurrentDatabaseSize;
- (BOOL)setDatabaseSizeLimit;
- (BOOL)prepareStatements;
- (BOOL)tryRolloverBatchIfNecessary:(unsigned long long)a0;
- (BOOL)iteratePayloadForBatch:(id)a0 codeblock:(id /* block */)a1;

@end
