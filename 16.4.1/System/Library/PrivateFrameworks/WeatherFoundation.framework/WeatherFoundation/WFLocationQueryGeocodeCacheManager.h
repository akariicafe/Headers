@class NSMutableDictionary;

@interface WFLocationQueryGeocodeCacheManager : NSObject

@property (class, readonly, nonatomic) WFLocationQueryGeocodeCacheManager *sharedManager;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (readonly, nonatomic) NSMutableDictionary *geocodeCache;
@property (readonly, nonatomic) double expirationTime;

- (id)init;
- (void).cxx_destruct;
- (void)updateCacheForKey:(id)a0 withLocation:(id)a1;
- (void)_discardExpiredLocations;
- (void)_persistInfoToDisk;
- (id)_persistedInfoFromDisk;
- (id)_persistedInfoURL;
- (id)cachedLocationForKey:(id)a0;

@end
