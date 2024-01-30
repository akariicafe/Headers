@class NSString, _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface PPNotificationHandler : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_waiterQueue;
}

@property (nonatomic) double waitSeconds;
@property (retain, nonatomic) NSString *name;

- (void).cxx_destruct;
- (void)waitOnQueueToDrain;
- (id)description;
- (void)fireWithObjects:(id)a0;
- (id)initWithName:(id)a0 waitSeconds:(double)a1;
- (void)_executeBlocksWithGuardedData:(id)a0;
- (void)_delayedExecutionAfterSeconds:(double)a0;
- (void)addObserverBlock:(id /* block */)a0 forLifetimeOfObject:(id)a1;

@end
