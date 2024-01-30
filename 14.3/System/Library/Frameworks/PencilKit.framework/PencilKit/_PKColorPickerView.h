@class UIColor, PKColorPickerCrosshairView, PKColorMatrixView, NSString, UIPanGestureRecognizer;
@protocol _PKColorPickerViewDelegate;

@interface _PKColorPickerView : UIView <_PKColorPickerImplementationDelegate>

@property (weak, nonatomic) id<_PKColorPickerViewDelegate> delegate;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIColor *initialColor;
@property (retain, nonatomic) UIPanGestureRecognizer *crosshairPanGR;
@property (retain, nonatomic) PKColorPickerCrosshairView *crosshairView;
@property (retain, nonatomic) PKColorMatrixView *gridColorPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)colorPickerImplementationDidChangeSelectedColor:(id)a0;
- (void)colorPickerImplementationUserDidTouchUpInside:(id)a0;
- (void)didPanCrosshair:(id)a0;
- (void)_setSelectedColorForPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)pointIsSignificantlyOutside:(struct CGPoint { double x0; double x1; })a0;

@end
