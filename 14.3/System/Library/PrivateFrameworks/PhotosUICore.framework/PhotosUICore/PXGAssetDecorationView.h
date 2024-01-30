@class PXGAssetDecorationViewConfiguration, PXUpdater, PXRoundProgressView;

@interface PXGAssetDecorationView : UIView <PXGReusableView> {
    PXUpdater *_updater;
    PXRoundProgressView *_progressIndicatorView;
}

@property (copy, nonatomic) PXGAssetDecorationViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;

+ (BOOL)wantsDecorationViewForConfiguration:(id)a0;
+ (BOOL)_wantsProgressIndicatorForConfiguration:(id)a0;

- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)prepareForReuse;
- (void)_invalidateProgressIndicator;
- (void)_updateProgressIndicator;
- (void)becomeReusable;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
