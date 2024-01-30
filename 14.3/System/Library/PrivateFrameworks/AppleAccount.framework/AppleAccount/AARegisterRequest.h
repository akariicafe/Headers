@class NSMutableDictionary;

@interface AARegisterRequest : AAAuthenticateRequest {
    NSMutableDictionary *_additionalCookieHeaders;
}

+ (Class)responseClass;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0 username:(id)a1 password:(id)a2;
- (void)addCookieHeaders:(id)a0;

@end
