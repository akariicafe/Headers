@class br_pacer, NSMutableDictionary, NSMutableSet, NSObject;
@protocol BRContainerHelper, OS_dispatch_source, OS_dispatch_queue, NSObject;

@interface BRContainerCache : NSObject {
    id<BRContainerHelper> _helper;
    NSMutableDictionary *_containersByID;
    NSMutableSet *_fetchedContainerIDs;
    BOOL _containerCacheUptodate;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_invalidationPacer;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    id<NSObject> _containerStatusObserver;
}

+ (id)containerCache;
+ (id)containerHelper;
+ (BOOL)hasDaemonicParts;

- (void)unsubscribeToContainerStatusUpdate;
- (id)_allContainersByIDNoCopyBlocking:(BOOL)a0;
- (void)_accountWillChange;
- (BOOL)_updateContainersCache;
- (id)initWithHelper:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)containerByID:(id)a0 forURL:(id)a1;
- (id)documentContainers;
- (id)allContainersByID;
- (id)allContainersBlockIfNeeded:(BOOL)a0;
- (void)subscribeToContainerStatusUpdate;
- (void)invalidateAndClearCache:(BOOL)a0;
- (void)_containerListDidChange;

@end
