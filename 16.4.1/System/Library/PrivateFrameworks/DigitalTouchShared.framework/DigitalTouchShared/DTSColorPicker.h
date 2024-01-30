@class UIColor, NSArray, ETPaletteCircleView, UILongPressGestureRecognizer;
@protocol DTSColorPickerDelegate;

@interface DTSColorPicker : UIView

@property (retain, nonatomic) NSArray *paletteCircles;
@property (retain, nonatomic) ETPaletteCircleView *selectedCircle;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer;
@property (weak, nonatomic) id<DTSColorPickerDelegate> delegate;
@property (readonly, nonatomic) UIColor *selectedColor;
@property (nonatomic, getter=isDimmed) BOOL dimmed;
@property (nonatomic) unsigned long long colorCircleSize;
@property (readonly, nonatomic) double colorCircleDiameter;
@property (readonly, nonatomic) double colorCircleHorizontalSpacing;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)createPaletteCirclesWithParentView:(id)a0;
- (void)didReceiveLongPress:(id)a0;
- (void)paletteCircleTapped:(id)a0;
- (void)selectCircle:(id)a0 completion:(id /* block */)a1;
- (void)showColorWheel;

@end
