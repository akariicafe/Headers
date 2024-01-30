@class UIColor, CAShapeLayer;

@interface PUPhotoEditCircularIndicatorView : UIView

@property (retain, nonatomic) CAShapeLayer *backgroundLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (nonatomic) double thickness;
@property (nonatomic) double currentValue;
@property (retain, nonatomic) UIColor *ringColor;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;

- (void)_setupLayers;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetToDefaults;
- (void).cxx_destruct;
- (void)_layoutSubLayers;
- (void)_updateProgressLayer;

@end
