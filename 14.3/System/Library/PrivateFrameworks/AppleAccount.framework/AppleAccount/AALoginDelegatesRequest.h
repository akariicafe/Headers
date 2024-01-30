@class NSDictionary, ACAccount;

@interface AALoginDelegatesRequest : AARequest {
    NSDictionary *_loginParameters;
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 parameters:(id)a1;

@end
