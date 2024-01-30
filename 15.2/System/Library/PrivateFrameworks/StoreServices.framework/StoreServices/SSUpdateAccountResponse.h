@class SSAccount;

@interface SSUpdateAccountResponse : NSObject

@property (readonly, nonatomic) unsigned long long credentialSource;
@property (readonly, nonatomic) SSAccount *updatedAccount;

- (id)initWithUpdatedAccount:(id)a0 credentialSource:(unsigned long long)a1;
- (void).cxx_destruct;

@end
