@class NSError, UIView, UIImage, NSArray, NSString, PXUIMediaProvider, PXImageRequester, PXReusableObjectPool, PXRoundProgressView, PXLoadingFailureBadgeView;
@protocol PXDisplayAsset;

@interface PXDisplayAssetUIView : UIView <PXReusableObject, PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
}

@property (class, readonly, nonatomic) PXReusableObjectPool *viewPool;

@property (retain, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (retain, nonatomic) PXRoundProgressView *progressView;
@property (retain, nonatomic) PXLoadingFailureBadgeView *failureView;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) double imageProgress;
@property (readonly, nonatomic) double loadingProgress;
@property (readonly, nonatomic) long long playbackStyle;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider;
@property (copy, nonatomic) NSArray *placeholderImageFilters;
@property (nonatomic) double placeholderTransitionDuration;
@property (nonatomic) BOOL displayLoadingIndicator;
@property (nonatomic) BOOL isDisplayingFullQualityContent;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentContentsRect;
@property (readonly, nonatomic) UIImage *currentImage;
@property (nonatomic, getter=isAnimatedContentEnabled) BOOL animatedContentEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)checkOutViewForAsset:(id)a0;
+ (void)checkInView:(id)a0;
+ (id)checkOutViewForAsset:(id)a0 withPlaybackStyle:(long long)a1;

- (void)updateContent;
- (void).cxx_destruct;
- (void)setContentMode:(long long)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)prepareForReuse;
- (void)_updateIfNeeded;
- (void)didMoveToWindow;
- (void)becomeReusable;
- (void)layoutSubviews;
- (void)_updateTargetSize;
- (void)imageProgressDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)contentsRectDidChange;
- (void)isDisplayingFullQualityContentDidChange;
- (void)invalidateLoadingProgress;
- (void)setNeedsUpdateContent;
- (void)setImageProgress:(double)a0;
- (void)animatedContentEnabledDidChange;
- (void)contentModeDidChange;
- (void)placeholderTransitionDurationDidChange;
- (void)_updateProgressView;
- (void)_updateFailureView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_loadContentView;
- (void)imageDidChange;

@end
