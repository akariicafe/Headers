@interface CCVegaSingleItemShapeMarkDef : CCVegaMarkDef

- (struct CGPath { } *)newPathForMark:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForMark:(id)a0 layer:(id)a1;
- (id)drawMark:(id)a0 withLayer:(id)a1;
- (id)enterMark:(id)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformForMark:(id)a0;
- (id)updateMark:(id)a0;

@end
