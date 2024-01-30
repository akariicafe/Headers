@interface MPHomeSharingURLProtocol : NSURLProtocol

+ (void)initialize;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;

- (void)startLoading;
- (void)stopLoading;

@end
