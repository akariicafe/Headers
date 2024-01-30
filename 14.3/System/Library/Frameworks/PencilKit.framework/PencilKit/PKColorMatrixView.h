@class NSArray, UIColor, NSString;
@protocol _PKColorPickerImplementationDelegate;

@interface PKColorMatrixView : UIView <PKColorPickerCrosshairViewDelegate, _PKColorPickerImplementation>

@property (retain, nonatomic) NSArray *colorMatrix;
@property (retain, nonatomic) NSArray *darkColorMatrix;
@property (retain, nonatomic) NSArray *colorButtons;
@property (retain, nonatomic) UIColor *selectedColor;
@property (weak, nonatomic) id<_PKColorPickerImplementationDelegate> colorPickerDelegate;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultColorMatrix;
+ (id)flippedColorMatrix:(id)a0;
+ (id)_representableColorForColor:(id)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didTapColorButton:(id)a0;
- (id)_pointFromButton:(id)a0;
- (id)_colorForPoint:(id)a0;
- (id)uiColorMatrix;
- (long long)_uiColorUserInterfaceStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForViewWithPoint:(id)a0;
- (id)_pointForColor:(id)a0;
- (id)_boundedPointForPoint:(id)a0;
- (id)_pointForCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForColorPickerCrosshairView:(id)a0;
- (id)colorForColorPickerCrosshairView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned long long)cornerPositionForColorPickerCrosshairView:(id)a0;
- (void)colorPickerCrosshairViewShouldUpdateColor:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)colorPickerCrosshairViewShouldUpdateWithColor:(id)a0;
- (id)representableColorForColor:(id)a0;

@end
