@class NSDictionary, NSString, ENAccountIdentity;

@interface IDSTransactionLogTaskHandlerAccountInfo : NSObject

@property (readonly, nonatomic) ENAccountIdentity *accountIdentity;
@property (readonly, nonatomic) NSDictionary *aliasToAccountsMap;
@property (readonly, nonatomic) NSString *serviceName;

- (void).cxx_destruct;
- (id)initWithAccountIdentity:(id)a0 aliasToAccountsMap:(id)a1 serviceName:(id)a2;
- (id)accountForAlias:(id)a0;

@end
