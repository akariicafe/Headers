@class PHResourceLocalAvailabilityRequest, NSProgress, NSObject;
@protocol OS_dispatch_queue;

@interface PHInternalAssetExportRequest : PHAssetExportRequest {
    PHResourceLocalAvailabilityRequest *_resourceRetrievalRequest;
    NSProgress *_resourceRetrievalRequestProgressParent;
    NSObject<OS_dispatch_queue> *_resourceRetrievingQueue;
}

+ (id)exportRequestForAsset:(id)a0 error:(id *)a1;
+ (id)_variantsForAsset:(id)a0 error:(id *)a1;
+ (id)exportRequestForAsset:(id)a0 variants:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)exportWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)_initWithAsset:(id)a0 variants:(id)a1 resourceRetrievalRequest:(id)a2 retrievalRequestProgressParent:(id)a3;
- (void)preflightExportWithOptions:(id)a0 assetAvailability:(long long *)a1 isProcessingRequired:(BOOL *)a2 fileURLs:(id *)a3 info:(id *)a4;

@end
