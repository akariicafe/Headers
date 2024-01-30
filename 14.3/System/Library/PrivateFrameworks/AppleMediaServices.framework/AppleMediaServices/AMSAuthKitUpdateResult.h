@class NSDictionary, ACAccount;

@interface AMSAuthKitUpdateResult : NSObject

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSDictionary *authenticationResults;
@property (readonly, nonatomic) unsigned long long credentialSource;

+ (id)_createUpdatedAccount:(id)a0 usingAuthenticationResults:(id)a1 options:(id)a2;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 authenticationResults:(id)a1 options:(id)a2;
- (id)initWithAccount:(id)a0 authenticationResults:(id)a1 credentialSource:(unsigned long long)a2 options:(id)a3;

@end
