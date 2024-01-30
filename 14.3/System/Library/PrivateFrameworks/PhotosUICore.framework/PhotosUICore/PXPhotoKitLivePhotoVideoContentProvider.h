@class NSString, NSOperationQueue, PXVideoStabilizeOperation, PXPhotoKitLivePhotoVideoContentProviderSpec;

@interface PXPhotoKitLivePhotoVideoContentProvider : PXPhotoKitVideoContentProvider <PXSettingsKeyObserver> {
    PXVideoStabilizeOperation *_stabilizeOperation;
    NSString *_contentIdentifier;
}

@property (class, readonly, nonatomic) NSOperationQueue *postProcessingOperationQueue;

@property (readonly, nonatomic) PXPhotoKitLivePhotoVideoContentProviderSpec *spec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelLoading;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1;
- (id)contentIdentifier;
- (BOOL)needsPostprocessing;
- (void)postprocessPlayerItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 spec:(id)a2;
- (void)_handleStabilizeOperationFinishedWithProcessingCompletionHandler:(id /* block */)a0;

@end
