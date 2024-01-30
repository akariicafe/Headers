@class ACAccount;

@interface AAUIQuotaRequest : AARequest {
    ACAccount *_account;
    BOOL _isDetailedRequest;
}

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)initDetailedRequestWithAccount:(id)a0;

@end
