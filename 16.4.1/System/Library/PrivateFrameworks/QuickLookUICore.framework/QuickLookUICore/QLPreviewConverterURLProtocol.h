@interface QLPreviewConverterURLProtocol : QLPreviewURLProtocol

+ (void)initialize;
+ (id)_errorForNoPreview;
+ (id)protocolScheme;
+ (void)registerPreview:(id)a0;
+ (void)stopLoadingProtocol:(id)a0;
+ (void)unregisterURLs:(id)a0 andPreview:(id)a1;

@end
