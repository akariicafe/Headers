@class SSAccount, NSString;

@interface ISLogoutOperation : ISOperation

@property (retain, nonatomic) SSAccount *account;
@property (retain, nonatomic) NSString *logKey;

- (void)run;
- (void).cxx_destruct;
- (id)_copyAuthenticationContext;
- (void)_disableAutomaticDownloadKinds;
- (void)_disableBookkeeper;
- (void)_sendLogoutRequest;
- (id)_sbsyncData;
- (id)_createDisableBookkeeperRequestPropertiesWithURL:(id)a0;
- (id)_createLogoutRequestProperties;
- (id)initWithAccount:(id)a0 logKey:(id)a1;

@end
