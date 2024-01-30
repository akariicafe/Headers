@class ACAccount;

@interface AMSLogoutTask : AMSTask

@property (readonly, nonatomic) ACAccount *account;

- (void).cxx_destruct;
- (id)logout;
- (id)initWithAccount:(id)a0;

@end
