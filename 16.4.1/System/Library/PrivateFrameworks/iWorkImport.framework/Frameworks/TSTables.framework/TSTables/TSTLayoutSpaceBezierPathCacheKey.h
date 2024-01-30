@interface TSTLayoutSpaceBezierPathCacheKey : NSObject <NSCopying>

@property (nonatomic) struct { struct { unsigned int column; unsigned int row; } topLeft; struct { unsigned int column; unsigned int row; } bottomRight; } gridRange;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) double inset;
@property (nonatomic) BOOL reoriginToZero;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
