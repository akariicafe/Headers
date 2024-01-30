@interface TSDPathSource : NSObject <TSDMixing, NSCopying>

@property BOOL hasHorizontalFlip;
@property BOOL hasVerticalFlip;

+ (id)pathSourceForShapeType:(int)a0 naturalSize:(struct CGSize { double x0; double x1; })a1;

- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCircular;
- (id)bezierPath;
- (BOOL)isEqual:(id)a0;
- (BOOL)isRectangular;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)bezierPathWithoutFlips;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })pathFlipTransform;
- (BOOL)isRectangularForever;
- (id)interiorWrapPath;
- (Class)preferredControllerClass;
- (double)uniformScaleForScalingToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (void)scaleToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (id)valueForSetSelector:(SEL)a0;

@end
