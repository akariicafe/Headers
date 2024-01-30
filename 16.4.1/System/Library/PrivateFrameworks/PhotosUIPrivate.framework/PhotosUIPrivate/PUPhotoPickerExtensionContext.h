@class NSString, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface PUPhotoPickerExtensionContext : PUPhotoPickerAbstractExtensionContext <PUPhotoPickerRemoteService, PUPhotoPickerHostService> {
    NSObject<OS_dispatch_queue> *_multipleMediaIsolationQueue;
    NSOperationQueue *_multipleMediaConversionConcurrentQueue;
}

@property (copy, nonatomic) NSString *temporaryDirectoryInHost;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *multipleMediaIsolationQueue;
@property (readonly, nonatomic) NSOperationQueue *multipleMediaConversionConcurrentQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureImageManagerLimit;

- (id)_host;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;
- (void)cancelPhotoPicker;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(id)a0;
- (void)didSelectMediaWithInfoDictionary:(id)a0;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)a0;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)a0;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)_handleMutlipleMediaCompletion:(id)a0;
- (void)_createPhotoPickerInfoDictionaryFromInfoDictionary:(id)a0 appendTo:(id)a1 completion:(id /* block */)a2;
- (id)_createSandboxTokenForPath:(id)a0;
- (id)_createSandboxTokenForURL:(id)a0;
- (void)_handleLivePhotoImageUrlFetch:(id)a0 appendTo:(id)a1 completion:(id /* block */)a2;
- (void)_handleLivePhotoVideoUrlFetch:(id)a0 appendTo:(id)a1 completion:(id /* block */)a2;
- (void)_photoPickerInfoDictionaryFromUIImagePickerControllerInfoDictionary:(id)a0 completion:(id /* block */)a1;
- (void)_saveImageURLForLivePhoto:(id)a0 fileURL:(id)a1 appendTo:(id)a2 completion:(id /* block */)a3;
- (void)_saveVideoURLForLivePhoto:(id)a0 fileURL:(id)a1 appendTo:(id)a2 completion:(id /* block */)a3;
- (void)initiatePhotoPickerSelection;
- (void)invalidatePhotoPickerHostServices;
- (void)invalidatePhotoPickerRemoteServices;
- (void)performTraitCollectionUpdateUsingData:(id)a0 completion:(id /* block */)a1;
- (void)requestedViewControllerOptionsWithCompletionHandler:(id /* block */)a0;

@end
