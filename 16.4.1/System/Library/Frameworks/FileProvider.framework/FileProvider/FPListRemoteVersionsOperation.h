@class NSURL, NSOperationQueue;

@interface FPListRemoteVersionsOperation : FPOperation {
    NSURL *_documentURL;
    NSOperationQueue *_queue;
}

@property (nonatomic) BOOL includeCachedVersions;

- (void)main;
- (id)fp_prettyDescription;
- (void).cxx_destruct;
- (id)initWithDocumentURL:(id)a0;
- (BOOL)isSandboxExtensionConsumed;
- (void)presendNotifications;

@end
