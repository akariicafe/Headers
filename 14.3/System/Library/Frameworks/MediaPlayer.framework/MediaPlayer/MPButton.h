@class UIView;

@interface MPButton : UIButton {
    unsigned char _holding : 1;
    UIView *_hitTestDebugView;
}

@property (class, readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } easyTouchDefaultHitRectInsets;
@property (class, readonly, nonatomic) double easyTouchDefaultCharge;

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } alignmentRectInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitRectInsets;
@property (nonatomic) double holdDelayInterval;
@property (readonly, nonatomic, getter=isHolding) BOOL holding;
@property (nonatomic) BOOL hitTestDebugEnabled;

+ (id)easyTouchButtonWithType:(long long)a0;

- (void)cancelTrackingWithEvent:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)_handleTouchDown;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)_delayedTriggerHold;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_handleTouchCancel;
- (void)_handleTouchUp;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;

@end
