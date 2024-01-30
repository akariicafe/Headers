@class NSDictionary, ACAccount;

@interface AALoginDelegatesRequest : AARequest {
    NSDictionary *_loginParameters;
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 parameters:(id)a1;

@end
