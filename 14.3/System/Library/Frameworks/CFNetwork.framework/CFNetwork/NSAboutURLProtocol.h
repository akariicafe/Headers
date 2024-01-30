@interface NSAboutURLProtocol : NSURLProtocol

+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;

- (void)startLoading;
- (void)stopLoading;

@end
