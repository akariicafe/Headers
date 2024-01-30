@class UIFocusContainerGuide;

@interface _UIFocusContainerGuideMapEntry : _UIFocusRegionMapEntry

@property (weak, nonatomic) UIFocusContainerGuide *focusContainerGuide;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } focusContainmentFrame;
@property (nonatomic) double axisAlignedDistanceFromFocusedRect;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)drawVisualRepresentationInContext:(struct CGContext { } *)a0 imageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)visualRepresentationColor;

@end
