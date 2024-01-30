@class ACAccount;

@interface AMSLogoutTask : AMSTask

@property (readonly, nonatomic) ACAccount *account;

- (id)logout;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (BOOL)_disableAutomaticDownloadKindsWithError:(id *)a0;
- (BOOL)_disableBookkeeperWithBag:(id)a0 error:(id *)a1;
- (BOOL)_sendLogoutRequestWithBag:(id)a0 error:(id *)a1;

@end
