@class SCRCStackQueue;

@interface SCRCThread : NSObject {
    SCRCStackQueue *_queue;
    SCRCStackQueue *_waitingQueue;
    id _queueLock;
    struct __CFRunLoopSource { } *_source;
    struct __CFRunLoop { } *_runLoop;
    BOOL _isInvalid;
    BOOL _isRegistered;
    BOOL _isTimerSet;
    BOOL _shouldStop;
    BOOL _isWaitingForStoppingThread;
}

@property (retain, nonatomic, setter=_setKey:) id _key;
@property (nonatomic, setter=_setLastStartTime:) double lastStartTime;

+ (id)activity;
+ (void)initialize;
+ (long long)defaultThreadPriority;
+ (long long)activeThreadCount;
+ (void)setDefaultThreadPriority:(long long)a0;
+ (double)_performSelector:(SEL)a0 withThreadKey:(id)a1 onTarget:(id)a2 waitTime:(double)a3 cancelMask:(unsigned int)a4 count:(unsigned int)a5 firstObject:(id)a6 moreObjects:(char *)a7;
+ (double)lastStartTimeForKey:(id)a0;
+ (void)invalidateForKey:(id)a0;
+ (void)postStopNotification;
+ (id)currentThreadTaskCache;
+ (BOOL)_addThreadToRegisteredThreads:(id)a0 withThreadKey:(id)a1;
+ (BOOL)_removeThreadFromRegisteredThreads:(id)a0 withThreadKey:(id)a1;

- (void)setName:(id)a0;
- (id)init;
- (BOOL)isInvalid;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_shouldStop;
- (void)_processQueue;
- (void)setIsInvalid:(BOOL)a0;
- (void)_assignThreadPriority;
- (double)performSelector:(SEL)a0 onTarget:(id)a1 count:(unsigned int)a2 objects:(id)a3;
- (id)_initWithKey:(id)a0 task:(id)a1;
- (void)_setIsWaitingForStoppingThread:(BOOL)a0;
- (void)_enqueueTask:(id)a0 cancelMask:(unsigned int)a1 lastStartTime:(double *)a2;
- (void)_runThread:(id)a0;
- (void)_threadDidStop;
- (double)_performSelector:(SEL)a0 onTarget:(id)a1 cancelMask:(unsigned int)a2 count:(unsigned int)a3 firstObject:(id)a4 moreObjects:(char *)a5;
- (void)_enqueueImmediateTask:(id)a0 cancelMask:(unsigned int)a1 lastStartTime:(double *)a2;
- (void)_enqueueWaitingTask:(id)a0 cancelMask:(unsigned int)a1 lastStartTime:(double *)a2;
- (void)_processQueueFromTimer;
- (BOOL)_debug_currentlyRunningOnThisThread;
- (double)performSelector:(SEL)a0 onTarget:(id)a1 cancelMask:(unsigned int)a2 count:(unsigned int)a3 objects:(id)a4;
- (BOOL)_isWaitingForStoppingThread;

@end
