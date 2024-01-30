@interface TSDInfoGeometry : NSObject <TSDMixing, NSCopying, NSMutableCopying> {
    struct { unsigned char widthValid : 1; unsigned char heightValid : 1; unsigned char horizontalFlip : 1; unsigned char verticalFlip : 1; } _flags;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } position;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) BOOL widthValid;
@property (readonly, nonatomic) BOOL heightValid;
@property (readonly, nonatomic) BOOL horizontalFlip;
@property (readonly, nonatomic) BOOL verticalFlip;
@property (readonly, nonatomic) double angle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsBeforeRotation;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } center;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transformWithoutFlips;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } transformedBounds;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } transformedBoundsOrigin;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } fullTransform;
@property (readonly, nonatomic) BOOL allValuesValidNumbers;

+ (id)geometryFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (id)geometryFromFullTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (id)geometryFromFullTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 widthValid:(BOOL)a1 heightValid:(BOOL)a2;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithWidth:(double)a0;
- (id)initWithHeight:(double)a0;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)geometryByAppendingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)geometryRelativeToGeometry:(id)a0;
- (id)geometryWithNewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)geometryWithParentGeometry:(id)a0;
- (id)initWithCenter:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithFullTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 widthValid:(BOOL)a1 heightValid:(BOOL)a2;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 angle:(double)a2;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 widthValid:(BOOL)a2 heightValid:(BOOL)a3 horizontalFlip:(BOOL)a4 verticalFlip:(BOOL)a5 angle:(double)a6;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 angle:(double)a2;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 horizontalFlip:(BOOL)a2 verticalFlip:(BOOL)a3 angle:(double)a4;
- (BOOL)isEqualExceptForPosition:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)normalizedGeometry;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBasedOnPoint:(struct CGPoint { double x0; double x1; })a0 centeredAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBasedOnPoint:(struct CGPoint { double x0; double x1; })a0 centeredAtPoint:(struct CGPoint { double x0; double x1; })a1 withFlips:(BOOL)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBasedOnRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)geometryWithValidNumbers;
- (id)initWithLayoutGeometry:(id)a0;

@end
