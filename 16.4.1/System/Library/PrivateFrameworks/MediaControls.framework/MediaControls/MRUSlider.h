@class NSString, MRUVisualStylingProvider, UIImpactFeedbackGenerator, UIView;

@interface MRUSlider : UIControl <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIView *clipView;
@property (retain, nonatomic) UIView *minTrack;
@property (retain, nonatomic) UIView *maxTrack;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) float trackingStartNormalizedValue;
@property (nonatomic) double trackingTouchStartNormalized;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitRectInset;
@property (nonatomic) double animationHeight;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic, getter=isEqualizing) BOOL equalizing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentPosition;
- (void)setTracking:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (void)updateVisualStyling;
- (double)locationForTouch:(id)a0;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateVisibility;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (double)valueForTouch:(id)a0;

@end
