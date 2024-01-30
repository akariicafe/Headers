@interface SKUIAppleIDImageURLProtocol : NSURLProtocol

+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)startLoading;
- (void)_startLoading;
- (void)stopLoading;

@end
