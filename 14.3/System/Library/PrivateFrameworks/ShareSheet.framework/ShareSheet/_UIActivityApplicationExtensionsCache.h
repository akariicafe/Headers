@class NSMutableArray, NSMutableDictionary, _UIMatchingExtensionsResult, NSObject;
@protocol OS_dispatch_queue;

@interface _UIActivityApplicationExtensionsCache : NSObject {
    BOOL _primed;
    unsigned long long _cacheMisses;
    unsigned long long _cacheHits;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    BOOL _cacheEnabled;
    BOOL _precached;
    NSObject<OS_dispatch_queue> *_registrationQueue;
}

@property (retain) NSObject<OS_dispatch_queue> *primedExtensionsQueue;
@property (retain) _UIMatchingExtensionsResult *primedExtensionsResult;
@property (retain) NSMutableDictionary *cachedResults;
@property (retain) NSMutableDictionary *extensionMatchTokens;
@property (retain) NSMutableArray *continuousDiscoveryRequests;

+ (id)sharedExtensionsCache;

- (id)init;
- (void).cxx_destruct;
- (void)_cacheMatchingExtensionsResult:(id)a0 cacheKey:(id)a1;
- (void)_cacheMatchingExtensions:(id)a0 cacheKey:(id)a1 error:(id)a2;
- (void)_runContinuousExtensionDiscovery:(id)a0 cacheKey:(id)a1;
- (id)_getCachedMatchingExtensionsResultWithCacheKey:(id)a0;
- (void)_delayContinuousExtensionsDiscoveryRequest:(id)a0 cacheKey:(id)a1;
- (void)_clearCacheResults;
- (void)primeExtensionsResultWithMatchingAttributes:(id)a0;
- (id)getExtensionsResultWithMatchingAttributes:(id)a0;
- (void)registerPendingContinuousExtensionsDiscovery;
- (id)reportExtensionsCacheResult;

@end
