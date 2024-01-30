@interface PXTilingCoordinateSpaceConverter : NSObject

@property (nonatomic) BOOL shouldCache;

+ (BOOL)_canConvertBetweenCoordinateSpace:(id)a0 andCoordinateSpace:(id)a1;
+ (BOOL)canConvertBetweenCoordinateSpaceIdentifier:(void *)a0 andCoordinateSpaceIdentifier:(void *)a1;
+ (id)defaultConverter;

- (void)invalidateCache;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformOfCoordinateSpace:(id)a0 relativeToCoordinateSpace:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformOfCoordinateSpaceIdentifier:(void *)a0 relativeToCoordinateSpaceIdentifier:(void *)a1;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromCoordinateSpaceIdentifier:(void *)a1 toCoordinateSpaceIdentifier:(void *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpaceIdentifier:(void *)a1 toCoordinateSpaceIdentifier:(void *)a2;
- (struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })convertTileGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 toCoordinateSpaceIdentifier:(void *)a1;

@end
