@class VSAccount, VSOptional, VSAccountMetadata;

@interface VSIdentityProviderResponse : NSObject

@property (copy, nonatomic) VSAccountMetadata *accountMetadata;
@property (retain, nonatomic) VSAccount *account;
@property (nonatomic) BOOL didCreateAccount;
@property (retain, nonatomic) VSOptional *logoLoadOperation;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
