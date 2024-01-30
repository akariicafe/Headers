@class NSMutableDictionary, TSUWeakReference, NSCondition, NSMutableArray;

@interface TSKAccessController : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
    BOOL _secondaryThreadWriting;
    NSCondition *_cond;
    NSMutableDictionary *_signalIdentifiers;
    NSMutableDictionary *_waitIdentifiers;
    struct __CFRunLoopSource { } *_mainThreadPingSource;
    NSMutableArray *_pendingMainThreadInvocations;
    struct _TSKThreadInfo { struct _opaque_pthread_t *threadId; unsigned int count; } _readerInfo[64];
    unsigned int _readerCount;
    NSMutableArray *_writerQueue;
    BOOL _writeHeld;
    BOOL _writeBlockedMainThread;
    TSUWeakReference *_delegate;
}

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (BOOL)hasRead;
- (BOOL)waitOnIdentifier:(id)a0 untilDate:(id)a1 releaseReadWhileWaiting:(BOOL)a2;
- (BOOL)p_hasRead;
- (void)p_readUnlock;
- (BOOL)p_hasWrite;
- (BOOL)p_waitWithCondition:(id)a0 untilDate:(id)a1;
- (void)p_signalThread:(id)a0;
- (void)p_readLock;
- (void)performRead:(id /* block */)a0;
- (void)performWrite:(id /* block */)a0 blockMainThread:(BOOL)a1;
- (void)p_enqueueWriteAndBlock;
- (void)p_writeLockAndBlockMainThread:(BOOL)a0;
- (void)p_writeUnlock;
- (void)p_dequeueWrite;
- (void)performWrite:(id /* block */)a0;
- (void)p_scheduleMainThreadRead:(id)a0;
- (void)performRead:(SEL)a0 thenWrite:(SEL)a1 thenReadOnMainThread:(SEL)a2 withTarget:(id)a3 argument:(void *)a4 passReadResultToMainThreadRead:(BOOL)a5;
- (void)p_writeUnlockAndPerformWithMainThreadBlocked:(id /* block */)a0;
- (id)p_threadIdentifier;
- (void)signalIdentifier:(id)a0;
- (void)waitOnIdentifier:(id)a0;
- (void)p_blockMainThreadForWrite;
- (void)p_asyncPerformSelectorOnMainThread:(SEL)a0 withTarget:(id)a1 argument:(void *)a2;
- (void)performRead:(SEL)a0 withTarget:(id)a1 argument:(void *)a2 argument2:(void *)a3;
- (void)p_performReadOnMainThread:(id)a0;
- (void)p_flushPendingMainThreadBlocksQueueAcquiringLock:(BOOL)a0;
- (void)spinMainThreadRunLoopUntil:(SEL)a0 onTarget:(id)a1;
- (void)performRead:(SEL)a0 withTarget:(id)a1 argument:(void *)a2;
- (void)performWrite:(SEL)a0 withTarget:(id)a1 argument:(void *)a2;
- (void)performRead:(SEL)a0 thenReadOnMainThread:(SEL)a1 withTarget:(id)a2 argument:(void *)a3;
- (void)performRead:(SEL)a0 thenWrite:(SEL)a1 thenReadOnMainThread:(SEL)a2 withTarget:(id)a3 argument:(void *)a4;
- (BOOL)hasWrite;
- (BOOL)currentThreadHasWriteLock;

@end
