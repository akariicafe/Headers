@class NSMutableDictionary, NSString, UIImageView, CAShapeLayer, UIView, NSMutableArray, UIButton;
@protocol CKQuickActionButtonDelegate, CKQuickActionButtonAnimationDelegate;

@interface CKQuickActionButton : UIView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (readonly, nonatomic) UIButton *button;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) NSString *currentAnimationIdentifier;
@property (retain, nonatomic) NSMutableArray *deferredAnimationIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *deferredConfigurationStates;
@property (weak, nonatomic) id<CKQuickActionButtonDelegate> delegate;
@property (weak, nonatomic) id<CKQuickActionButtonAnimationDelegate> animationDelegate;
@property (nonatomic) unsigned long long state;
@property (nonatomic, getter=isAnimating) BOOL animating;

- (void)setState:(unsigned long long)a0 animated:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithInitialState:(unsigned long long)a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_buttonTouchCanceled;
- (void)_buttonTouchDown;
- (void)_buttonTouchUpInside;
- (double)animationDurationForState:(unsigned long long)a0;
- (id)buttonImageForState:(unsigned long long)a0;
- (void)configureForState:(unsigned long long)a0 animated:(BOOL)a1 identifier:(id)a2 wasDeferred:(BOOL)a3;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsetsForState:(unsigned long long)a0;
- (double)delayForFinalizingAnimation;
- (double)delayForImageSwapAnimation;
- (void)updateImageViewFrameForContentEdgeInsets;

@end
