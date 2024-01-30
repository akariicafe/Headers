@class NSData;

@interface AASigningSessionRequest : AARequest {
    NSData *_sessionInfoRequestData;
}

+ (Class)responseClass;

- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0 sessionInfoRequestData:(id)a1;

@end
