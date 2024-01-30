@class NSArray, NSMutableDictionary, NSMutableOrderedSet, GEOSQLiteDB, NSObject;
@protocol GEOPDPlaceCacheManifestInfoProviding, OS_dispatch_source, GEOPDPlaceCacheSchedulingDelegate;

@interface GEOPDPlaceCache : NSObject <GEOPDPlaceCacheSchedulingDelegate, GEOPDPlaceCacheManifestInfoProviding> {
    GEOSQLiteDB *_db;
    id<GEOPDPlaceCacheSchedulingDelegate> _schedulingDelegate;
    id<GEOPDPlaceCacheManifestInfoProviding> _manifestInfoProvider;
    NSObject<OS_dispatch_source> *_cleanupTimer;
    NSMutableDictionary *_accessTimesDict;
    NSMutableOrderedSet *_recentlySeenPlaceHashes;
}

@property (readonly, nonatomic) NSArray *serviceVersions;

- (void)enqueueAccessTimeUpdateForCacheKey:(id)a0 accessTime:(long long)a1;
- (id)_cacheKeysForPlace:(id)a0 request:(id)a1;
- (void)_localeChanged:(id)a0;
- (unsigned long long)_shrinkBySize:(unsigned long long)a0;
- (void)close;
- (void).cxx_destruct;
- (void)deletePhoneNumberMapping;
- (void)storePlace:(id)a0 forRequest:(id)a1;
- (id)_cacheKeyForHandle:(id)a0;
- (void)iterateAllPlacesWithBlock:(id /* block */)a0 finishedBlock:(id /* block */)a1;
- (void)_evictPlaceWithHash:(id)a0;
- (void)iterateHandlePlacesWithBlock:(id /* block */)a0 finishedBlock:(id /* block */)a1;
- (BOOL)_validateDBLocaleAndResetIfNecessary;
- (unsigned long long)_calculateFreeableSpace;
- (void)periodicCleanupAndAccessTimeUpdate;
- (void)dealloc;
- (void)iterateMUIDPlacesWithBlock:(id /* block */)a0 finishedBlock:(id /* block */)a1;
- (void)_iterateAllPlacesFilteringCacheKeyWithPredicate:(id)a0 entryBlock:(id /* block */)a1 finishedBlock:(id /* block */)a2;
- (void)cancelCleanupBlockSchedule;
- (id)initWithCacheFilePath:(id)a0 schedulingDelegate:(id)a1 manifestInfoProvider:(id)a2;
- (BOOL)_meetsManifestVersionPolicyForPlace:(id)a0;
- (id)lookupPlaceByPhoneNumber:(id)a0 allowExpiredPlace:(BOOL)a1 placeIsExpired:(BOOL *)a2;
- (void)iterateAllKeysWithBlock:(id /* block */)a0 finishedBlock:(id /* block */)a1;
- (void)_storePlace:(id)a0 withHash:(id)a1 forRequestKeys:(id)a2;
- (void)scheduleCleanup;
- (long long)currentTime;
- (void)iteratePhonePlacesWithBlock:(id /* block */)a0 finishedBlock:(id /* block */)a1;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)a0;
- (id)lookupPlaceByHandle:(id)a0 allowExpiredPlace:(BOOL)a1 placeIsExpired:(BOOL *)a2;
- (id)_lookupPlaceByRequestKey:(id)a0 allowExpiredPlace:(BOOL)a1 placeIsExpired:(BOOL *)a2;
- (id)internalSerialQueue;
- (void)iterateBasemapIdPlacesWithBlock:(id /* block */)a0 finishedBlock:(id /* block */)a1;
- (BOOL)_deleteAndResetDB:(id)a0;
- (unsigned long long)shrinkBySizeSync:(unsigned long long)a0;
- (void)trackPlace:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)runCleanupBlock:(id /* block */)a0 inSecondsFromNow:(long long)a1;
- (void)storePlace:(id)a0 forRequest:(id)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (void)iterateAllBasemapIdKeysWithBlock:(id /* block */)a0 finishedBlock:(id /* block */)a1;
- (void)evictAllEntries;
- (void)shrinkBySize:(unsigned long long)a0 finished:(id /* block */)a1;
- (id)lookupIdentifierByPhoneNumber:(id)a0;
- (void)iterateAllMUIDKeysWithBlock:(id /* block */)a0 finishedBlock:(id /* block */)a1;
- (id)lookupPlaceByIdentifier:(id)a0 allowExpiredPlace:(BOOL)a1 placeIsExpired:(BOOL *)a2;
- (void)iterateAllPhoneKeysWithBlock:(id /* block */)a0 finishedBlock:(id /* block */)a1;
- (id)lookupPlaceByRequest:(id)a0 allowExpiredPlace:(BOOL)a1 placeIsExpired:(BOOL *)a2;
- (void)_iterateAllKeysFilteringCacheKeyWithPredicate:(id)a0 entryBlock:(id /* block */)a1 finishedBlock:(id /* block */)a2;
- (unsigned long long)calculateFreeableSpaceSync;
- (void)trackPlace:(id)a0;
- (void)iterateAllHandleKeysWithBlock:(id /* block */)a0 finishedBlock:(id /* block */)a1;

@end
