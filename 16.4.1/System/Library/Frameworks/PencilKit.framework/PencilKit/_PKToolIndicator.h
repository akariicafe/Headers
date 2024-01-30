@class UIButton, PKInk;
@protocol _PKToolIndicatorDelegate, PKInkToolButton;

@interface _PKToolIndicator : UIView

@property (retain, nonatomic) UIButton<PKInkToolButton> *toolButton;
@property (nonatomic) unsigned long long animationState;
@property (weak, nonatomic) id<_PKToolIndicatorDelegate> delegate;
@property (nonatomic) BOOL isEmbossed;
@property (nonatomic) BOOL isUsedOnDarkBackground;
@property (nonatomic) unsigned long long sizeState;
@property (nonatomic) unsigned long long attributeSet;
@property (retain, nonatomic) PKInk *ink;

+ (void)_animationWithSetup:(id /* block */)a0 animationBlock:(id /* block */)a1 completion:(id /* block */)a2 animated:(BOOL)a3;
+ (id)_defaultAnimator;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_toolButtonView;
- (void)_switchToInkAnimation:(id)a0 animated:(BOOL)a1;
- (id)_createToolButtonForInk:(id)a0;
- (void)_dismissInkAnimation:(id)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForHiddenToolButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForVisibleToolButton;
- (void)_presentInkAnimation:(id)a0 animated:(BOOL)a1;
- (void)_setupToolButton:(id)a0 forInk:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_toolIndicatorCenteringRect;
- (void)setAnimationState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setInk:(id)a0 animated:(BOOL)a1;

@end
