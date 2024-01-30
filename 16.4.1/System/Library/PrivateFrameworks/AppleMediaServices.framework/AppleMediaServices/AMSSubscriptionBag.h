@class AMSFairPlayContext;

@interface AMSSubscriptionBag : NSObject

@property (class, readonly, nonatomic) AMSSubscriptionBag *sharedInstance;

@property (readonly, nonatomic) AMSFairPlayContext *fairPlayContext;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_generateSubscriptionBagRequestWithAccountIdentifier:(id)a0 transactionType:(unsigned int)a1 machineIDData:(id)a2 returningSubscriptionBagData:(id *)a3 error:(id *)a4;
- (id)subscriptionBagSyncDataForAccount:(id)a0;

@end
