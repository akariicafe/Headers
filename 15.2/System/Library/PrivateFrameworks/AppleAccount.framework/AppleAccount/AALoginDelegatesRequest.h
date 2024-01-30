@class NSDictionary, ACAccount;

@interface AALoginDelegatesRequest : AARequest {
    NSDictionary *_loginParameters;
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlString;
- (id)initWithAccount:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;
- (id)urlRequest;

@end
