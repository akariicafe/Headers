@class NSString;

@interface AASigningSession : NSObject {
    struct NACContextOpaque_ { } *_context;
    NSString *_certURL;
    NSString *_sessionURL;
}

@property (readonly, nonatomic) int error;

+ (id)establishedSessionWithCertURL:(id)a0 sessionURL:(id)a1 error:(id *)a2;
+ (id)_badURLError;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCertURL:(id)a0 sessionURL:(id)a1;
- (void)establishSession;
- (id)signatureForData:(id)a0;

@end
