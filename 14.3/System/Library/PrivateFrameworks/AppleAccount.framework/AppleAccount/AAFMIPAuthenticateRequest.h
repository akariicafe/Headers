@class ACAccount;

@interface AAFMIPAuthenticateRequest : AARequest {
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;

@end
