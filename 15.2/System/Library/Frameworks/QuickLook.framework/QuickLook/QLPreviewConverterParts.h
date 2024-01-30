@class NSData, NSString, NSURL, NSError, NSThread, NSSet, NSURLResponse, NSURLConnection;

@interface QLPreviewConverterParts : QLPreviewParts {
    void *_convertFunction;
    NSURLResponse *previewResponse;
    NSThread *delegateCallbackThread;
    NSError *mainError;
    BOOL computed;
    BOOL cancelled;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) BOOL progressive;
@property (retain, nonatomic) NSURLConnection *connection;
@property (nonatomic) BOOL shouldRemoveURLAfterGeneration;
@property (weak, nonatomic) id delegate;
@property BOOL htmlErrorDisabled;
@property (readonly, nonatomic) NSURLResponse *previewResponse;
@property (readonly, nonatomic) NSSet *attachmentURLs;
@property (readonly) long long pageCount;
@property (readonly) float pageWidth;
@property (readonly) float pageHeight;
@property (readonly, getter=isComputed) BOOL computed;
@property (readonly, getter=isCancelled) BOOL cancelled;

+ (void)registerPreview:(id)a0;
+ (void)unregisterPreview:(id)a0;
+ (Class)urlProtocolClass;

- (void)setError:(id)a0;
- (void).cxx_destruct;
- (id)safeRequestForRequest:(id)a0;
- (id)previewRequest;
- (void)dealloc;
- (void)cancel;
- (void)startComputingPreview;
- (void)startDataRepresentationWithContentType:(id)a0 properties:(id)a1;
- (void)appendData:(id)a0 forURL:(id)a1 lastChunk:(BOOL)a2;
- (id)newAttachmentURLWithID:(id)a0 properties:(id)a1;
- (void)computePreview;
- (void)registerURL:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
- (id)mimeTypeForAttachmentURL:(id)a0;
- (void)computePreviewInThread;

@end
