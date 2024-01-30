@interface PGCurationCache : CLSDBCache

+ (id)defaultCacheName;

- (id)_fetchCurationObjectForEntityName:(id)a0 predicate:(id)a1;
- (id)curatedAssetIdentifiersForMoment:(id)a0 options:(id)a1;
- (id)curatedKeyAssetIdentifierForMoment:(id)a0 options:(id)a1;
- (void)invalidateCacheForEventIdentifiers:(id)a0;
- (BOOL)_isMomentLocalIdentifierInteresting:(id)a0 withAlternateJunking:(BOOL)a1 precision:(unsigned long long)a2 isCached:(BOOL *)a3;
- (void)setCuratedAssets:(id)a0 forCollectionWithIdentifier:(id)a1 options:(id)a2;
- (id)_curatedKeyAssetIdentifierForEventWithIdentifier:(id)a0 options:(id)a1;
- (void)invalidateCacheForMomentIdentifier:(id)a0 precision:(unsigned long long)a1;
- (void)setMomentInteresting:(BOOL)a0 forMoment:(id)a1 precision:(unsigned long long)a2;
- (void)invalidateCacheForMomentIdentifier:(id)a0;
- (void)setContentScore:(double)a0 forMoment:(id)a1 precision:(unsigned long long)a2;
- (BOOL)isMomentInteresting:(id)a0 precision:(unsigned long long)a1 isCached:(BOOL *)a2;
- (void)_setProperties:(id)a0 forCurationObjectWithEntityName:(id)a1 eventIdentifier:(id)a2 precision:(unsigned long long)a3 predicate:(id)a4;
- (void)setMomentInteresting:(BOOL)a0 withAlternateJunking:(BOOL)a1 forMoment:(id)a2 precision:(unsigned long long)a3;
- (void)setMeanContentScore:(double)a0 forMoment:(id)a1 precision:(unsigned long long)a2;
- (id)dataModelName;
- (id)curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)a0 options:(id)a1;
- (void)_invalidateCacheForEventsWithIdentifiers:(id)a0;
- (void)invalidateCacheForCollectionWithIdentifier:(id)a0;
- (void)setCuratedAssets:(id)a0 forMoment:(id)a1 options:(id)a2;
- (void)_setCuratedKeyAsset:(id)a0 forEventWithIdentifier:(id)a1 options:(id)a2;
- (void)_setCuratedAssets:(id)a0 forEventWithIdentifier:(id)a1 options:(id)a2;
- (id)initAtURL:(id)a0;
- (void)setCuratedKeyAsset:(id)a0 forCollectionWithIdentifier:(id)a1 options:(id)a2;
- (void)_invalidateCacheForEventWithIdentifier:(id)a0 precision:(unsigned long long)a1;
- (id)curatedAssetIdentifiersForCollectionWithIdentifier:(id)a0 options:(id)a1;
- (void)_invalidateCacheForEventWithIdentifier:(id)a0;
- (double)contentScoreForMomentLocalIdentifier:(id)a0 precision:(unsigned long long)a1 isCached:(BOOL *)a2;
- (BOOL)isMomentInteresting:(id)a0 withAlternateJunking:(BOOL)a1 precision:(unsigned long long)a2 isCached:(BOOL *)a3;
- (void)setCuratedKeyAsset:(id)a0 forMoment:(id)a1 options:(id)a2;
- (double)contentScoreForMoment:(id)a0 precision:(unsigned long long)a1 isCached:(BOOL *)a2;
- (id)_curatedAssetIdentifiersForEventWithIdentifier:(id)a0 options:(id)a1;

@end
