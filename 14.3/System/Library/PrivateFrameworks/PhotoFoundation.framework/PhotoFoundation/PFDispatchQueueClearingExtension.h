@class NSString, NSCountedSet;

@interface PFDispatchQueueClearingExtension : PFDispatchQueueExtension <PFDispatchQueueExtending> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSCountedSet *_activeOnQueues;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)alloc;
+ (unsigned long long)countOfPurgingQueues;

- (id)initInternal;
- (unsigned long long)countOfPurgingQueues;
- (void)doPurge:(id)a0 wait:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (id)queue:(id)a0 receivedDispatchBarrierAsync:(id /* block */)a1;
- (void)queue:(id)a0 didDequeue:(id)a1 skipExecution:(id /* block */)a2;
- (id)queue:(id)a0 receivedDispatchBarrierSync:(id /* block */)a1;

@end
