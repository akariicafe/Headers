@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderNodeCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_cache;
}

+ (id)sharedInstance;

- (id)retrieveAndCacheNode:(id)a0;
- (void)addNode:(id)a0;
- (id)cachedNodeForNode:(id)a0;
- (void)_mediaServicesWereReset:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (unsigned long long)unhitCacheEntriesCount;
- (void)_addNode:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
