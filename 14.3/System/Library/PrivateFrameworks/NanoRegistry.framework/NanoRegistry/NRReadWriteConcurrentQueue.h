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

- (void)enqueueReadWithBlock:(id /* block */)a0 bypassSuspend:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithNumberOfReaders:(unsigned long long)a0;
- (void)enqueueReadWithBlock:(id /* block */)a0 bypassSuspend:(BOOL)a1 async:(BOOL)a2;
- (void)enqueueWriteWithBlockAsync:(id /* block */)a0 bypassSuspend:(BOOL)a1;
- (void)resume;
- (void)enqueueReadWithBlockAsync:(id /* block */)a0 bypassSuspend:(BOOL)a1;
- (void)suspend;
- (void)invalidate;

@end
