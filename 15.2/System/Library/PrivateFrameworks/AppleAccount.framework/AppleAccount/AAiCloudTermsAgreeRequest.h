@class ACAccount;

@interface AAiCloudTermsAgreeRequest : AARequest

@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) BOOL preferPassword;

+ (Class)responseClass;

- (void)performRequestWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithURLString:(id)a0 account:(id)a1;

@end
