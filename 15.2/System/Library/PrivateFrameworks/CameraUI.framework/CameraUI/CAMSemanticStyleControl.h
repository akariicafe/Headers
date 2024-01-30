@class CEKEdgeGradientView, CAMSemanticStyleSlider, CAMSemanticStyle, NSString, UILabel, UIView, UIButton;

@interface CAMSemanticStyleControl : UIControl <UIGestureRecognizerDelegate, CAMSemanticStyleSliderDelegate>

@property (readonly, nonatomic) CAMSemanticStyleSlider *_toneSlider;
@property (readonly, nonatomic) CAMSemanticStyleSlider *_warmthSlider;
@property (readonly, nonatomic) UILabel *_descriptionLabel;
@property (readonly, nonatomic) UIButton *_resetButton;
@property (readonly, nonatomic) UIView *_gradientContainer;
@property (readonly, nonatomic) CEKEdgeGradientView *_edgeGradients;
@property (retain, nonatomic) CAMSemanticStyle *semanticStyle;
@property (nonatomic) struct { double startInset; double endInset; } gradientInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSemanticStyle:(id)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)_handleSliderDidChangeValue:(id)a0;
- (void)sliderWillExpand:(id)a0;
- (void)sliderWillCollapse:(id)a0;
- (void)_handleResetButtonReleased:(id)a0;
- (void)_updateResetButtonImage;
- (void)_updateSubviewsVisibilityWithDuration:(double)a0 delay:(double)a1;
- (void)_handleResetMenuItem:(id)a0;

@end
