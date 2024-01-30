@interface SKUIAppleIDImageURLProtocol : NSURLProtocol

+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;

- (void)startLoading;
- (void)stopLoading;
- (void)_startLoading;

@end
