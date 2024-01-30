@class _UIPreviewPresentationEffectView, UIView;

@interface _UIPreviewPresentationContainerView : UIView

@property (retain, nonatomic) _UIPreviewPresentationEffectView *platterClippingView;
@property (retain, nonatomic) UIView *platterShadowView;
@property (retain, nonatomic) UIView *contentTransformView;
@property (retain, nonatomic) _UIPreviewPresentationEffectView *platterView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (nonatomic) double blurRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL shouldRasterizeForTransition;
@property (nonatomic) BOOL shouldLayoutForCommitPhase;

- (void)layoutSubviews;
- (void)setBlurRadius:(double)a0;
- (double)blurRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initPlatterViewsIfNeeded;
- (struct CGSize { double x0; double x1; })_standardPreferredContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_preferredPlatterRectForContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setShouldRasterizeForTransition:(BOOL)a0;
- (BOOL)shouldRasterizeForTransition;
- (BOOL)_shouldEnclosedScrollViewFlashIndicators:(id)a0;

@end
