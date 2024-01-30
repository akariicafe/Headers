@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPCPlayerPathCache : NSObject

@property (class, readonly, nonatomic) MPCPlayerPathCache *sharedCache;

@property (readonly, nonatomic) NSMutableDictionary *playerPathResolutions;
@property (readonly, nonatomic) NSMutableDictionary *playerPathObservers;
@property (readonly, nonatomic) NSMutableDictionary *endpointObservers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;

- (id)observationTokenDescriptionForPlayerPath:(id)a0;
- (id)_init;
- (void)dealloc;
- (void)_onQueue_registerForEndpointChangeWithUnresolvedPlayerPath:(id)a0 routeResolvedPlayerPath:(id)a1;
- (void)_onQueue_registerForInvalidationWithUnresolvedPlayerPath:(id)a0 invalidationPlayerPath:(void *)a1;
- (void).cxx_destruct;
- (id)resolvedPlayerPathForPlayerPath:(id)a0;

@end
