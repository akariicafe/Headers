@class TSDBezierPath;

@interface TSDBezierPathSource : TSDPathSource <TSDMixing> {
    TSDBezierPath *mPath;
    BOOL mIsRectangular;
}

@property (nonatomic) struct CGSize { double width; double height; } naturalSize;

+ (id)pathSourceWithBezierPath:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCircular;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isRectangular;
- (id)initWithNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)bezierPathWithoutFlips;
- (BOOL)isRectangularForever;
- (id)initWithBezierPath:(id)a0;
- (void)p_setBezierPath:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformToNaturalSize;

@end
