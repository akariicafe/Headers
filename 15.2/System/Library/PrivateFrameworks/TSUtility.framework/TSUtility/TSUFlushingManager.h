@class TSURetainedPointerKeyDictionary, NSThread, NSCondition, TSUPointerKeyDictionary, TSUMemoryWatcher;
@protocol TSUFlushable;

@interface TSUFlushingManager : NSObject {
    TSURetainedPointerKeyDictionary *_objects;
    void *_sortedObjects;
    void *_sortedNewObjects;
    TSUPointerKeyDictionary *_inactiveObjects;
    unsigned int _clock;
    BOOL _alwaysFlushing;
    BOOL _stopFlushing;
    BOOL _stopFlushingWhenQueueEmpty;
    BOOL _isFlushing;
    id<TSUFlushable> _flushingObject;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    TSUMemoryWatcher *_memoryWatcher;
    NSThread *_bgThread;
    unsigned long long _backgroundTransitionTaskId;
    unsigned long long _activeBgThreadTask;
}

+ (id)sharedManager;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (void)didReceiveMemoryWarning;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (void)dealloc;
- (void)removeObject:(id)a0;
- (oneway void)release;
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
- (void)protectObject:(id)a0;
- (void)stopProtectingObject:(id)a0;
- (void)memoryLevelIncreased:(int)a0 was:(int)a1;
- (void)memoryLevelDecreased:(int)a0 was:(int)a1;

@end
