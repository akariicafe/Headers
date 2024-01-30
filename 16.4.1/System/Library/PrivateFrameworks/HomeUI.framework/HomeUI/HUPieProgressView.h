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

- (void)resetProgress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)_fadeOut;
- (void)_fadeIn;
- (void)_setDefaults;
- (id)_setupOutlineLayer;
- (id)_setupProgressLayer;
- (void)_updateLayerPaths;
- (void)_updateProgressLayerLineWidth;
- (void)startWithFuture:(id)a0;

@end
