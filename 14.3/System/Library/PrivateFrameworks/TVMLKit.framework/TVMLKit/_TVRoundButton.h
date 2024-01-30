@class CALayer;

@interface _TVRoundButton : TVButton {
    CALayer *_imageMask;
    id /* block */ _updateFloatingViewFocusStateBlock;
}

@property (nonatomic) BOOL shouldPunchThroughImage;

+ (id)_buttonContentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blurEffectStyle:(long long)a1 blurEnabled:(BOOL)a2;

- (void)setAccessoryView:(id)a0;
- (void)setImageView:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setCornerRadius:(double)a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setTextContentView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blurEffectStyle:(long long)a1 blurEnabled:(BOOL)a2;
- (void)_updateBackgroundColorForState:(unsigned long long)a0;
- (void)_updateFocusStateWithCoordinator:(id)a0;
- (void)_updateFloaingViewFocusState:(BOOL)a0 coordinator:(id)a1;
- (void)_imageViewDidLoadImage:(id)a0;
- (void)_updateFloatingViewFocusStateIfNeeded;
- (void)_updateImageMask;

@end
