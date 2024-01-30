@class NSString, ACAccount;

@interface AAUpdateProvisioningRequest : AARequest

@property (retain, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *authToken;

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0 account:(id)a1;
- (id)urlCredential;
- (id)initWithAccount:(id)a0 token:(id)a1;
- (id)initWithAccount:(id)a0;

@end
