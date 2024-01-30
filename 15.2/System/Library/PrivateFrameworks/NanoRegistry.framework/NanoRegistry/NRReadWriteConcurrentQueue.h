@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NRReadWriteConcurrentQueue : NSObject {
    NSMutableArray *_readerQueues;
    NSObject<OS_dispatch_queue> *_writerQueue;
    long long _nextReader;
    BOOL _suspended;
    NSMutableArray *_suspendedReadRequests;
    NSMutableArray *_suspendedWriteRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)enqueueReadWithBlockAsync:(id /* block */)a0 bypassSuspend:(BOOL)a1;
- (id)initWithNumberOfReaders:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)suspend;
- (void)invalidate;
- (void)resume;
- (void)enqueueReadWithBlock:(id /* block */)a0 bypassSuspend:(BOOL)a1 async:(BOOL)a2;
- (void)enqueueWriteWithBlockAsync:(id /* block */)a0 bypassSuspend:(BOOL)a1;
- (void)enqueueReadWithBlock:(id /* block */)a0 bypassSuspend:(BOOL)a1;

@end
