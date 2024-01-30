@class _SUICRingLayer, UIImageView, _SUICProgressRingLayer, LAUICheckmarkLayer;

@interface SUICProgressIndicatorView : UIView {
    _SUICRingLayer *_shadowRingLayer;
    _SUICProgressRingLayer *_progressRingLayer;
    LAUICheckmarkLayer *_checkmarkLayer;
    UIImageView *_actionArrowImageView;
}

@property (nonatomic, getter=isArrowVisible) BOOL arrowVisible;
@property (nonatomic) double progressValue;
@property (nonatomic, getter=isSpinning) BOOL spinning;
@property (nonatomic, getter=isCheckmarkVisible) BOOL checkmarkVisible;
@property (nonatomic, getter=isDarkened) BOOL darkened;

- (void)layoutSublayersOfLayer:(id)a0;
- (void)setShadowColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRingLineWidth:(double)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setArrowVisible:(BOOL)a0 delay:(double)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)setCheckmarkVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setDarkened:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setProgressValue:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setRingColor:(id)a0;
- (void)setShadowLineWidth:(double)a0;

@end
