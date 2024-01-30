@interface QLPreviewURLProtocol : NSURLProtocol

+ (BOOL)canInitWithRequest:(id)a0;
+ (void)initialize;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)isSafeURL:(id)a0;
+ (BOOL)isSafeRequest:(id)a0;
+ (id)protocolScheme;
+ (void)appendData:(id)a0 forURL:(id)a1 lastChunk:(BOOL)a2;
+ (void)registerPreview:(id)a0 forPreviewURL:(id)a1;
+ (void)unregisterURLs:(id)a0 andPreviewURL:(id)a1;
+ (void)cancelLoadingProtocol:(id)a0;
+ (void)stopLoadingProtocol:(id)a0;
+ (id)newUniqueURLWithName:(id)a0;
+ (void)setError:(id)a0 forURL:(id)a1;
+ (void)registerURL:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
+ (id)mimeTypeForAttachmentURL:(id)a0;
+ (id)_errorForAbort;
+ (void)_unregisterURL:(id)a0;
+ (id)_errorForCancel;
+ (void)stopLoadingProtocol:(id)a0 isCancel:(BOOL)a1;
+ (void)startLoadingProtocol:(id)a0;
+ (id)newURLWithContentID:(id)a0 baseURL:(id)a1;
+ (id)errorForURL:(id)a0;
+ (void)_dumpPendingProtocols;

- (void)startLoading;
- (void)stopLoading;

@end
