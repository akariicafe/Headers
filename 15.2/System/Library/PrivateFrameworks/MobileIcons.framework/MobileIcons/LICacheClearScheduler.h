@class NSObject;
@protocol OS_dispatch_source, OS_os_transaction, OS_dispatch_queue;

@interface LICacheClearScheduler : NSObject

@property (retain) NSObject<OS_dispatch_source> *timer;
@property BOOL timerFired;
@property (retain) NSObject<OS_dispatch_source> *memoryPreasure;
@property unsigned long long memoryPreasureState;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property BOOL holdTransaction;
@property (readonly) id /* block */ clearHandler;
@property (readonly) id object;
@property double delay;

+ (id)transactionDescription:(id)a0;

- (void).cxx_destruct;
- (void)_queue_clearCache;
- (id)initWithObject:(id)a0 delay:(double)a1 holdTransaction:(BOOL)a2 clearHandler:(id /* block */)a3;

@end
