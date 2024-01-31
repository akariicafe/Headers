@interface NSAboutURLProtocol : NSURLProtocol

+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)stopLoading;
- (void)startLoading;

@end
