@class CKDClientContext, NSNumber, CKSQLite, NSDate, NSObject, CKSQLitePool;
@protocol OS_dispatch_queue;

@interface CKDRecordCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CKSQLite *db;
@property (retain, nonatomic) CKSQLitePool *dbPool;
@property (retain, nonatomic) CKDClientContext *context;
@property (nonatomic) long long scope;
@property (retain, nonatomic) NSDate *lastExpiryAttempt;
@property (retain, nonatomic) NSNumber *explicitCacheSizeLimit;

+ (id)_expiryDateFormatter;

- (id)_dsid;
- (void)close;
- (void).cxx_destruct;
- (void)open;
- (unsigned long long)recordCacheSizeLimit;
- (BOOL)_cachedRecordKnownUserKeyData:(id)a0 satisfiesRequiredKeys:(id)a1;
- (id)_recordWithID:(id)a0 requiredKeys:(id)a1;
- (BOOL)_cachedRecordHasValidAssets:(id)a0 forRequiredKeys:(id)a1;
- (id)_trimRecord:(id)a0 toRequiredKeys:(id)a1;
- (unsigned long long)_lockedSizeOfAllRecordsInDb;
- (void)_attemptRecordExpiryIfNeeded;
- (id)recordsWithIDs:(id)a0 requiredKeys:(id)a1;
- (void)clearAssetAuthTokensForRecord:(id)a0;
- (void)addRecord:(id)a0 knownUserKeys:(id)a1;
- (void)scheduleRecordExpirationWithExpiryDate:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithDatabase:(id)a0 dbPool:(id)a1 context:(id)a2 scope:(long long)a3;
- (void)releaseDatabase;
- (id)recordWithID:(id)a0 requiredKeys:(id)a1;
- (unsigned long long)numberOfRecordsWithID:(id)a0;
- (id)etagForRecordID:(id)a0 requiredKeys:(id)a1;
- (void)deleteRecordWithID:(id)a0;
- (void)clearAllRecordsInScope;
- (void)clearAllRecords;
- (void)clearAllRecordsForZoneWithID:(id)a0;
- (void)clearAssetAuthTokensForRecordWithID:(id)a0;

@end
