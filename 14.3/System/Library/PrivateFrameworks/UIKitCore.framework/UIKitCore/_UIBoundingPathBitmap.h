@interface _UIBoundingPathBitmap : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct _UIBoundingPathBitmapData { unsigned long long width; unsigned long long height; struct _UIBoundingPathBitmapDataSkipRegion { unsigned long long y; unsigned long long height; } skipRegion; unsigned long long nodeCount; unsigned long long maximumNodesPerRow; unsigned short *rows; } bitmapData;

- (id)debugQuickLookObject;
- (void)dealloc;
- (id)initWithBitmapData:(struct _UIBoundingPathBitmapData { unsigned long long x0; unsigned long long x1; struct _UIBoundingPathBitmapDataSkipRegion { unsigned long long x0; unsigned long long x1; } x2; unsigned long long x3; unsigned long long x4; unsigned short *x5; })a0;
- (id)boundingPathBitmapWithRect:(struct _UIIntegralRect { struct _UIIntegralPoint { long long x0; long long x1; } x0; struct _UIIntegralSize { long long x0; long long x1; } x1; })a0 cornerRadii:(struct _UIIntegralCornerRadii { long long x0; long long x1; long long x2; long long x3; })a1;
- (id)initWithSize:(struct _UIIntegralSize { long long x0; long long x1; })a0 containsPoint:(id /* block */)a1;
- (id)boundingPathBitmapWithRect:(struct _UIIntegralRect { struct _UIIntegralPoint { long long x0; long long x1; } x0; struct _UIIntegralSize { long long x0; long long x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_imageRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
