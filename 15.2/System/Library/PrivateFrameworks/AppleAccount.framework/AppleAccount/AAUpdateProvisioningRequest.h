@class NSString, ACAccount;

@interface AAUpdateProvisioningRequest : AARequest

@property (retain, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *authToken;

+ (Class)responseClass;

- (id)urlString;
- (id)initWithAccount:(id)a0;
- (id)initWithAccount:(id)a0 token:(id)a1;
- (void).cxx_destruct;
- (id)urlCredential;
- (id)urlRequest;
- (id)initWithURLString:(id)a0 account:(id)a1;

@end
