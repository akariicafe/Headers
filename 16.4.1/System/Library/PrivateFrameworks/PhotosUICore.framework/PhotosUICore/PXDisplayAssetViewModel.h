@class PXUpdater, NSArray, UIImage, NSError;
@protocol PXDisplayAsset;

@interface PXDisplayAssetViewModel : PXObservable <PXMutableDisplayAssetViewModel>

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) double assetAspectRatio;
@property (readonly, nonatomic) long long contentMode;
@property (readonly, nonatomic) BOOL wantsLivePhotoPlayback;
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentSafeAreaInsets;
@property (readonly, nonatomic) BOOL isDisplayingFullQualityContent;
@property (readonly, nonatomic) BOOL allowsTextSelection;
@property (readonly, nonatomic) NSArray *stringsToHighlight;
@property (readonly, nonatomic) float loadingProgress;
@property (readonly, nonatomic) NSError *loadingError;

- (void)setLoadingProgress:(float)a0;
- (void)performChanges:(id /* block */)a0;
- (void)didPerformChanges;
- (void)setAsset:(id)a0;
- (void)setContentMode:(long long)a0;
- (void)_setNeedsUpdate;
- (id)init;
- (void)setAllowsTextSelection:(BOOL)a0;
- (void).cxx_destruct;
- (void)setPlaybackStyle:(long long)a0;
- (void)_invalidateAssetAspectRatio;
- (void)_updateAssetAspectRatio;
- (void)setAssetAspectRatio:(double)a0;
- (void)setContentSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setCurrentImage:(id)a0;
- (void)setIsDisplayingFullQualityContent:(BOOL)a0;
- (void)setLoadingError:(id)a0;
- (void)setStringsToHighlight:(id)a0;
- (void)setWantsLivePhotoPlayback:(BOOL)a0;

@end
