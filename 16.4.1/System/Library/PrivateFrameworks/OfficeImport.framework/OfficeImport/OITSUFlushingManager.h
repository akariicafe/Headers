@class OITSUPointerKeyDictionary, NSThread, NSCondition, OITSURetainedPointerKeyDictionary;
@protocol TSUiOSMemoryWarningFlushable;

@interface OITSUFlushingManager : NSObject {
    OITSURetainedPointerKeyDictionary *_objects;
    void *_sortedObjects;
    void *_sortedNewObjects;
    OITSUPointerKeyDictionary *_inactiveObjects;
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
+ (id)sharedManager;
+ (id)_singletonAlloc;

- (void)willEnterForeground;
- (id)retain;
- (void)addObject:(id)a0;
- (void)didEnterBackground;
- (oneway void)release;
- (void)removeObject:(id)a0;
- (void)didReceiveMemoryWarning;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (unsigned long long)retainCount;
- (void)_bgThreadActive;
- (void)_bgTaskStarted;
- (void)_bgThreadInactive;
- (void)_bgTaskFinished;
- (void)doneWithObject:(id)a0;
- (void)_backgroundThread:(id)a0;
- (void)_didUseObject:(id)a0;
- (void)_flushAllEligible;
- (void)_startFlushingObjects;
- (void)_stopFlushingObjects;
- (void)advanceClock;
- (BOOL)controlsActiveObject:(id)a0;
- (BOOL)controlsInactiveObject:(id)a0;
- (struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)eraseInfoForObject:(id)a0;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)a0;
- (BOOL)isNewObject:(struct TSUFlushableObjectInfo { id x0; int x1; int x2; int x3; unsigned int x4[2]; } *)a0;
- (void)safeToFlush:(id)a0 wasAccessed:(BOOL)a1;
- (void)transferNewObjects;
- (void)unsafeToFlush:(id)a0;

@end
