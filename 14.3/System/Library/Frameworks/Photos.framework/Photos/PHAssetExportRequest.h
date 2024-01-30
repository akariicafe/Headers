@class NSString, NSProgress, NSDictionary, PHAsset, NSURL, NSObject;
@protocol OS_dispatch_queue, PHAssetExportRequestDelegate;

@interface PHAssetExportRequest : NSObject <NSProgressReporting> {
    NSURL *_outputDirectory;
    NSObject<OS_dispatch_queue> *_resourceProcessingQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) unsigned long long state;
@property (weak, nonatomic) id<PHAssetExportRequestDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *variants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportRequestForAsset:(id)a0 error:(id *)a1;
+ (id)assetExportLog;
+ (id)exportRequestForAsset:(id)a0 variants:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)outputDirectory;
- (void)exportWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAsset:(id)a0 variants:(id)a1;
- (BOOL)reassembleAdjustmentsPropertyListIfNeeded:(id)a0 toOutputDirectory:(id)a1 outputURL:(id *)a2 error:(id *)a3;
- (void)setState:(unsigned long long)a0;
- (void)handleResultWithFileURLs:(id)a0 cancelled:(BOOL)a1 withError:(id)a2 forAsset:(id)a3 withOptions:(id)a4 progress:(id)a5 processingUnitCount:(long long)a6 completionHandler:(id /* block */)a7;
- (void)bundleResourcesIfNeededForAsset:(id)a0 withFileURLs:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)processResourcesAtFileURLs:(id)a0 forAsset:(id)a1 withOptions:(id)a2 progress:(id)a3 processingUnitCount:(long long)a4 completion:(id /* block */)a5;
- (id)copyFileURLsIfNeeded:(id)a0 toOutputDirectory:(id)a1 options:(id)a2 originalFilenameBase:(id)a3 error:(id *)a4;
- (void)performCompletionWithFileURLs:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)preflightExportWithOptions:(id)a0 assetAvailability:(long long *)a1 isProcessingRequired:(BOOL *)a2 fileURLs:(id *)a3 info:(id *)a4;

@end
