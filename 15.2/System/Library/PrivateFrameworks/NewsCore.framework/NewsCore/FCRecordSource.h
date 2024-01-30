@class NSString, NSArray, FCKeyValueStore, NFUnfairLock, FCCacheCoordinator, NSDictionary, FCFetchCoordinator, FCThreadSafeMutableDictionary, FCCKContentDatabase;

@interface FCRecordSource : NSObject <FCCacheCoordinatorDelegate, FCFetchCoordinatorDelegate, FCCacheFlushing, FCJSONEncodableObjectProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _derivedKeysLock;
    NFUnfairLock *_initializationLock;
    FCCKContentDatabase *_contentDatabase;
    NSString *_contentDirectory;
    FCKeyValueStore *_localStore;
    FCCacheCoordinator *_cacheCoordinator;
    FCFetchCoordinator *_fetchCoordinator;
}

@property (readonly, nonatomic) FCThreadSafeMutableDictionary *fetchErrorsByKey;
@property (readonly, nonatomic) NSString *experimentalizableFieldsPostfix;
@property (readonly, nonatomic) NSString *activeTreatmentID;
@property (readonly, nonatomic) NSArray *nonLocalizableKeys;
@property (readonly, nonatomic) NSArray *localizableKeys;
@property (readonly, nonatomic) NSArray *alwaysLocalizedKeys;
@property (readonly, nonatomic) NSArray *experimentalizableKeys;
@property (readonly, nonatomic) NSArray *localizableExperimentalizableKeys;
@property (readonly, nonatomic) NSArray *localizableLanguageSpecificKeys;
@property (readonly, nonatomic) NSDictionary *localizedKeysByOriginalKey;
@property (readonly, nonatomic) NSDictionary *experimentalizedKeysByOriginalKey;
@property (readonly, nonatomic) NSDictionary *localizedExperimentalizedKeysByOriginalKey;
@property (readonly, nonatomic) NSDictionary *localizedLanguageSpecificKeysByOriginalKey;
@property (readonly, nonatomic) NSArray *desiredKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierFromCKRecord:(id)a0;
+ (BOOL)supportsDeletions;
+ (id)canaryRecordName;
+ (id)changeTagFromCKRecord:(id)a0;
+ (id)modificationDateFromCKRecord:(id)a0;
+ (id)defaultCachePolicy;

- (id)storeFilename;
- (id)recordIDPrefixes;
- (id)recordFromCKRecord:(id)a0 base:(id)a1;
- (unsigned long long)lowThresholdDataSizeLimit;
- (int)pbRecordType;
- (unsigned long long)storeVersion;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)a0;
- (void)cacheCoordinator:(id)a0 flushKeysWithWriteLock:(id)a1;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)savePBRecords:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1 experimentalizableFieldsPostfix:(id)a2 activeTreatmentID:(id)a3;
- (id)cachedRecordsWithIDs:(id)a0;
- (id)keyValueRepresentationOfRecord:(id)a0;
- (id)recordType;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0;
- (id)jsonEncodableObject;
- (id)fetchOperationForRecordsWithIDs:(id)a0;
- (id)_localizedKeysByOriginalKeyForContentStoreFrontID:(id)a0;
- (id)_experimentalizedKeysByOriginalKeyForExperimentPostfix:(id)a0;
- (id)_localizedExperimentalizedKeysByOriginalKeyForContentStoreFrontID:(id)a0 experimentPostfix:(id)a1;
- (id)saveRecords:(id)a0;
- (void)fetchCoordinator:(id)a0 filterKeysToFetch:(id)a1 isFirstAttempt:(BOOL)a2 context:(id)a3;
- (id)convertRecords:(id)a0;
- (id)fetchCoordinator:(id)a0 fetchOperationForKeys:(id)a1 context:(id)a2 qualityOfService:(long long)a3 relativePriority:(long long)a4;
- (void)fetchCoordinator:(id)a0 addFetchOperation:(id)a1 context:(id)a2;
- (id)initWithContentDatabase:(id)a0 contentDirectory:(id)a1;
- (id)interestTokenForRecordIDs:(id)a0;
- (id)fetchOperationForRecordsWithIDs:(id)a0 ignoreCacheForRecordIDs:(id)a1;
- (BOOL)recognizesRecordID:(id)a0;
- (id)deleteRecordsWithIDs:(id)a0;
- (void)updateFetchDateForRecordIDs:(id)a0;
- (BOOL)isRecordStale:(id)a0 withCachePolicy:(id)a1;
- (void)forceRefreshDesiredKeys;
- (void)t_startOverridingExperimentalizableFieldsPostfix:(id)a0 treatmentID:(id)a1;
- (void)t_stopOverridingExperimentalizableFieldsPostfixAndTreatmentID;

@end
