@interface WKQuadObject : NSObject {
    struct _WKQuad { struct CGPoint { double x; double y; } p1; struct CGPoint { double x; double y; } p2; struct CGPoint { double x; double y; } p3; struct CGPoint { double x; double y; } p4; } _quad;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBox;
- (struct _WKQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })quad;
- (id)initWithQuad:(struct _WKQuad { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })a0;

@end
