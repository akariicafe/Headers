@protocol CAMControlDrawerExpandableButtonDelegate;

@interface CAMControlDrawerCustomButton : CAMControlDrawerButton <CAMControlDrawerExpandableButton>

@property (nonatomic, getter=_isTouchInTrackedView, setter=_setTouchInTrackedView:) BOOL _touchInTrackedView;
@property (readonly, nonatomic, getter=isSelfExpanding) BOOL selfExpanding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expansionInsets;
@property (weak, nonatomic) id<CAMControlDrawerExpandableButtonDelegate> delegate;
@property (nonatomic, getter=isExpanded) BOOL expanded;

- (void)selectedByAccessibilityHUDManager:(id)a0;
- (void)layoutSubviews;
- (BOOL)isExpandable;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldAccessibilityGestureBeginForHUDManager:(id)a0;
- (void)_setExpanded:(BOOL)a0 animated:(BOOL)a1 shouldNotify:(BOOL)a2;
- (BOOL)_shouldTrackView:(id)a0 forTouchAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateHighlightedView;
- (BOOL)_shouldRejectAccessibilityGestureForHUDManager:(id)a0;

@end
