@class CKSQLite, CKDContainer, NSDate, NSNumber;

@interface CKDRecordCache : NSObject

@property (retain, nonatomic) CKSQLite *db;
@property (weak, nonatomic) CKDContainer *container;
@property (nonatomic) long long scope;
@property (retain, nonatomic) NSDate *lastExpiryAttempt;
@property (retain, nonatomic) NSNumber *explicitCacheSizeLimit;

+ (id)_expiryDateFormatter;

- (void)deleteRecordWithID:(id)a0;
- (id)_recordWithID:(id)a0 requiredKeys:(id)a1;
- (void)_attemptRecordExpiryIfNeeded;
- (void)clearAllRecords;
- (void)clearAssetAuthTokensForRecordWithID:(id)a0;
- (unsigned long long)_lockedSizeOfAllRecordsInDb;
- (id)_trimRecord:(id)a0 toRequiredKeys:(id)a1;
- (void)addRecord:(id)a0 knownUserKeys:(id)a1;
- (void)replaceDatabase:(id)a0;
- (id)recordWithID:(id)a0 requiredKeys:(id)a1;
- (id)_dsid;
- (void)clearAssetAuthTokensForRecord:(id)a0;
- (void).cxx_destruct;
- (void)clearAllRecordsForZoneWithID:(id)a0;
- (id)initWithDatabase:(id)a0 container:(id)a1 scope:(long long)a2;
- (void)clearAllRecordsInScope;
- (unsigned long long)recordCacheSizeLimit;
- (void)scheduleRecordExpirationWithExpiryDate:(id)a0;
- (id)etagForRecordID:(id)a0 requiredKeys:(id)a1;
- (BOOL)_cachedRecordHasValidAssets:(id)a0 forRequiredKeys:(id)a1;
- (void)releaseDatabase;
- (id)recordsWithIDs:(id)a0 requiredKeys:(id)a1;
- (unsigned long long)numberOfRecordsWithID:(id)a0;
- (BOOL)_cachedRecordKnownUserKeyData:(id)a0 satisfiesRequiredKeys:(id)a1;

@end
