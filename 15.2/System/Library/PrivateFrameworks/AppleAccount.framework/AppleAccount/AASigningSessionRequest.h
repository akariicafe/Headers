@class NSData;

@interface AASigningSessionRequest : AARequest {
    NSData *_sessionInfoRequestData;
}

+ (Class)responseClass;

- (id)initWithURLString:(id)a0 sessionInfoRequestData:(id)a1;
- (void).cxx_destruct;
- (id)urlRequest;

@end
