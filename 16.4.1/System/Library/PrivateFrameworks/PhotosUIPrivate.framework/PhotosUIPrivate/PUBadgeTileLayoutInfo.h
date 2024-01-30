@interface PUBadgeTileLayoutInfo : PUTileLayoutInfo

@property (readonly, nonatomic) BOOL isOverContent;
@property (readonly, nonatomic) double contentWidth;
@property (readonly, nonatomic) double leadingContentWidth;

- (id)clone;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 zPosition:(double)a5 coordinateSystem:(id)a6;
- (id)initWithTileIdentifier:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 alpha:(double)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 zPosition:(double)a5 hitTestOutset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a6 coordinateSystem:(id)a7 isOverContent:(BOOL)a8 contentWidth:(double)a9 leadingContentWidth:(double)a10;
- (BOOL)isGeometryEqualToLayoutInfo:(id)a0;

@end
