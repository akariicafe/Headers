@class NSMutableDictionary, NSString, UIImageView, CAShapeLayer, UIView, NSMutableArray, UIButton;
@protocol CKQuickSaveButtonDelegate, CKQuickSaveButtonAnimationDelegate;

@interface CKQuickSaveButton : UIView

@property (nonatomic) unsigned long long state;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (readonly, nonatomic) UIButton *button;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) NSString *currentAnimationIdentifier;
@property (retain, nonatomic) NSMutableArray *deferredAnimationIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *deferredConfigurationStates;
@property (weak, nonatomic) id<CKQuickSaveButtonDelegate> delegate;
@property (weak, nonatomic) id<CKQuickSaveButtonAnimationDelegate> animationDelegate;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setState:(unsigned long long)a0 animated:(BOOL)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithInitialState:(unsigned long long)a0;
- (void)_buttonTouchUpInside;
- (void)_buttonTouchDown;
- (void)_buttonTouchCanceled;
- (void)configureForState:(unsigned long long)a0 animated:(BOOL)a1 identifier:(id)a2 wasDeferred:(BOOL)a3;
- (id)_imageForState:(unsigned long long)a0;
- (void)updateImageViewFrameForContentEdgeInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentEdgeInsetsForState:(unsigned long long)a0;

@end
