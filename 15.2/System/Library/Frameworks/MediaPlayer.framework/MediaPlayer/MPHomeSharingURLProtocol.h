@interface MPHomeSharingURLProtocol : NSURLProtocol

+ (BOOL)canInitWithRequest:(id)a0;
+ (void)initialize;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)startLoading;
- (void)stopLoading;

@end
