@class PICompositionController, PXPhotoKitEditSourceLoader, PHImageManager, NSError, NSObject, PLEditSource;
@protocol OS_dispatch_queue, PXPhotoKitAdjustedDisplayAsset;

@interface _PXPhotoKitAdjustedUIMediaRequest : NSObject {
    PXPhotoKitEditSourceLoader *_editSourceLoader;
}

@property (readonly, nonatomic) id<PXPhotoKitAdjustedDisplayAsset> asset;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue;
@property (readonly, nonatomic) PHImageManager *imageManager;
@property (retain, nonatomic) PLEditSource *editSource;
@property (retain, nonatomic) NSError *loadError;
@property (retain, nonatomic) PICompositionController *baseCompositionController;
@property (nonatomic) double progress;
@property (nonatomic) BOOL delayRenders;
@property (nonatomic) BOOL useCachedRenders;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)editSourceDidChange;
- (void)progressDidChange;
- (void)beginLoadingEditSource;
- (id)initWithAsset:(id)a0 renderQueue:(id)a1 imageManager:(id)a2;
- (void)_handleEditSourceLoadingFinished;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
