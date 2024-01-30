@class NSMutableDictionary, NSURL, NSMutableSet, NSURLRequest;

@interface QLPreviewParts : NSObject

@property (retain, nonatomic) NSURL *previewURL;
@property (retain, nonatomic) NSMutableSet *outstandingURLs;
@property (retain, nonatomic) NSMutableDictionary *encodingsForURLs;
@property (retain, nonatomic) NSMutableSet *registeredURLs;
@property (readonly, nonatomic) NSURLRequest *previewRequest;

+ (void)registerPreview:(id)a0;
+ (void)unregisterPreview:(id)a0;
+ (Class)urlProtocolClass;
+ (id)registeredPreviewForURL:(id)a0;
+ (id)relativeStringForSafeURL:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)startComputingPreview;
- (void)appendData:(id)a0 forURL:(id)a1 lastChunk:(BOOL)a2;
- (void)startDataRepresentationWithMimeType:(id)a0 textEncoding:(id)a1;
- (id)newSafeAttachmentURLWithID:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
- (id)requestForURL:(id)a0;
- (void)computePreview:(id /* block */)a0;
- (id)voidRequest;
- (void)registerURL:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
- (id)newAttachmentURLWithID:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
- (void)computePreviewInThread;
- (void)startAttachmentWithURL:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
- (BOOL)isRegisteredURL:(id)a0;
- (unsigned int)cfEncodingForAttachmentURL:(id)a0;

@end
