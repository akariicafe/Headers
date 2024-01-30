@class UISelectionFeedbackGenerator, UIImageView, CAShapeLayer, CALayer, _UIEdgeFeedbackGenerator;
@protocol AVTColorSliderDelegate;

@interface AVTColorSlider : UISlider

@property (retain, nonatomic) CALayer *trackLayer;
@property (retain, nonatomic) CAShapeLayer *thumbClippingLayer;
@property (retain, nonatomic) CALayer *thumbContentLayer;
@property (retain, nonatomic) CALayer *thumbSoftShadowLayer;
@property (retain, nonatomic) CAShapeLayer *thumbBorderLayer;
@property (retain, nonatomic) UIImageView *thumbView;
@property (retain, nonatomic) _UIEdgeFeedbackGenerator *edgeFeedbackGenerator;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (nonatomic) BOOL shouldTriggerFeedback;
@property (nonatomic) long long layoutDirection;
@property (readonly, nonatomic) CALayer *thumbLayer;
@property (weak, nonatomic) id<AVTColorSliderDelegate> delegate;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createThumbView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (id)currentMinimumTrackImage;
- (void)layoutSubviews;
- (id)currentMaximumTrackImage;
- (void).cxx_destruct;
- (struct CGColor { } *)trackBorderColor;
- (void)valueDidChange:(id)a0 forEvent:(id)a1;
- (id)initWithUserInterfaceLayoutDirection:(long long)a0;
- (void)relayoutSublayers;
- (void)removeTrackLayer:(id)a0 animated:(BOOL)a1;
- (void)setTrackLayer:(id)a0 animated:(BOOL)a1;

@end
