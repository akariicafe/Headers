@class UIView;
@protocol SUScalingFlipViewDelegate;

@interface SUScalingFlipView : UIView {
    UIView *_backView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fromFrame;
    UIView *_frontView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toFrame;
}

@property (nonatomic) id<SUScalingFlipViewDelegate> delegate;
@property (nonatomic) long long direction;
@property (nonatomic) double duration;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (id)_backLayerAnimation;
- (id)_frontLayerAnimation;
- (id)_inputColorAnimation;
- (id)_positionAnimation;
- (id)initWithFrontView:(id)a0 backView:(id)a1;
- (id)_fixedAnimationForAnimation:(id)a0;
- (id)_transformAnimationWithStart:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0 middle:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1 end:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a2;
- (void)performFlip;

@end
