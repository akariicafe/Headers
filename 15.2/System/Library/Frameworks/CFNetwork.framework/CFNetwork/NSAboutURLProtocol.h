@interface NSAboutURLProtocol : NSURLProtocol

+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)startLoading;
- (void)stopLoading;

@end
