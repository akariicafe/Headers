@class NSString;

@interface PLQuotaRequest : AARequest {
    NSString *_authToken;
    NSString *_personID;
}

- (id)initWithURLString:(id)a0 authToken:(id)a1 personID:(id)a2;
- (void).cxx_destruct;
- (id)urlRequest;

@end
