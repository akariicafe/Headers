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
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updatePaths;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)transitionToState:(long long)a0 animated:(BOOL)a1;
- (void)tintColorDidChange;
- (void)reset;
- (void)popCompletedCheckmark;
- (void)popCompletedCheckmarkWithHaptic:(BOOL)a0;
- (void)transitionRunningLayerToVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)transitionWaitingLayerToVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)beginBubbleGlyphAnimation;
- (void)stopBubbleGlyphAnimation;
- (void)transitionCompletedLayerToVisible:(BOOL)a0 animated:(BOOL)a1 haptic:(BOOL)a2;

@end
