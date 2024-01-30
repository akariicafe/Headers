@class SSAccount;

@interface SSUpdateAccountResponse : NSObject

@property (readonly, nonatomic) unsigned long long credentialSource;
@property (readonly, nonatomic) SSAccount *updatedAccount;

- (void).cxx_destruct;
- (id)initWithUpdatedAccount:(id)a0 credentialSource:(unsigned long long)a1;

@end
