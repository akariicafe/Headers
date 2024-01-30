@class ICCloudServiceStatusMonitor, ACAccount;

@interface AMSLogoutTask : AMSTask

@property (retain, nonatomic) ICCloudServiceStatusMonitor *iCloudServiceMonitor;
@property (readonly, nonatomic) ACAccount *account;

+ (void)_resetServerDataCacheForAccountWithDSID:(id)a0;

- (id)initWithAccount:(id)a0;
- (id)logout;
- (void).cxx_destruct;
- (BOOL)_disableAutomaticDownloadKindsWithError:(id *)a0;
- (BOOL)_disableBookkeeperWithBag:(id)a0 error:(id *)a1;
- (BOOL)_revokeMusicKitUserTokensWithError:(id *)a0;
- (BOOL)_sendLogoutRequestWithBag:(id)a0 error:(id *)a1;

@end
