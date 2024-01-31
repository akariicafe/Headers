@interface AXMeasureLabelAccessibilityElement : UIAccessibilityElement

@property (nonatomic) BOOL isRectangleArea;
@property (nonatomic) BOOL isRectangleSideLength;
@property (weak, nonatomic) id labelRender;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameInContainerSpace;
- (id)accessibilityValue;

@end
