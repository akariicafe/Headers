@interface WKTextSelectionRectCustomHandleInfo : UITextSelectionRectCustomHandleInfo {
    struct FloatQuad { struct FloatPoint { float m_x; float m_y; } m_p1; struct FloatPoint { float m_x; float m_y; } m_p2; struct FloatPoint { float m_x; float m_y; } m_p3; struct FloatPoint { float m_x; float m_y; } m_p4; } _quad;
}

- (struct CGPoint { double x0; double x1; })topRight;
- (id)initWithFloatQuad:(const struct FloatQuad { struct FloatPoint { float x0; float x1; } x0; struct FloatPoint { float x0; float x1; } x1; struct FloatPoint { float x0; float x1; } x2; struct FloatPoint { float x0; float x1; } x3; } *)a0;
- (struct CGPoint { double x0; double x1; })bottomRight;
- (struct CGPoint { double x0; double x1; })topLeft;
- (struct CGPoint { double x0; double x1; })bottomLeft;
- (id).cxx_construct;

@end
