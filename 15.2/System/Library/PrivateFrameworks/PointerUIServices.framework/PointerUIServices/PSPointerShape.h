@class NSString;

@interface PSPointerShape : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long shapeType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } pinnedPoint;
@property (readonly, copy, nonatomic) NSString *cornerCurve;
@property (readonly, nonatomic) struct CGPath { } *path;
@property (readonly, nonatomic) BOOL usesEvenOddFillRule;

+ (id)systemShape;
+ (id)customShapeWithPath:(struct CGPath { } *)a0 usesEvenOddFillRule:(BOOL)a1;
+ (id)circleWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)roundedRectWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1 cornerCurve:(id)a2;
+ (id)elasticRoundedRectPinnedAtPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)roundedRectWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;
+ (id)circleWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)roundedRectWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
+ (id)customShapeWithPath:(struct CGPath { } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (struct CGPath { } *)_createMutablePathByDecodingData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)_initWithShapeType:(long long)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
