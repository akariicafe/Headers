@class NSObject;
@protocol OS_dispatch_queue;

@interface REUpNextScheduler : NSObject {
    BOOL _updateScheduled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _scheduledLock;
    NSObject<OS_dispatch_queue> *_originalQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double delay;
@property (readonly, copy, nonatomic) id /* block */ updateBlock;
@property (readonly, copy, nonatomic) id /* block */ updateCompletionBlock;
@property (readonly, nonatomic) BOOL isScheduled;

+ (id)schedulerWithQueue:(id)a0 updateBlock:(id /* block */)a1;
+ (id)schedulerWithQueue:(id)a0 delay:(double)a1 updateBlock:(id /* block */)a2;
+ (id)schedulerWithQueue:(id)a0 delay:(double)a1 updateCompletionBlock:(id /* block */)a2;

- (BOOL)performImmediately;
- (void)schedule;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_queue_performUpdate;
- (id)initWithQueue:(id)a0 delay:(double)a1 updateBlock:(id /* block */)a2 updateCompletionBlock:(id /* block */)a3;

@end
