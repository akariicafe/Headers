@interface TSDLayoutGeometry : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

+ (id)geometryFromFullTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

- (struct CGPoint { double x0; double x1; })center;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })inverseTransform;
- (BOOL)differsInMoreThanTranslationFrom:(id)a0;
- (id)infoGeometry;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })fullTransform;
- (id)geometryByOutsettingBy:(struct CGSize { double x0; double x1; })a0;
- (id)geometryByTransformingBy:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)geometryByTranslatingBy:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithInfoGeometry:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformByConcatenatingTransformTo:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
