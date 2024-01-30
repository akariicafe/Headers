@class NSString, UIImageView, LPMusicPlayButtonStyle, LPPlayButtonShapeView, UIView, UILongPressGestureRecognizer;

@interface LPPlayButtonControl : UIControl <UIGestureRecognizerDelegate> {
    LPMusicPlayButtonStyle *_style;
    LPPlayButtonShapeView *_borderView;
    LPPlayButtonShapeView *_innerProgressView;
    LPPlayButtonShapeView *_outerProgressView;
    LPPlayButtonShapeView *_highlightView;
    UILongPressGestureRecognizer *_highlightRecognizer;
    UIView *_backgroundView;
    BOOL _showingProgress;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (nonatomic) float progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didScroll;
- (id)initWithStyle:(id)a0;
- (id)defaultBackgroundColor;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)playImage;
- (void)_highlightLongPressRecognized:(id)a0;
- (void)_createBorderView;
- (void)hideProgressAnimated:(BOOL)a0;
- (id)pauseImage;
- (void)buttonPressed:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })buttonSize;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 canPreventGestureRecognizer:(id)a1;
- (float)buttonCornerRadius;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setProgress:(float)a0 animated:(BOOL)a1;
- (void)endIndeterminateAnimation;
- (void)showPlayIndicator:(BOOL)a0;
- (void)setPlayButtonState:(unsigned long long)a0;
- (void)beginIndeterminateAnimation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_createBackgroundView;
- (void)setShowBorder:(BOOL)a0;
- (void)_createImageView;
- (void)_createHighlightView;
- (void)_createOuterProgressView;
- (void)_createInnerProgressView;
- (void)setShowOuterBorder:(BOOL)a0;
- (void)_hideTapHighlight;
- (void)_updateEnabledState;
- (void)_updateOuterProgressLayerStroke;
- (void)_showPlayIndicator:(BOOL)a0;
- (void)_toggleToPlayState;
- (id)outerBorderColor;
- (id)_createProgressIndicatorViewWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
- (void)_updateInnerProgressLayerStroke;
- (void)installRecognizersOnView:(id)a0;

@end
