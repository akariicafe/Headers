@class NSString;

@interface PLQuotaRequest : AARequest {
    NSString *_authToken;
    NSString *_personID;
}

- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0 authToken:(id)a1 personID:(id)a2;

@end
