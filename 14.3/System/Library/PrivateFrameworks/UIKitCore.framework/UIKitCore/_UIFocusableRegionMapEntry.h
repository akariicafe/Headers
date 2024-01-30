@protocol _UILegacyFocusRegion;

@interface _UIFocusableRegionMapEntry : _UIFocusRegionMapEntry

@property (weak, nonatomic) id<_UILegacyFocusRegion> focusableRegion;
@property (nonatomic) BOOL isFocusGuide;
@property (nonatomic, getter=isFocusCandidate) BOOL focusCandidate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)drawVisualRepresentationInContext:(struct CGContext { } *)a0 imageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isFinal:(BOOL)a2;
- (id)visualRepresentationColor;

@end
