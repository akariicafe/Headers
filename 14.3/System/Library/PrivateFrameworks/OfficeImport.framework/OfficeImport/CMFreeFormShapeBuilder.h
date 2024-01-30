@class OADPath;

@interface CMFreeFormShapeBuilder : CMLineShapeBuilder {
    OADPath *_path;
    struct CGSize { double width; double height; } _space;
}

- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })affineTransform;
- (void)setPath:(id)a0;
- (void)setSpace:(struct CGSize { double x0; double x1; })a0;
- (struct CGPath { } *)copyShapeWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (struct CGPoint { double x0; double x1; })_renderPathElement:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 inPath:(struct CGPath { } *)a2;

@end
