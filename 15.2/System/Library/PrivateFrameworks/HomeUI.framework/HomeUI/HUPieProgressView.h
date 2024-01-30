@class CAShapeLayer;
@protocol HUPieProgressViewDelegate;

@interface HUPieProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *outlineLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double progress;
@property (weak, nonatomic) id<HUPieProgressViewDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) double indeterminateMaxProgress;
@property (nonatomic) double indeterminateExpectedDuration;
@property (nonatomic) double outlineLineWidth;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) BOOL hidesWhenStopped;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)resetProgress;
- (id)initWithStyle:(long long)a0;
- (void)_fadeIn;
- (void).cxx_destruct;
- (id)init;
- (void)tintColorDidChange;
- (void)_fadeOut;
- (void)_updateLayerPaths;
- (id)_setupOutlineLayer;
- (id)_setupProgressLayer;
- (void)_setDefaults;
- (void)_updateProgressLayerLineWidth;
- (void)startWithFuture:(id)a0;

@end
