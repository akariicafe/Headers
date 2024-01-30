@class NSString, BDSOSTransaction, NSObject, BUCoalescingCallBlock;
@protocol OS_dispatch_queue, OS_dispatch_source, BCCloudKitTransactionDelegate;

@interface BCCloudKitTransaction : NSObject

@property (copy, nonatomic) NSString *entityName;
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedNotification;
@property (retain, nonatomic) BDSOSTransaction *osTransaction;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lifecycleAccessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *transactionLifetime;
@property (weak, nonatomic) id<BCCloudKitTransactionDelegate> delegate;
@property (nonatomic) long long clientCount;

+ (id)transactionNameForEntityName:(id)a0;

- (void).cxx_destruct;
- (void)signal;
- (id)transactionName;
- (double)coalescingDelay;
- (id)initWithEntityName:(id)a0 delegate:(id)a1;
- (void)performWorkWithCompletion:(id /* block */)a0;
- (double)transactionLifetimeTimout;
- (void)clientConnected;
- (void)laq_scheduleTransactionLifetime;

@end
