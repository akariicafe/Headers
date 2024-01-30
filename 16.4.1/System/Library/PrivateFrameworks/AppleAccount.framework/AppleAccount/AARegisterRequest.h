@class NSMutableDictionary;

@interface AARegisterRequest : AAAuthenticateRequest {
    NSMutableDictionary *_additionalCookieHeaders;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;
- (void)addCookieHeaders:(id)a0;
- (id)initWithURLString:(id)a0 username:(id)a1 password:(id)a2;

@end
