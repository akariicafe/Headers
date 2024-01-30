@class UIImpactFeedbackGenerator, NSArray, HUQuickControlStepperViewProfile, NSString, UIView, NSNumber, UILongPressGestureRecognizer;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlStepperView : UIView <UIGestureRecognizerDelegate, HUQuickControlInteractiveView>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSArray *segmentViews;
@property (retain, nonatomic) NSArray *separatorViews;
@property (retain, nonatomic) NSArray *separatorEffectViews;
@property (retain, nonatomic) NSNumber *selectedSegmentIndex;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer;
@property (nonatomic) struct CGPoint { double x; double y; } lastTouchLocation;
@property (nonatomic) double accumulatedTouchDistance;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (retain, nonatomic) NSNumber *trackingSegmentIndex;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (copy, nonatomic) HUQuickControlStepperViewProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUQuickControlViewInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;

- (id)initWithProfile:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)updateConstraints;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_createSegmentAndSeparatorViews;
- (void)_handleGesture:(id)a0;
- (void)_actuateTapticFeedback;
- (void)_layoutSegmentViews;
- (void)_prepareForTapticFeedback;
- (BOOL)_shouldRequireMinimumDragDistanceForGestureRecognizer:(id)a0;
- (id)_stepperViewMetricsForControlSize:(unsigned long long)a0;
- (void)_updateSegmentHighlightedState;
- (void)_updateUIForReachabilityState:(unsigned long long)a0;
- (void)_updateUserInteractionActive:(BOOL)a0 forFirstTouch:(BOOL)a1;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;

@end
