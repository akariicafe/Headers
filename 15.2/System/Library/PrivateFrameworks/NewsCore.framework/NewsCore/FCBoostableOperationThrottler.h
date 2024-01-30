@class NSObject;
@protocol OS_dispatch_queue, FCBoostableOperationThrottlerDelegate;

@interface FCBoostableOperationThrottler : NSObject <FCOperationThrottler>

@property (weak, nonatomic) id<FCBoostableOperationThrottlerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue;
@property (nonatomic) BOOL workPending;
@property (nonatomic) long long workPendingQualityOfService;
@property (nonatomic) unsigned long long workPendingMergedData;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } workPendingLock;
@property (nonatomic) unsigned long long mergedData;
@property BOOL suspended;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)tickle;
- (id)initWithDelegate:(id)a0;
- (void)boostToQualityOfService:(long long)a0;
- (void)tickleWithQualityOfService:(long long)a0 completion:(id /* block */)a1;
- (void)tickleWithQualityOfService:(long long)a0 data:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)tickleWithCompletion:(id /* block */)a0;
- (void)tickleWithQualityOfService:(long long)a0;

@end
