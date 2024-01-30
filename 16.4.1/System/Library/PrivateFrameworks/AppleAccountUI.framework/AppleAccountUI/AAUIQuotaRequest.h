@class ACAccount;

@interface AAUIQuotaRequest : AARequest {
    ACAccount *_account;
    BOOL _isDetailedRequest;
}

+ (Class)responseClass;

- (id)initWithAccount:(id)a0;
- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;
- (id)initDetailedRequestWithAccount:(id)a0;

@end
