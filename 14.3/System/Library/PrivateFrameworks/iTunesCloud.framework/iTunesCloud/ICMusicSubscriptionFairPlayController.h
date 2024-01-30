@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionFairPlayController : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_fairPlaySerialQueue;
    NSMutableDictionary *_subscriptionKeyBagStatusCache;
}

@property (class, readonly) ICMusicSubscriptionFairPlayController *sharedController;

- (void).cxx_destruct;
- (void)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)a0 transactionType:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)stopSubscriptionLeaseForAccountUniqueIdentifier:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)getKeyStatusListWithCompletionHandler:(id /* block */)a0;
- (void)importSubscriptionKeyBagData:(id)a0 completionHandler:(id /* block */)a1;
- (void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)a0 transactionType:(unsigned int)a1 machineIDData:(id)a2 completionHandler:(id /* block */)a3;
- (void)_handleSubscriptionFairPlayKeyStatusChangedDistributedNotification:(id)a0;
- (void)getKeyStatusForAccountUniqueIdentifier:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)_init;
- (void)importSubscriptionKeyBagData:(id)a0 leaseInfoData:(id)a1 completionHandler:(id /* block */)a2;

@end
