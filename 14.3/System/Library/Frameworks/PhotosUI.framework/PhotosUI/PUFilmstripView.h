@class PUFilmstripMediaProvider, NSString, UIImage, PUFilmstripDataSource, NSArray, PUTileViewAnimator, NSObject, AVVideoComposition, PUTilingView, AVAsset;
@protocol OS_dispatch_queue;

@interface PUFilmstripView : UIView <PXLivePhotoTrimScrubberFilmStripView, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, UIScrollViewDelegate, PHVideoScrubberFilmstripView> {
    BOOL _needsUpdateThumbnailAspectRatio;
    BOOL _needsUpdateDataSource;
    BOOL _needsUpdateLayout;
    BOOL _needsUpdateGeneratedPlaceholder;
    NSObject<OS_dispatch_queue> *_placeholderGenerationQueue;
    PUTileViewAnimator *_animator;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleRect;
@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) BOOL useContentAspectRatio;
@property (weak, nonatomic) id thumbnailUpdatingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PUTilingView *_tilingView;
@property (retain, nonatomic, setter=_setMediaProvider:) PUFilmstripMediaProvider *_mediaProvider;
@property (retain, nonatomic, setter=_setDataSource:) PUFilmstripDataSource *_dataSource;
@property (nonatomic, setter=_setThumbnailAspectRatio:) double _thumbnailAspectRatio;
@property (retain, nonatomic) UIImage *generatedPlaceholderImage;
@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) AVVideoComposition *videoComposition;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) BOOL generatesPlaceholderImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (copy, nonatomic) NSArray *indicatorInfos;
@property (nonatomic) BOOL useContentAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateDataSource;
- (void)setAsset:(id)a0;
- (void).cxx_destruct;
- (id)tilingView:(id)a0 tileTransitionCoordinatorForTransitionFromLayout:(id)a1 toLayout:(id)a2 withContext:(id)a3;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)reloadThumbnails;
- (void)_releaseAVObjects;
- (void)_invalidateThumbnailAspectRatio;
- (void)_updateThumbnailAspectRatioIfNeeded;
- (void)_invalidateMediaProvider;
- (BOOL)_isMediaProviderValid;
- (void)_updateDataSourceIfNeeded;
- (void)_updateMediaProviderPlaceholderImage;
- (void)_invalidateGeneratedPlaceholderImage;
- (void)_updateGeneratedPlaceholderImageIfNeeded;
- (id)_filmstripLayout;
- (id)tilingView:(id)a0 tileControllerWithIndexPath:(id)a1 kind:(id)a2 dataSource:(id)a3;
- (void)setLivePhotoTrimScrubberThumbnail:(id)a0;
- (void)layoutSubviews;
- (void)_updateLayoutIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tilingView:(id)a0 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 duration:(double)a3;
- (id)tilingView:(id)a0 dataSourceConverterForTransitionFromLayout:(id)a1 toLayout:(id)a2;
- (void)setAsset:(id)a0 videoComposition:(id)a1;
- (void)_invalidateLayout;

@end
