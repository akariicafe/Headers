@class NSArray, UIColor;

@interface HKElectrocardiogramWaveformView : UIView

@property (retain, nonatomic) NSArray *shapeLayers;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pathBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastPathBounds;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *lineColor;

- (void)setPaths:(id)a0;
- (void)tintColorDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createShapeLayerWithPath:(id)a0;

@end
