@class AMSFairPlayContext;

@interface AMSSubscriptionBag : NSObject

@property (class, readonly, nonatomic) AMSSubscriptionBag *sharedInstance;

@property (readonly, nonatomic) AMSFairPlayContext *fairPlayContext;

- (BOOL)_generateSubscriptionBagRequestWithAccountIdentifier:(id)a0 transactionType:(unsigned int)a1 machineIDData:(id)a2 returningSubscriptionBagData:(id *)a3 error:(id *)a4;
- (void).cxx_destruct;
- (id)subscriptionBagSyncDataForAccount:(id)a0;
- (id)init;

@end
