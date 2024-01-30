@class TSURetainedPointerKeyDictionary, NSThread, NSCondition, TSUPointerKeyDictionary;
@protocol TSUiOSMemoryWarningFlushable;

@interface TSUFlushingManager : NSObject {
    TSURetainedPointerKeyDictionary *_objects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *> > { struct __tree<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSUFlushableObjectInfo *, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, TSUFlushableObjectInfoPointerFlushingOrderLess> { unsigned long long x0; } x2; } x0; } *_sortedObjects;
    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *> > { struct __tree<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSUFlushableObjectInfo *, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, TSUFlushableObjectInfoPointerTimeStampLess> { unsigned long long x0; } x2; } x0; } *_sortedNewObjects;
    TSUPointerKeyDictionary *_inactiveObjects;
    unsigned int _clock;
    BOOL _alwaysFlushing;
    BOOL _stopFlushing;
    BOOL _stopFlushingWhenQueueEmpty;
    BOOL _isFlushing;
    id<TSUiOSMemoryWarningFlushable> _flushingObject;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    NSThread *_bgThread;
    unsigned long long _backgroundTransitionTaskId;
    unsigned long long _activeBgThreadTask;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (id)sharedManager;

- (void)didEnterBackground;
- (id)init;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)dealloc;
- (void)removeObject:(id)a0;
- (unsigned long long)retainCount;
- (void)willEnterForeground;
- (id)retain;
- (void)didReceiveMemoryWarning;
- (void)addObject:(id)a0;
- (void)_startFlushingObjects;
- (void)_stopFlushingObjects;
- (void)advanceClock;
- (void)_didUseObject:(id)a0;
- (struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)eraseInfoForObject:(id)a0;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)a0;
- (void)_flushAllEligible;
- (void)_bgTaskStarted;
- (void)_backgroundThread:(id)a0;
- (void)_bgThreadActive;
- (void)_bgThreadInactive;
- (void)_bgTaskFinished;
- (BOOL)isNewObject:(struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)a0;
- (void)transferNewObjects;
- (void)doneWithObject:(id)a0;
- (void)unsafeToFlush:(id)a0;
- (void)safeToFlush:(id)a0 wasAccessed:(BOOL)a1;
- (BOOL)controlsActiveObject:(id)a0;
- (BOOL)controlsInactiveObject:(id)a0;

@end
