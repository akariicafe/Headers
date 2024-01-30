@interface QLPreviewMultiPartURLProtocol : NSURLProtocol

+ (BOOL)canInitWithRequest:(id)a0;
+ (void)initialize;
+ (id)canonicalRequestForRequest:(id)a0;
+ (id)protocolScheme;

- (void)startLoading;
- (void)stopLoading;

@end
