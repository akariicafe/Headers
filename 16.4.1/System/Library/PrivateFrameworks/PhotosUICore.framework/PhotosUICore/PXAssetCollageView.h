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

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateRoundedCornerOverlayView;
- (id)_checkoutAndConfigureAssetViewForAsset:(id)a0 withIndex:(long long)a1;
- (id)_displayAssetViewWithIndex:(long long)a0;
- (id)_displayAssetViews;
- (double)_firstAssetAspectRatio;
- (void)_removeAllAssetViews;
- (void)_removeAssetView:(id)a0;
- (void)_updateAssetViewsAnimatedContentEnabled;
- (void)_updateHiddenViews;
- (id)displayAssetViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)displayAssetViewWithAsset:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mediaProvider:(id)a1;
- (void)resetViewState;
- (void)setAsset:(id)a0 forItemAtIndex:(long long)a1;
- (void)setHidden:(BOOL)a0 forItemAtIndex:(long long)a1;

@end
