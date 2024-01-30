@class NSString, ACAccount;

@interface AMSBagFixedAccountProvider : NSObject <AMSBagAccountProvider>

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) BOOL bagLoadShouldUpdateAccountProperties;
@property (readonly, nonatomic) NSString *identity;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (BOOL)associatedAccountIsEqualToAccount:(id)a0 forMediaType:(id)a1;
- (id)bagAccountForAccountMediaType:(id)a0;
- (id)bagStorefrontForAccountMediaType:(id)a0;

@end
