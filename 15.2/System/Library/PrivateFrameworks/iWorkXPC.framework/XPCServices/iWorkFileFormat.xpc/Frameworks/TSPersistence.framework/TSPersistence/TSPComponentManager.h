@class NSCache, NSString, TSPComponent, TSPObjectContext, NSHashTable, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface TSPComponentManager : NSObject <TSPComponentDelegate, TSPObjectModifyDelegate> {
    _Atomic int _ignoreCachedObjectEvictionCount;
    BOOL _isTornDown;
    NSObject<OS_dispatch_queue> *_componentQueue;
    NSHashTable *_components;
    NSMapTable *_componentDictionary;
    NSCache *_componentCache;
    TSPComponent *_viewStateComponent;
    NSObject<OS_dispatch_queue> *_readFlushedComponentQueue;
}

@property (readonly, weak, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) TSPComponent *packageMetadataComponent;
@property (readonly, nonatomic) TSPComponent *documentComponent;
@property (readonly, nonatomic) TSPComponent *documentObjectContainerComponent;
@property (readonly, nonatomic) TSPComponent *documentMetadataComponent;
@property (readonly, nonatomic) BOOL isDocumentComponentTreeModified;
@property (readonly, nonatomic) TSPComponent *supportComponent;
@property (readonly, nonatomic) TSPComponent *supportObjectContainerComponent;
@property (readonly, nonatomic) TSPComponent *supportMetadataComponent;
@property (retain) TSPComponent *viewStateComponent;
@property (readonly, nonatomic) unsigned long long componentCount;
@property (readonly, nonatomic) BOOL isSupportComponentTreeModified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentManagersPerformingCacheOperationOnCurrentThread;

- (void)tearDown;
- (id)initWithContext:(id)a0;
- (BOOL)isActive;
- (void).cxx_destruct;
- (id)objectForIdentifier:(long long)a0;
- (id)init;
- (void)dealloc;
- (void)beginIgnoringCachedObjectEviction;
- (void)endIgnoringCachedObjectEviction;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)willModifyObject:(id)a0 options:(unsigned long long)a1;
- (void)enumerateComponents:(id /* block */)a0;
- (void)discardOrphanedComponents;
- (id)componentForRootObjectOfLazyReference:(id)a0;
- (id)componentForRootObjectIdentifier:(long long)a0;
- (unsigned long long)objectTargetType;
- (void)loadFromPackage:(id)a0 metadata:(id)a1;
- (void)componentForRootObjectIdentifier:(long long)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)dirtyComponents:(id)a0;
- (void)retrieveOrCreateComponentForRootObject:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)componentForRootObjectOfLazyReference:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)dirtyAllComponentsForDocumentUpgradeInPackage:(unsigned char)a0;
- (void)cacheComponent:(id)a0 isDiscardingContent:(BOOL)a1;
- (BOOL)shouldKeepAllCachedObjectsInMemory;
- (void)flushComponent:(id)a0 isDiscardingContent:(BOOL)a1;
- (void)continueCacheOperationUsingBlock:(id /* block */)a0;
- (void)performCacheOperationUsingBlock:(id /* block */)a0;
- (void)didModifyFlushedComponent:(id)a0 forObject:(id)a1;
- (void)loadComponent:(const void *)a0 package:(id)a1;
- (id)rootComponentWithIdentifierImpl:(long long)a0 locator:(id)a1 packageIdentifier:(unsigned char)a2;
- (id)documentComponentImpl;
- (id)supportComponentImpl;
- (id)componentForRootObjectOfLazyReferenceImpl:(id)a0;
- (void)traverseComponentTreeFromRoot:(id)a0 accessor:(id /* block */)a1;
- (BOOL)isPerformingCacheOperation;
- (id)rootComponentForPackageIdentifier:(unsigned char)a0;
- (void)evictAllCachedObjects;

@end
