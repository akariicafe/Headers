@class OADStroke;

@interface CMLineShapeBuilder : CMShapeBuilder {
    OADStroke *_stroke;
}

- (void).cxx_destruct;
- (void)setStroke:(id)a0;
- (struct CGPath { } *)copyShapeWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)_renderBentConnector2InPath:(struct CGPath { } *)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 andOrientedBounds:(id)a2 headSrc:(struct CGPoint { double x0; double x1; } *)a3 headDst:(struct CGPoint { double x0; double x1; } *)a4 tailSrc:(struct CGPoint { double x0; double x1; } *)a5 tailDst:(struct CGPoint { double x0; double x1; } *)a6;
- (void)_renderBentConnector3InPath:(struct CGPath { } *)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 andOrientedBounds:(id)a2 headSrc:(struct CGPoint { double x0; double x1; } *)a3 headDst:(struct CGPoint { double x0; double x1; } *)a4 tailSrc:(struct CGPoint { double x0; double x1; } *)a5 tailDst:(struct CGPoint { double x0; double x1; } *)a6;
- (void)_renderStraightConnector1InPath:(struct CGPath { } *)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 andOrientedBounds:(id)a2 headSrc:(struct CGPoint { double x0; double x1; } *)a3 headDst:(struct CGPoint { double x0; double x1; } *)a4 tailSrc:(struct CGPoint { double x0; double x1; } *)a5 tailDst:(struct CGPoint { double x0; double x1; } *)a6;
- (float)_getRotationFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 withBounds:(id)a2;
- (void)_renderLineEnd:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 withOrientation:(float)a2 inPath:(struct CGPath { } *)a3;
- (float)_adjustedCoefAtIndex:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingBoxForLineEnd:(id)a0;

@end
