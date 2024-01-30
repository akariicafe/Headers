@class NSString, _PASLock, _PASDatabaseMigrator;

@interface SGMIFeatureStore : NSObject <_PASDatabaseMigrationProtocol> {
    _PASLock *_lock;
    id /* block */ _dbGetter;
    _PASDatabaseMigrator *_migrator;
    id _lockStateRegistration;
    NSString *_journalPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storeInMemory;
+ (id)storeWithFilename:(id)a0;

- (id)_db;
- (id)migrations;
- (id)highlyDiscriminantTokensForFeature:(long long)a0 minCount:(unsigned long long)a1 minRatio:(double)a2;
- (id)getSGMIStoredAddresses;
- (void)clearSubModelsTables;
- (id)_dateFormatter;
- (void).cxx_destruct;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (void)commitNaiveBayesModel:(id)a0 probabilityFeatureName:(long long)a1;
- (id)subModelsStats;
- (id)init;
- (id)databaseHandle;
- (id)naiveBayesModelQueryResultForFeature:(long long)a0 unigramTokens:(id)a1 bigramTokens:(id)a2;
- (void)dealloc;
- (void)reset;
- (void)deleteTokensForDeletedEmailAddresses:(id)a0;
- (void)deleteNaiveBayesModelForProbabilityFeatureName:(long long)a0;
- (void)commitNaiveBayesModel:(id)a0 probabilityFeatureName:(long long)a1 updateDate:(id)a2;
- (id)_journalQueue;
- (id)initWithDatabaseGetter:(id /* block */)a0 journalPath:(id)a1;
- (BOOL)_writeJournalCommand:(unsigned char)a0 blob:(id)a1;
- (void)_runJournal;
- (id)_featuresForDatabase:(id)a0;
- (int)_effectiveLockState;
- (void)_handleDeviceLockStateEvent:(int)a0;
- (id)_dateFromColumn:(id)a0;
- (id)_columnFromDate:(id)a0;
- (id)_stringForFeatureName:(long long)a0;
- (long long)_featureNameForString:(id)a0;
- (id)_naiveBayesModelQueryResultForFeature:(long long)a0 unigramTokens:(id)a1 bigramTokens:(id)a2 usingDatabase:(id)a3;
- (id)_highlyDiscriminantTokensForFeature:(long long)a0 minCount:(unsigned long long)a1 minRatio:(double)a2 usingDatabase:(id)a3;
- (void)_deleteNaiveBayesModelForProbabilityFeatureName:(long long)a0 usingDatabase:(id)a1;
- (void)_commitNaiveBayesModel:(id)a0 probabilityFeatureName:(long long)a1 updateDate:(id)a2 usingDatabase:(id)a3;
- (BOOL)areSubmodelsEmpty;
- (BOOL)_areSubmodelsEmptyUsingDatabase:(id)a0;
- (id)submodelsAgesInDays;
- (id)subModelsStatsWithShouldContinueBlock:(id /* block */)a0;
- (id)_subModelsStatsWithShouldContinueBlock:(id /* block */)a0 usingDatabase:(id)a1;
- (BOOL)purgeTokensWhichLastUpdateWasBefore:(id)a0 shouldContinue:(id /* block */)a1;
- (BOOL)_purgeTokensWhichLastUpdateWasBefore:(id)a0 shouldContinue:(id /* block */)a1 usingDatabase:(id)a2;
- (id)_getSGMIStoredAddressesUsingDatabase:(id)a0;
- (void)_clearBucketForColumn:(id)a0;
- (void)_clearBucketForColumn:(id)a0 usingDatabase:(id)a1;
- (void)clearBucketForDate:(id)a0;
- (void)clearBucketsForDates:(id)a0;
- (void)_deleteTokensForDeletedEmailAddresses:(id)a0 usingDatabase:(id)a1;
- (BOOL)applyCappingPolicy:(id)a0 shouldContinue:(id /* block */)a1;
- (BOOL)_applyCappingPolicy:(id)a0 shouldContinue:(id /* block */)a1 usingDatabase:(id)a2;
- (void)_clearSubModelsTablesUsingDatabase:(id)a0;
- (void)insertToken:(id)a0 forFeatureName:(long long)a1 salientCount:(long long)a2 regularCount:(long long)a3 time:(id)a4;
- (unsigned char)migration_createFeaturesTable;
- (BOOL)performMaintenanceWithShouldContinueBlock:(id /* block */)a0;

@end
