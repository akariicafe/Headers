@class NSObject;
@protocol OS_dispatch_queue, RCOperationThrottlerDelegate;

@interface RCBoostableOperationThrottler : NSObject <RCOperationThrottler>

@property (weak, nonatomic) id<RCOperationThrottlerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue;
@property (nonatomic) BOOL workPending;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } workPendingLock;
@property BOOL suspended;

- (void)tickle;
- (id)initWithDelegate:(id)a0;
- (void)tickleWithQualityOfService:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)tickleWithCompletion:(id /* block */)a0;
- (void)tickleWithQualityOfService:(long long)a0;

@end
