@class UIColor, NSString, UIImageView, UIView, CALayer, NSObject;
@protocol OS_dispatch_source;

@interface LAUIRadialPingView : UIView {
    UIColor *_color;
    UIView *_container;
    UIView *_primary;
    struct array<(anonymous namespace)::blur_container, 2> { struct blur_container { UIImageView *view; struct periodic_animation_state { BOOL enabled; NSString *_key; CALayer *_layer; NSObject<OS_dispatch_source> *_removal_timer; } pulse; } __elems_[2]; } _blurs;
    struct periodic_animation_state { BOOL enabled; NSString *_key; CALayer *_layer; NSObject<OS_dispatch_source> *_removal_timer; } _pulse;
    BOOL _animating_dirty;
    unsigned char _animating_counter;
}

@property (nonatomic, getter=isAnimating) BOOL animating;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateViewsWithColor;
- (void)_updateAnimatingAnimated:(BOOL)a0;
- (void)_updateExpandForBlurAtIndex:(unsigned long long)a0 withDelay:(double)a1;
- (void)_startExpandWithDelay:(double)a0;
- (void)_endExpand;
- (void)_attachPulseAnimationWithDelay:(double)a0;
- (void)_attachExpandAnimationToContainer:(struct blur_container { id x0; struct periodic_animation_state { BOOL x0; id x1; id x2; id x3; } x1; } *)a0 withDelay:(double)a1;
- (void)_setPulse:(BOOL)a0 withDelay:(double)a1;
- (void)_setExpand:(BOOL)a0 forBlurAtIndex:(unsigned long long)a1 withDelay:(double)a2;

@end
