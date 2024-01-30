@class ACAccount;

@interface AAAvailabilityRequest : AARequest {
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlString;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)urlRequest;

@end
