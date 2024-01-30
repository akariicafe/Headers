@interface QLPreviewMultiPartURLProtocol : NSURLProtocol

+ (void)initialize;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (id)protocolScheme;

- (void)startLoading;
- (void)stopLoading;

@end
