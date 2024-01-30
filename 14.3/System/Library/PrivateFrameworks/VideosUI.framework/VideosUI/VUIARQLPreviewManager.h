@class VUIARAssetRequest, NSString, NSURLSession;

@interface VUIARQLPreviewManager : NSObject <QLPreviewControllerDelegate, NSURLSessionDownloadDelegate>

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) VUIARAssetRequest *activeAssetRequest;
@property (readonly, nonatomic) double resourceTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)init;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (void)previewControllerDidDismiss:(id)a0;
- (void)previewWithURL:(id)a0 shareURL:(id)a1;
- (void)configureDownloadSession;
- (void)_presentPreviewControllerWithURL:(id)a0 shareURL:(id)a1 fileName:(id)a2;
- (id)_quickLookPreviewItemWithFileURL:(id)a0 shareURL:(id)a1;
- (id)_previewControllerWithAssetRequest:(id)a0;
- (void)configureUsingDictionary:(id)a0;
- (void)cancelExistingDownloadsIfAny;

@end
