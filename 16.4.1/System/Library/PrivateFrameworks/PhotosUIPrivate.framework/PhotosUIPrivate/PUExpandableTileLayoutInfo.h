@interface PUExpandableTileLayoutInfo : PUTileLayoutInfo

@property (readonly, nonatomic) BOOL isExpanded;
@property (readonly, nonatomic) struct CGSize { double width; double height; } expandedSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } unexpandedSize;

- (id)clone;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 zPosition:(double)a5 coordinateSystem:(id)a6;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 zPosition:(double)a5 coordinateSystem:(id)a6 isExpanded:(BOOL)a7 expandedSize:(struct CGSize { double x0; double x1; })a8 unexpandedSize:(struct CGSize { double x0; double x1; })a9;
- (BOOL)isGeometryEqualToLayoutInfo:(id)a0;

@end
