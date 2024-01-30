@class UIView, NSString, UIImageView, CAShapeLayer, LPAudioPlayButtonTheme, LPAudioPlayButtonStyle, UILongPressGestureRecognizer;

@interface LPPlayButtonControl : UIControl <UIGestureRecognizerDelegate, LPComponentMediaPlayable> {
    LPAudioPlayButtonStyle *_style;
    LPAudioPlayButtonTheme *_theme;
    CAShapeLayer *_borderLayer;
    CAShapeLayer *_innerProgressLayer;
    CAShapeLayer *_outerProgressLayer;
    CAShapeLayer *_highlightLayer;
    UILongPressGestureRecognizer *_highlightRecognizer;
    UIView *_backgroundView;
    BOOL _showingProgress;
    BOOL _isPlaying;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (nonatomic) float progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_createBackgroundView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })buttonSize;
- (BOOL)isFlipped;
- (id)defaultBackgroundColor;
- (id)playable;
- (void).cxx_destruct;
- (void)hideProgressAnimated:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 canPreventGestureRecognizer:(id)a1;
- (void)_didScroll;
- (void)_highlightLongPressRecognized:(id)a0;
- (float)buttonCornerRadius;
- (void)_createBorderView;
- (void)buttonPressed:(id)a0;
- (id)playImage;
- (void)setProgress:(float)a0 animated:(BOOL)a1;
- (id)initWithStyle:(id)a0 theme:(id)a1;
- (void)endIndeterminateAnimation;
- (void)showPlayIndicator:(BOOL)a0;
- (void)setPlayButtonState:(unsigned long long)a0;
- (void)beginIndeterminateAnimation;
- (id)outerBorderColor;
- (void)_createImageView;
- (void)_createOuterProgressView;
- (void)_createInnerProgressView;
- (void)_createHighlightLayer;
- (void)setShowOuterBorder:(BOOL)a0;
- (void)setShowBorder:(BOOL)a0;
- (void)layoutPlayButton;
- (void)_hideTapHighlight;
- (void)_updateEnabledState;
- (void)_updateOuterProgressLayerStroke;
- (void)_showPlayIndicator:(BOOL)a0;
- (void)_toggleToPlayState;
- (id)_createProgressIndicatorLayerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
- (void)_updateInnerProgressLayerStroke;
- (id)pauseImage;
- (void)installRecognizersOnView:(id)a0;

@end
