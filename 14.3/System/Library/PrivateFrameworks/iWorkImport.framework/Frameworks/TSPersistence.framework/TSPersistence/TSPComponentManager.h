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
@property (readonly, nonatomic) BOOL isSupportComponentTreeModified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentManagersPerformingCacheOperationOnCurrentThread;

- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isActive;
- (void)tearDown;
- (id)objectForIdentifier:(long long)a0;
- (void)beginIgnoringCachedObjectEviction;
- (void)endIgnoringCachedObjectEviction;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)willModifyObject:(id)a0 options:(unsigned long long)a1;
- (void)discardOrphanedComponents;
- (void)enumerateComponents:(id /* block */)a0;
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
- (void)loadComponent:(const struct ComponentInfo { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; int x5; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x6; int x7; struct RepeatedPtrField<TSP::ComponentExternalReference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x8; struct RepeatedPtrField<TSP::ComponentDataReference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x9; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x10; struct RepeatedPtrField<TSP::FeatureInfo> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x11; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x12; int x13; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x14; int x15; struct RepeatedPtrField<TSP::ComponentExternalReference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x16; struct RepeatedField<unsigned long long> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x17; int x18; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x19; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x20; unsigned long long x21; unsigned long long x22; BOOL x23; BOOL x24; BOOL x25; unsigned int x26; unsigned int x27; } *)a0 package:(id)a1;
- (id)rootComponentWithIdentifierImpl:(long long)a0 locator:(id)a1 packageIdentifier:(unsigned char)a2;
- (id)documentComponentImpl;
- (id)supportComponentImpl;
- (id)componentForRootObjectOfLazyReferenceImpl:(id)a0;
- (void)traverseComponentTreeFromRoot:(id)a0 accessor:(id /* block */)a1;
- (BOOL)isPerformingCacheOperation;
- (id)rootComponentForPackageIdentifier:(unsigned char)a0;
- (void)evictAllCachedObjects;

@end
