@class UIColor, NSArray, NSString, UIImageView, UITapGestureRecognizer, UIBarButtonItem;
@protocol UIDimmingViewDelegate;

@interface UIDimmingView : UIView <UIGestureRecognizerDelegate> {
    UIBarButtonItem *_highlightedBarButtonItem;
    UIImageView *_highlightedImageView;
    UIImageView *_backgroundGlow;
    BOOL _inPassthroughHitTest;
    UITapGestureRecognizer *_singleFingerTapRecognizer;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDimmingColor;

- (int)textEffectsVisibilityLevel;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 forEvent:(struct __GSEvent { } *)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)display:(BOOL)a0 withAnimationDuration:(double)a1 afterDelay:(double)a2;
- (id)_backdropViewsToAnimate;
- (void)display:(BOOL)a0;
- (void)mouseUp:(struct __GSEvent { } *)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dimmingRemovalAnimationDidStop;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_sendDelegateDimmingViewWasTapped;
- (void)updateBackgroundColor;
- (void)handleSingleTap:(id)a0;
- (void)_simulateTap;
- (void)traitCollectionDidChange:(id)a0;

@end
