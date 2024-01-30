@class NSData;

@interface AASigningSessionResponse : AAResponse

@property (retain, nonatomic) NSData *sessionData;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
