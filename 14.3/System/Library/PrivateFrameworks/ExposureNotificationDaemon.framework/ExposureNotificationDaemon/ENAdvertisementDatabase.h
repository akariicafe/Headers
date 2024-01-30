@class ENAdvertisementSQLiteStore, NSString, ENQueryFilter, NSNumber;

@interface ENAdvertisementDatabase : NSObject {
    struct { struct { unsigned char x0[16]; } x0; struct { unsigned char x0[4]; } x1; double x2; unsigned int x3; unsigned short x4; unsigned short x5; char x6; char x7; BOOL x8; unsigned char x9; } *_advertisementInsertionCache;
    unsigned int _advertisementInsertionCacheCount;
    unsigned int _advertisementInsertionIndex;
    BOOL _advertisementInsertionCacheOverflowed;
    unsigned long long _previousStoreFullAlertTimestamp;
    NSString *_databaseFolderPath;
    ENAdvertisementSQLiteStore *_centralStore;
    ENAdvertisementSQLiteStore *_temporaryStore;
    id /* block */ _errorMetricReporter;
}

@property (readonly, nonatomic) unsigned long long currentStoreType;
@property (readonly, nonatomic) BOOL temporaryStoresPresent;
@property (retain, nonatomic) ENQueryFilter *inlineQueryFilter;
@property (readonly, nonatomic) NSNumber *storedAdvertisementCount;
@property (readonly, nonatomic) unsigned long long droppedAdvertisementCount;
@property (nonatomic) double storageFullAlertInterval;

+ (BOOL)purgeAllStoresInPath:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)flushCache;
- (id)queryFilterWithBufferSize:(unsigned long long)a0 hashCount:(unsigned long long)a1 attenuationThreshold:(unsigned char)a2;
- (id)advertisementsBufferMatchingDailyKeys:(id)a0 attenuationThreshold:(unsigned char)a1 timestampTolerance:(double)a2;
- (id)beaconCountMetricsWithStartDate:(id)a0 endDate:(id)a1 windowDuration:(double)a2;
- (id)initWithDatabaseFolderPath:(id)a0 cacheCount:(unsigned long long)a1;
- (id)initWithDatabaseFolderPath:(id)a0 cacheCount:(unsigned long long)a1 errorMetricReporter:(id /* block */)a2;
- (BOOL)openStoreAndReturnError:(id *)a0;
- (void)reportErrorMetric:(unsigned int)a0;
- (BOOL)openCentralStoreAndReturnError:(id *)a0;
- (BOOL)mergeTemporaryStores;
- (BOOL)openTemporaryStore;
- (void)reportStoreError:(id)a0;
- (void)closeAllStores;
- (BOOL)mergeStores:(id)a0;
- (id)currentStore;
- (unsigned int)cacheRecordCount;
- (void)displayStorageFullAlert;
- (BOOL)switchToCentralStore;
- (id)matchingAdvertisementBufferForRPIBuffer:(id)a0 exposureKeys:(id)a1;
- (BOOL)purgeAdvertismentsSeenBeforeDate:(id)a0;
- (BOOL)mergeStoresFromFolderPath:(id)a0;
- (BOOL)saveContactTracingAdvertisement:(id)a0;
- (id)createQuerySessionWithAttenuationThreshold:(unsigned char)a0 queue:(id)a1 error:(id *)a2;
- (BOOL)purgeAdvertismentsOlderThan:(double)a0;
- (BOOL)purgeAllStoresInActiveDatabasePath;
- (BOOL)cloneDatabaseTo:(id)a0;

@end
