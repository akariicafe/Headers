@interface QLPreviewConverterURLProtocol : QLPreviewURLProtocol

+ (void)initialize;
+ (void)registerPreview:(id)a0;
+ (id)protocolScheme;
+ (id)_errorForNoPreview;
+ (void)unregisterURLs:(id)a0 andPreview:(id)a1;
+ (void)stopLoadingProtocol:(id)a0;

@end
