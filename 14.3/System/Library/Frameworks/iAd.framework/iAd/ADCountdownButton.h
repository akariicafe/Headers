@class UIImageView, UIImage, UIView, CAShapeLayer;

@interface ADCountdownButton : UIControl

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *dimmedIconImage;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *outlineView;
@property (retain, nonatomic) CAShapeLayer *outlineProgressLayer;
@property (nonatomic) BOOL dimmed;

+ (id)_closeBoxImage;
+ (id)_inactiveCloseBoxImage;

- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)startEnablingButtonWithCountdownDuration:(double)a0 completionHandler:(id /* block */)a1;
- (void)setCountdownProgress:(double)a0;
- (void)setDimmed:(BOOL)a0 animated:(BOOL)a1;
- (double)countdownProgress;

@end
