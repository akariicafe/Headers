@class NSObject;
@protocol OS_dispatch_queue;

@interface PHCloudSharedAssetExportRequest : PHAssetExportRequest {
    int _imageManagerImageRequestId;
    int _imageManagerVideoRequestId;
    NSObject<OS_dispatch_queue> *_resourceRetrievingQueue;
}

+ (id)exportRequestForAsset:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)exportWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleImageManagerResultForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 progress:(id)a2 processingUnitCount:(unsigned long long)a3 options:(id)a4 withFileUrls:(id)a5 info:(id)a6 completionHandler:(id /* block */)a7;
- (void)_requestFileURLsForAsset:(id)a0 withOptions:(id)a1 networkAccessAllowed:(BOOL)a2 progressHandler:(id /* block */)a3 resultHandler:(id /* block */)a4;
- (int)_requestImageURLForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 progressHandler:(id /* block */)a2 resultHandler:(id /* block */)a3;
- (void)_requestLivePhotoURLsForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 progressHandler:(id /* block */)a2 resultHandler:(id /* block */)a3;
- (int)_requestVideoURLForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 progressHandler:(id /* block */)a2 resultHandler:(id /* block */)a3;
- (void)exportWithOptions:(id)a0 networkAccessAllowed:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithAsset:(id)a0 variants:(id)a1;
- (void)preflightExportWithOptions:(id)a0 assetAvailability:(long long *)a1 isProcessingRequired:(BOOL *)a2 fileURLs:(id *)a3 info:(id *)a4;

@end
