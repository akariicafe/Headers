@class UIColor, CAShapeLayer, UIImageView, CALayer, UIImpactFeedbackGenerator;

@interface WFWorkflowProgressView : UIControl

@property (retain, nonatomic) UIColor *resolvedTintColor;
@property (nonatomic) long long currentState;
@property (readonly, nonatomic) CALayer *runningContainerLayer;
@property (readonly, nonatomic) CAShapeLayer *totalRingLayer;
@property (readonly, nonatomic) CAShapeLayer *partialRingLayer;
@property (readonly, nonatomic) CAShapeLayer *stopGlyphLayer;
@property (readonly, nonatomic) CAShapeLayer *waitingContainerLayer;
@property (readonly, nonatomic) CAShapeLayer *bubbleGlyphLayer;
@property (readonly, nonatomic) UIImageView *completedContainerView;
@property (readonly, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) double fractionCompleted;
@property (nonatomic) double stopSize;
@property (nonatomic) double progressStrokeWidth;

- (void)transitionToState:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)updatePaths;
- (void)beginBubbleGlyphAnimation;
- (void)popCompletedCheckmark;
- (void)popCompletedCheckmarkWithHaptic:(BOOL)a0;
- (void)stopBubbleGlyphAnimation;
- (void)transitionCompletedLayerToVisible:(BOOL)a0 animated:(BOOL)a1 haptic:(BOOL)a2;
- (void)transitionRunningLayerToVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)transitionToState:(long long)a0 animated:(BOOL)a1;
- (void)transitionWaitingLayerToVisible:(BOOL)a0 animated:(BOOL)a1;

@end
