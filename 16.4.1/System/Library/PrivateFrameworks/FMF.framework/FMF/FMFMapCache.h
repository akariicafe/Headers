@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface FMFMapCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheMetaData;
@property (retain, nonatomic) NSMutableDictionary *gridImageMetaData;
@property (retain, nonatomic) NSMutableDictionary *noLocationImageMetaData;
@property (retain, nonatomic) NSMutableDictionary *mapImageMetaData;
@property (retain, nonatomic) NSMutableDictionary *pendingMapImageMetaData;
@property (retain, nonatomic) NSString *cachePath;
@property (retain, nonatomic) NSString *imageCachePath;
@property (retain, nonatomic) NSDate *lastPruneDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheMetaQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *gridImageQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *noLocationImageQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mapImageQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pendingImageQueue;
@property (nonatomic) double mapLocationDistanceThreshold;
@property (nonatomic) BOOL fileProtectionDeactivated;

- (void)flushCache;
- (id)init;
- (void).cxx_destruct;
- (double)cacheExpiryInSeconds;
- (void)cacheGridImage:(id)a0 forWidth:(double)a1 andHeight:(double)a2;
- (void)cacheMapImage:(id)a0 forLocation:(id)a1 altitude:(double)a2 pitch:(double)a3 width:(double)a4 andHeight:(double)a5;
- (void)cacheMapImage:(id)a0 forRequest:(id)a1;
- (void)cacheNoLocationImage:(id)a0 forWidth:(double)a1 andHeight:(double)a2;
- (id)cachedGridImageForWidth:(double)a0 andHeight:(double)a1;
- (id)cachedMapImageForLocation:(id)a0 altitude:(double)a1 pitch:(double)a2 width:(double)a3 andHeight:(double)a4;
- (id)cachedMapImageForRequest:(id)a0;
- (id)cachedNoLocationImageForWidth:(double)a0 andHeight:(double)a1;
- (id)gridKeyForWidth:(double)a0 andHeight:(double)a1;
- (id)noLocationKeyForWidth:(double)a0 andHeight:(double)a1;
- (BOOL)pendingMapImageForLocation:(id)a0 altitude:(double)a1 pitch:(double)a2 width:(double)a3 andHeight:(double)a4;
- (BOOL)pendingMapImageForRequest:(id)a0;
- (void)pruneCacheIfNeeded;
- (double)pruneIntervalInSeconds;
- (void)readMetaData;
- (void)saveMetaData;

@end
