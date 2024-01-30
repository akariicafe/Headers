@class UIView;

@interface MPButton : UIButton {
    unsigned char _holding : 1;
    UIView *_hitTestDebugView;
}

@property (class, readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } easyTouchDefaultHitRectInsets;

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } alignmentRectInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitRectInsets;
@property (nonatomic) double holdDelayInterval;
@property (readonly, nonatomic, getter=isHolding) BOOL holding;
@property (nonatomic) BOOL hitTestDebugEnabled;

+ (id)easyTouchButtonWithType:(long long)a0;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_delayedTriggerHold;
- (void)_handleTouchCancel;
- (void)_handleTouchDown;
- (void)_handleTouchUp;

@end
