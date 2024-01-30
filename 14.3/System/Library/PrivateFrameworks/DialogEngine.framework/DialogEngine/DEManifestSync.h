@class NSURLSession, NSMutableDictionary, DEUpdater, DEManifest, NSString;

@interface DEManifestSync : NSObject <NSURLSessionDownloadDelegate>

@property (retain, nonatomic) DEManifest *manifest;
@property (retain, nonatomic) DEUpdater *updater;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSMutableDictionary *inProgress;
@property (copy, nonatomic) id /* block */ postSyncBlock;
@property (nonatomic) BOOL syncInForeground;
@property (nonatomic) BOOL checkOverlay;
@property (nonatomic) BOOL cleanStorage;
@property (nonatomic) BOOL downloadFailure;
@property (nonatomic) BOOL success;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sync:(id /* block */)a0;
- (void)sync;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)init;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void).cxx_destruct;
- (void)clean;
- (void)doIfLatest:(id /* block */)a0 inBackground:(BOOL)a1 elseDo:(id /* block */)a2;
- (void)handlePostSyncBlock;
- (void)checkOverlay:(id)a0 overlayChecks:(id)a1 workArray:(id)a2 postFileBlock:(id /* block */)a3;
- (void)cleanStorage:(id)a0 removes:(id)a1 workArray:(id)a2 postFileBlock:(id /* block */)a3;
- (void)cleanupURLSession;
- (void)backgroundSync;
- (id)initWithManifest:(id)a0 updater:(id)a1 syncInForeground:(BOOL)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)directorySync:(id /* block */)a0;
- (void)directoryClean:(id /* block */)a0;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (BOOL)isLatest;

@end
