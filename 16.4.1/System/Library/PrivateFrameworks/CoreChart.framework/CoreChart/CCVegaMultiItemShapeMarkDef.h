@interface CCVegaMultiItemShapeMarkDef : CCVegaMarkDef

- (id)enterMultiMark:(id)a0;
- (BOOL)isMultiItemMark;
- (struct CGPath { } *)newPathForMark:(id)a0;
- (id)drawMark:(id)a0 withLayer:(id)a1;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformForMark:(id)a0;
- (id)updateMultiMark:(id)a0;

@end
