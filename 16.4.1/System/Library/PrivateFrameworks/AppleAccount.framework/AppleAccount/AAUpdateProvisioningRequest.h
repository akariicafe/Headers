@class NSString, ACAccount;

@interface AAUpdateProvisioningRequest : AARequest

@property (retain, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *authToken;

+ (Class)responseClass;

- (id)initWithAccount:(id)a0;
- (id)initWithAccount:(id)a0 token:(id)a1;
- (id)urlRequest;
- (id)initWithURLString:(id)a0 account:(id)a1;
- (id)urlCredential;
- (id)urlString;
- (void).cxx_destruct;

@end
