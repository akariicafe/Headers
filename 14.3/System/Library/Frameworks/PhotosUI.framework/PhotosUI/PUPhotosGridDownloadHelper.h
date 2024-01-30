@class NSMutableDictionary, NSObject;
@protocol PUPhotosGridDownloadUpdateHandler, OS_dispatch_queue;

@interface PUPhotosGridDownloadHelper : NSObject {
    NSMutableDictionary *_downloadContexts;
    NSObject<OS_dispatch_queue> *_downloadContextsIsolationQueue;
}

@property (readonly, weak, nonatomic) id<PUPhotosGridDownloadUpdateHandler> updateHandler;
@property (nonatomic) BOOL shouldTreatLivePhotosAsStills;
@property (nonatomic) long long mode;

+ (id)createAlertControllerForDownloadError:(id)a0 withAsset:(id)a1;

- (void)cancelAllDownloads;
- (void)handleDownloadOfAssetIfNeeded:(id)a0 inCollection:(id)a1 withSuccessHandler:(id /* block */)a2;
- (void)cancelDownloadForIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_defaultOptions;
- (id)initWithGridViewController:(id)a0;
- (BOOL)isAnyPickerAssetDownloading:(id)a0;
- (void)_cancelPreviousDownloadsForAsset:(id)a0;
- (void)_checkIfRetrievalIsRequiredForResourceRequest:(id)a0 completion:(id /* block */)a1;
- (id)_downloadContextForIdentifier:(id)a0;
- (void)_startRetrievingRequiredResourcesForRequest:(id)a0 options:(id)a1 inCollection:(id)a2;
- (void)_updateDownloadProgressForAsset:(id)a0;
- (void)_downloadForRequest:(id)a0 didCompleteWithSuccess:(BOOL)a1 canceled:(BOOL)a2 error:(id)a3;
- (void)_setDownloadContext:(id)a0 forIdentifier:(id)a1;
- (void)_removeDownloadRequestForIdentifier:(id)a0;
- (id)initWithUpdateHandler:(id)a0;

@end
