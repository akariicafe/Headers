@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WLSQLController : NSObject {
    struct sqlite3 { } *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
}

@property (copy, nonatomic) NSString *databasePath;

+ (long long)persistentValueForDate:(id)a0;

- (long long)_schemaVersion;
- (void).cxx_destruct;
- (id)init;
- (void)_openDatabase;
- (void)closeDatabase;
- (void)dealloc;
- (void)updateStatistics:(id)a0;
- (id)messagePhoneNumberIccForCcAcNumber:(id)a0;
- (void)_deleteSummaries;
- (void)_deleteAccounts;
- (int)_sqlite3_bind_NSDate:(id)a0 forStatement:(struct sqlite3_stmt { } *)a1 position:(int)a2;
- (unsigned long long)_totalSummarySegmentCountForAccounts:(id)a0 migrationStateComparisonOperator:(id)a1 migrationState:(long long)a2;
- (void)_onDatabaseQueue_updateMigrationState:(int)a0 forSummary:(id)a1 removeData:(BOOL)a2;
- (id)summariesForAccounts:(id)a0 sortedByModifiedDate:(BOOL)a1;
- (id)_sqlite3_column_NSDateForStatement:(struct sqlite3_stmt { } *)a0 column:(int)a1;
- (id)_migratableAppsForDevice:(id)a0;
- (id)_suggestedAppsForDevice:(id)a0;
- (BOOL)_foundHandleIDs:(id)a0 representSameGroupMessageAsHandleIDs:(id)a1 handleIDsAreComplete:(BOOL)a2;
- (void)_insertStatistics_onDatabaseQueue:(id)a0;
- (long long)_performQuery:(id)a0 rowHandler:(id /* block */)a1;
- (void)_ensureCorrectSchema;
- (void)deleteMetadataForAllDevices;
- (void)deleteAccountsAndSummariesForAllDevices;
- (void)deleteMigratableAppsForAllDevices;
- (void)deleteSuggestedAppBundleIDsForAllDevices;
- (void)deleteSummaryDataForAllDevices;
- (unsigned long long)insertAccount:(id)a0 migrator:(id)a1 device:(id)a2;
- (id)accountsForMigrator:(id)a0 device:(id)a1;
- (BOOL)deleteAccountsAndSummariesForMigrator:(id)a0 device:(id)a1;
- (unsigned long long)insertRecordSummary:(id)a0 account:(id)a1;
- (unsigned long long)totalSummaryDownloadedSegmentCountForAccounts:(id)a0;
- (void)totalSummaryItemSizeForAccounts:(id)a0 addOverhead:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)totalSummaryDownloadSegmentCountForAccounts:(id)a0;
- (void)setData:(id)a0 forSummary:(id)a1;
- (id)dataForSummary:(id)a0;
- (void)setDidDownloadForSummary:(id)a0 forSourceDevice:(id)a1;
- (void)setWillImportForSummary:(id)a0;
- (void)removeDataAndSetDidImportForSummary:(id)a0;
- (void)setMigrationError:(id)a0 forSummary:(id)a1;
- (id)migrationErrors;
- (void)updateModifiedDateForSummary:(id)a0;
- (id)summariesForAccount:(id)a0;
- (id)migrationMetadataForSourceDevice:(id)a0 strictMatch:(BOOL)a1;
- (void)insertMetadata:(id)a0 forSourceDevice:(id)a1;
- (void)setMetadata:(id)a0 forSourceDevice:(id)a1;
- (void)insertMigratableApp:(id)a0 forDevice:(id)a1;
- (id)migratableAppsForAllDevices;
- (void)insertSuggestedAppBundleID:(id)a0 forDevice:(id)a1;
- (id)suggestedAppBundleIDsForAllDevices;
- (void)insertMessagePhoneNumberWithIcc:(id)a0 ccAcNumber:(id)a1;
- (void)deleteMessagePhoneNumbersForAllDevices;
- (id)groupMessageInfoMatchingSourceThreadID:(id)a0;
- (id)groupMessageInfoMatchingSortedHandleIDs:(id)a0 handleIDsAreComplete:(BOOL)a1 didMatchExactly:(BOOL *)a2;
- (void)insertGroupMessageInfoWithSourceThreadID:(id)a0 roomName:(id)a1 groupID:(id)a2;
- (void)insertGroupMessageInfoWithSortedHandleIDs:(id)a0 handleIDsAreComplete:(BOOL)a1 roomName:(id)a2 groupID:(id)a3;
- (void)deleteGroupMessageInfoForAllDevices;
- (id)statisticsForContentType:(id)a0;
- (void)deleteStatisticsForAllDevices;

@end
