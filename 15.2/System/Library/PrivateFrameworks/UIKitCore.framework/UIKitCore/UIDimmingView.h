@class NSString, NSArray, UITapGestureRecognizer, UIImageView, UIEvent, NSMutableSet, UIBarButtonItem, UIColor;
@protocol UIDimmingViewDelegate;

@interface UIDimmingView : UIView <_UIEventObserver, UIGestureRecognizerDelegate> {
    UIBarButtonItem *_highlightedBarButtonItem;
    UIImageView *_highlightedImageView;
    UIImageView *_backgroundGlow;
    BOOL _inPassthroughHitTest;
    UITapGestureRecognizer *_singleFingerTapRecognizer;
    UIEvent *_observedEventForAdditionalGestures;
    NSMutableSet *_additionalEventGestureRecognizers;
}

@property (weak, nonatomic) id<UIDimmingViewDelegate> delegate;
@property (retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (nonatomic) BOOL ignoresTouches;
@property (readonly, nonatomic) BOOL displayed;
@property (nonatomic) double percentDisplayed;
@property (nonatomic) double percentLightened;
@property (retain, nonatomic) UIColor *dimmingColor;
@property (nonatomic) BOOL suppressesBackdrops;
@property (copy, nonatomic) NSArray *lowerWindowDismissalGestureViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDimmingColor;

- (void)display:(BOOL)a0 withAnimationDuration:(double)a1 afterDelay:(double)a2;
- (void)_simulateTap;
- (void)dimmingRemovalAnimationDidStop;
- (void)_clearAdditionalEventGestures;
- (void)updateBackgroundColor;
- (BOOL)isTransparentFocusItem;
- (void)mouseUp:(struct __GSEvent { } *)a0;
- (void)display:(BOOL)a0;
- (void)_sendDelegateDimmingViewWasTapped;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 forEvent:(struct __GSEvent { } *)a1;
- (void)_queueAdditionalEventGesturesFromView:(id)a0;
- (id)_gestureRecognizersForEvent:(id)a0;
- (void)handleSingleTap:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (int)textEffectsVisibilityLevel;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)_backdropViewsToAnimate;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;

@end
