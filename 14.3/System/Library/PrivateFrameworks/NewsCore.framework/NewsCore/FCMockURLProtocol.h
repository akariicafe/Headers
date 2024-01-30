@interface FCMockURLProtocol : NSURLProtocol

+ (id)canonicalRequestForRequest:(id)a0;
+ (id)URLForError:(id)a0;
+ (id)URLForData:(id)a0 mimeType:(id)a1 statusCode:(unsigned long long)a2;
+ (id)URLForData:(id)a0 mimeType:(id)a1;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)canInitWithRequest:(id)a0;

- (void)startLoading;
- (void)stopLoading;

@end
