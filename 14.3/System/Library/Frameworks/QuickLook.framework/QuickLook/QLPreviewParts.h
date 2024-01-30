@class NSData, NSString, NSURL, NSError, NSSet, NSMutableDictionary, NSThread, NSURLResponse, NSURLRequest, NSMutableSet, NSURLConnection;

@interface QLPreviewParts : NSObject {
    void *_convertFunction;
    NSURLResponse *previewResponse;
    NSMutableSet *registeredURLs;
    NSMutableSet *outstandingURLs;
    NSMutableDictionary *encodingsForURLs;
    NSThread *delegateCallbackThread;
    NSError *mainError;
    BOOL computed;
    BOOL cancelled;
    const void *representedObject;
    struct { long long version; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; void /* function */ *equal; } representedObjectCallbacks;
    long long representedObjectProtection;
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
@property (readonly, nonatomic) NSURLRequest *previewRequest;
@property (readonly, nonatomic) NSURLResponse *previewResponse;
@property (readonly, nonatomic) NSURL *previewURL;
@property (readonly, nonatomic) NSSet *attachmentURLs;
@property (readonly) long long pageCount;
@property (readonly) float pageWidth;
@property (readonly) float pageHeight;
@property (readonly, getter=isComputed) BOOL computed;
@property (readonly, getter=isCancelled) BOOL cancelled;

+ (void)unregisterPreview:(id)a0;
+ (BOOL)isSafeURL:(id)a0;
+ (BOOL)isSafeRequest:(id)a0;
+ (id)safeURLScheme;
+ (id)relativeStringForSafeURL:(id)a0;
+ (void)registerPreview:(id)a0;

- (void)cancel;
- (void)startComputingPreview;
- (void).cxx_destruct;
- (id)newSafeAttachmentURLWithID:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
- (void)dealloc;
- (id)mimeTypeForAttachmentURL:(id)a0;
- (id)_voidRequest;
- (id)_requestForURL:(id)a0;
- (void)computePreviewInThread;
- (void)_protectRepresentedObjectSafely;
- (void)computePreview;
- (void)_discardRepresentedObjectSafely;
- (void)_registerURL:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
- (unsigned int)cfEncodingForAttachmentURL:(id)a0;
- (void)startDataRepresentationWithContentType:(id)a0 properties:(id)a1;
- (void)appendData:(id)a0 forURL:(id)a1 lastChunk:(BOOL)a2;
- (id)newAttachmentURLWithID:(id)a0 properties:(id)a1;
- (void)setDocumentObject:(const void *)a0 callbacks:(const struct { long long x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a1;
- (const void *)documentObject;
- (id)safeRequestForRequest:(id)a0;
- (void)setError:(id)a0;

@end
