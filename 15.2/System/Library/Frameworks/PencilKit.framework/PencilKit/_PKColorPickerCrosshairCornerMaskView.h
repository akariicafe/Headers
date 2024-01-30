@interface _PKColorPickerCrosshairCornerMaskView : UIView

@property (nonatomic) unsigned long long cornerPosition;
@property (nonatomic) BOOL excludeCorner;

+ (Class)layerClass;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)maskPath;
- (void)_setPath:(id)a0;
- (id)_shapeLayer;
- (void)_setFillColor:(id)a0;

@end
