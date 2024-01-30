@class NSString, NSMutableSet, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PHAAssetResourceDataLoader : NSObject <PHAAssetResourceDataLoading> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_activeDownloads;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataLoaderWithDefaultConfigurationForPhotoLibrary:(id)a0;

- (void)cancelAllDownloads;
- (id)init;
- (void).cxx_destruct;
- (void)_inq_cancelAllDownloads;
- (void)requestDataForAssetResource:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_inq_downloadAssetResource:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)_firstLocallyAvailableAssetResourceFromAssetResources:(id)a0;
- (id)assetResourceFromAcceptableAssetResources:(id)a0 options:(id)a1;
- (id)_localFileURLForAssetResource:(id)a0 error:(id *)a1;

@end
