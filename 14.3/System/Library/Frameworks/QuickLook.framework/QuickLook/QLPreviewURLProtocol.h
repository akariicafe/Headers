@interface QLPreviewURLProtocol : NSURLProtocol

+ (void)initialize;
+ (id)canonicalRequestForRequest:(id)a0;
+ (id)errorForURL:(id)a0;
+ (id)_errorForAbort;
+ (void)_unregisterURL:(id)a0;
+ (id)_errorForCancel;
+ (void)startLoadingProtocol:(id)a0;
+ (void)stopLoadingProtocol:(id)a0;
+ (id)newUniqueURLWithName:(id)a0;
+ (id)newURLWithContentID:(id)a0 baseURL:(id)a1;
+ (void)registerURL:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
+ (id)_errorForNoPreview;
+ (void)unregisterURLs:(id)a0 andPreview:(id)a1;
+ (void)setError:(id)a0 forURL:(id)a1;
+ (id)mimeTypeForAttachmentURL:(id)a0;
+ (void)appendData:(id)a0 forURL:(id)a1 lastChunk:(BOOL)a2;
+ (BOOL)canInitWithRequest:(id)a0;
+ (void)registerPreview:(id)a0;

- (void)startLoading;
- (void)stopLoading;

@end
