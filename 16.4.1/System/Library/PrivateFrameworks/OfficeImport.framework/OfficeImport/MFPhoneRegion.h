@class OITSUBezierPath;

@interface MFPhoneRegion : MFRegion {
    OITSUBezierPath *m_path;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_bounds;
}

- (void).cxx_destruct;
- (int)invert:(id)a0;
- (int)frame:(id)a0 in_brush:(id)a1;
- (int)fill:(id)a0 in_brush:(id)a1;
- (id)initWithPath:(id)a0 in_bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithRects:(id)a0 in_bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 in_dc:(id)a2;
- (id)pathForClippingWithDeviceContext:(id)a0;

@end
