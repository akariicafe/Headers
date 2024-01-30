@interface _UICachedBoundingPathBitmapDataReferenceCorner : NSObject <NSSecureCoding> {
    struct _UIBoundingPathBitmapDataCorner { unsigned long long location; unsigned long long radius; unsigned long long size; BOOL edgePositionsUseLargeValues; void *referenceEdgePositionsByRow; void *referenceEdgePositionsByCol; } _referenceCorner;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)cachedReferenceCornerForRadius:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (struct _UIBoundingPathBitmapDataCorner { unsigned long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; void *x4; void *x5; })referenceCornerCopy;
- (id)initWithReferenceCorner:(struct _UIBoundingPathBitmapDataCorner { unsigned long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; void *x4; void *x5; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
