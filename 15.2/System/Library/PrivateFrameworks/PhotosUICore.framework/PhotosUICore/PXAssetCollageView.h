@class UIColor, NSMutableDictionary, NSMutableIndexSet, PXRoundedCornerOverlayView, PXLayoutPerformerOutput, PXUIMediaProvider;

@interface PXAssetCollageView : UIView

@property (class, readonly) long long maximumNumberOfItems;

@property (readonly, nonatomic) NSMutableDictionary *assets;
@property (readonly, nonatomic) NSMutableDictionary *assetViews;
@property (readonly, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView;
@property (readonly, nonatomic) NSMutableIndexSet *hiddenItemIndexes;
@property (readonly, nonatomic) PXLayoutPerformerOutput *layoutOutput;
@property (readonly, nonatomic) BOOL portraitBias;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (readonly, nonatomic) long long numberOfItems;
@property (nonatomic) double spacing;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *cornerBackgroundColor;
@property (nonatomic) BOOL allowVideoPlayback;
@property (nonatomic) BOOL allowLoopPlayback;
@property (nonatomic) BOOL allowAnimatedImagePlayback;

- (void)layoutSubviews;
- (void)_updateRoundedCornerOverlayView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mediaProvider:(id)a1;
- (void)setAsset:(id)a0 forItemAtIndex:(long long)a1;
- (void)setHidden:(BOOL)a0 forItemAtIndex:(long long)a1;
- (id)displayAssetViewWithAsset:(id)a0;
- (id)displayAssetViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)resetViewState;
- (void)_updateHiddenViews;
- (id)_checkoutAndConfigureAssetViewForAsset:(id)a0 withIndex:(long long)a1;
- (void)_updateAssetViewsAnimatedContentEnabled;
- (id)_displayAssetViews;
- (id)_displayAssetViewWithIndex:(long long)a0;
- (double)_firstAssetAspectRatio;
- (void)_removeAssetView:(id)a0;
- (void)_removeAllAssetViews;

@end
