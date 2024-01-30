@class ACAccount;

@interface AAiCloudTermsAgreeRequest : AARequest

@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) BOOL preferPassword;

+ (Class)responseClass;

- (id)urlRequest;
- (void).cxx_destruct;
- (void)performRequestWithHandler:(id /* block */)a0;
- (id)initWithURLString:(id)a0 account:(id)a1;

@end
