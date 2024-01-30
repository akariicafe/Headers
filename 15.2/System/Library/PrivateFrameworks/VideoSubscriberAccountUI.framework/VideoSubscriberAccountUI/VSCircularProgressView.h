@class UIColor, CAShapeLayer;

@interface VSCircularProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *indeterminateLayer;
@property (retain, nonatomic) CAShapeLayer *centerLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) CAShapeLayer *progressBackgroundLayer;
@property (nonatomic) double progressWidth;
@property (nonatomic) double indeterminateWidth;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (retain, nonatomic) UIColor *progressFillColor;
@property (retain, nonatomic) UIColor *progressBgColor;
@property (nonatomic) double progress;
@property (nonatomic) double centerSquareWidth;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_startIndeterminateAnimation;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)_progressPath;
- (id)_indeterminatePath;
- (void)_configureProgress:(BOOL)a0;
- (void)_addProgressLayer;
- (void)_addIndeterminateLayer;
- (void)_removeProgressLayer;
- (void)_removeIndeterminateLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_progressFrame;

@end
