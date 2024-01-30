@class NSURLSession, NSMutableDictionary, DEUpdater, DEManifest, NSString;

@interface DEManifestSync : NSObject <NSURLSessionDownloadDelegate>

@property (retain, nonatomic) DEManifest *manifest;
@property (retain, nonatomic) DEUpdater *updater;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSMutableDictionary *downloads;
@property (retain, nonatomic) NSMutableDictionary *inProgress;
@property (copy, nonatomic) id /* block */ postSyncBlock;
@property (retain, nonatomic) NSString *backgroundId;
@property (retain, nonatomic) NSString *priorBackgroundId;
@property (nonatomic) BOOL checkOverlay;
@property (nonatomic) BOOL cleanStorage;
@property (nonatomic) BOOL downloadFailure;
@property (nonatomic) BOOL success;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)sync;
- (void)sync:(id /* block */)a0;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (void)clean;
- (BOOL)startDownload:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (BOOL)isLatest;
- (void)cleanupURLSession;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)initWithManifest:(id)a0 updater:(id)a1 backgroundId:(id)a2 priorBackgroundId:(id)a3;
- (void)directorySync:(id /* block */)a0;
- (id)initWithManifest:(id)a0 updater:(id)a1;
- (void)directoryClean:(id /* block */)a0;
- (void)doIfLatest:(id /* block */)a0 inBackground:(BOOL)a1 elseDo:(id /* block */)a2;
- (void)handlePostSyncBlock;
- (void)checkOverlay:(id)a0 overlayChecks:(id)a1 workArray:(id)a2 postFileBlock:(id /* block */)a3;
- (void)cleanStorage:(id)a0 removes:(id)a1 workArray:(id)a2 postFileBlock:(id /* block */)a3;
- (void)backgroundSync;

@end
