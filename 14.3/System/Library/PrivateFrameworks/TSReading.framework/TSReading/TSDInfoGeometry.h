@interface TSDInfoGeometry : NSObject <TSDMixing, NSCopying, NSMutableCopying> {
    struct { unsigned char widthValid : 1; unsigned char heightValid : 1; unsigned char horizontalFlip : 1; unsigned char verticalFlip : 1; } mFlags;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } position;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) BOOL widthValid;
@property (readonly, nonatomic) BOOL heightValid;
@property (readonly, nonatomic) BOOL horizontalFlip;
@property (readonly, nonatomic) BOOL verticalFlip;
@property (readonly, nonatomic) double angle;

+ (id)geometryFromFullTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (id)geometryFromFullTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 widthValid:(BOOL)a1 heightValid:(BOOL)a2;
+ (id)geometryFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withSize:(struct CGSize { double x0; double x1; })a1;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (id)init;
- (struct CGPoint { double x0; double x1; })center;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithWidth:(double)a0;
- (id)initWithHeight:(double)a0;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isEqualExceptForPosition:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })fullTransform;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 widthValid:(BOOL)a2 heightValid:(BOOL)a3 horizontalFlip:(BOOL)a4 verticalFlip:(BOOL)a5 angle:(double)a6;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 horizontalFlip:(BOOL)a2 verticalFlip:(BOOL)a3 angle:(double)a4;
- (struct CGPoint { double x0; double x1; })transformedBoundsOrigin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsBeforeRotation;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBasedOnRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBasedOnPoint:(struct CGPoint { double x0; double x1; })a0 centeredAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBasedOnPoint:(struct CGPoint { double x0; double x1; })a0 centeredAtPoint:(struct CGPoint { double x0; double x1; })a1 withFlips:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transformedBounds;
- (id)initWithFullTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 widthValid:(BOOL)a1 heightValid:(BOOL)a2;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 angle:(double)a2;
- (id)initWithCenter:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 angle:(double)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformWithoutFlips;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)geometryByAppendingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)geometryWithParentGeometry:(id)a0;
- (id)geometryByAppendingGeometry:(id)a0;
- (id)geometryRelativeToGeometry:(id)a0;
- (id)geometryWithNewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)normalizedGeometry;

@end
