@class ACAccount;

@interface ICQStoragePlanRecommendation : NSObject

@property (retain, nonatomic) ACAccount *account;

+ (id)_requestQueue;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (void)calculateExtraQuotaNeededToSyncIsAccountFull:(BOOL)a0 completion:(id /* block */)a1;

@end
