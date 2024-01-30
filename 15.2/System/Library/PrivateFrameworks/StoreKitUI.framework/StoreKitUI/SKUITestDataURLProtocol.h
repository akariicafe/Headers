@interface SKUITestDataURLProtocol : NSURLProtocol

+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;

- (void)startLoading;
- (void)stopLoading;

@end
