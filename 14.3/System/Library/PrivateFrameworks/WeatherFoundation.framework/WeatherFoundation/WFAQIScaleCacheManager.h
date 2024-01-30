@class WFAQIScale, NSMutableDictionary;

@interface WFAQIScaleCacheManager : NSObject

@property (class, readonly, nonatomic) WFAQIScaleCacheManager *sharedManager;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (readonly, nonatomic) NSMutableDictionary *aqiScaleCache;
@property (readonly, nonatomic) WFAQIScale *defaultScale;

- (void)clearCache;
- (id)init;
- (void).cxx_destruct;
- (id)_persistedInfoFromDisk;
- (void)_persistInfoToDisk;
- (id)_persistedInfoURL;
- (id)cachedScaleFromIdentifier:(id)a0;
- (void)updateCacheWithScale:(id)a0 identifier:(id)a1;

@end
