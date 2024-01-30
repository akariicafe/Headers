@interface _NSCFTranslatedFileURLProtocol : NSURLProtocol {
    const struct CFURLProtocolInstanceCallbacks { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void *x13; } *_callbacks;
    struct CFURLProtocolClient { long long version; void *client; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; void /* function */ *wasRedirected; void /* function */ *cacheResponseIsValid; void /* function */ *didReceiveResponse; void /* function */ *didLoadData; void /* function */ *didFinishLoading; void /* function */ *didFail; void /* function */ *didReceiveAuthenticationChallenge; } _cfurlClient;
    const void *_info;
}

+ (const struct CFURLProtocolImplementation { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; } *)pimpl;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)canInitWithRequest:(id)a0;

- (void)startLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (void)dealloc;
- (void)stopLoading;

@end
