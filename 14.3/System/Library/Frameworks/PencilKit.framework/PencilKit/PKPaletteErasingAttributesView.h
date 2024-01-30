@class UISegmentedControl;

@interface PKPaletteErasingAttributesView : UIView

@property (nonatomic) long long eraserType;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_canShowWhileLocked;

@end
