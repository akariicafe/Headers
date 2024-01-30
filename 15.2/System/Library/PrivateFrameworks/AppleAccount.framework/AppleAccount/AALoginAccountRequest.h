@class NSDictionary, ACAccount;

@interface AALoginAccountRequest : AARequest {
    ACAccount *_account;
    NSDictionary *_delegatesInfo;
}

+ (Class)responseClass;

- (id)urlString;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 delegates:(id)a1;
- (id)urlRequest;

@end
