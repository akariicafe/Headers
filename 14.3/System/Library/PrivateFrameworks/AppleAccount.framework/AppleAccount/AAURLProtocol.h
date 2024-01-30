@interface AAURLProtocol : NSURLProtocol {
    unsigned long long _state;
}

+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)canInitWithRequest:(id)a0;

- (void)startLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (void)stopLoading;
- (id)_normalizedRequestForURL:(id)a0;

@end
