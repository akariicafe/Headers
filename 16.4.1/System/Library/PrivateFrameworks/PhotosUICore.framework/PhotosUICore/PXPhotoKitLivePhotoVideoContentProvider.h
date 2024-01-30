@class NSString, NSOperationQueue, PXVideoStabilizeOperation, PXPhotoKitLivePhotoVideoContentProviderSpec;

@interface PXPhotoKitLivePhotoVideoContentProvider : PXPhotoKitVideoContentProvider <PXSettingsKeyObserver> {
    PXPhotoKitLivePhotoVideoContentProviderSpec *_spec;
    long long _assetPlaybackStyle;
    PXVideoStabilizeOperation *_stabilizeOperation;
}

@property (class, readonly, nonatomic) NSOperationQueue *postProcessingOperationQueue;

@property (readonly, nonatomic) PXPhotoKitLivePhotoVideoContentProviderSpec *spec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelLoading;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;
- (void)_handleStabilizeOperationFinishedWithProcessingCompletionHandler:(id /* block */)a0;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 deliveryStrategies:(id)a2 audioSession:(id)a3 requestURLOnly:(BOOL)a4;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 deliveryStrategies:(id)a2 audioSession:(id)a3 spec:(id)a4;
- (BOOL)needsPostprocessing;
- (void)postprocessPlayerItem:(id)a0 completionHandler:(id /* block */)a1;

@end
