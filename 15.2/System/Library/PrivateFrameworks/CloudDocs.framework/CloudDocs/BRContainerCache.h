@class br_pacer, NSMutableDictionary, NSString, NSMutableSet, NSObject;
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
    NSString *_personaID;
}

+ (id)containerHelper;
+ (id)containerCache;
+ (BOOL)hasDaemonicParts;
+ (BOOL)isPersonalProvider;
+ (BOOL)isManagedProvider;

- (void)_containerListDidChange;
- (id)containerByID:(id)a0 forURL:(id)a1;
- (void)invalidateAndClearCache:(BOOL)a0;
- (id)_allContainersByIDNoCopyBlocking:(BOOL)a0;
- (BOOL)_updateContainersCache;
- (void)subscribeToContainerStatusUpdate;
- (id)allContainersByID;
- (id)initWithHelper:(id)a0 personaID:(id)a1;
- (void).cxx_destruct;
- (void)unsubscribeToContainerStatusUpdate;
- (void)dealloc;
- (void)_accountWillChange;
- (id)allContainersBlockIfNeeded:(BOOL)a0;
- (id)documentContainers;

@end
