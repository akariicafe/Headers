@class UIBezierPath, NSString;

@interface UIPointerShape : NSObject <NSCopying>

@property (copy, nonatomic) UIBezierPath *path;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) struct CGPoint { double x; double y; } pinnedPoint;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double defaultCornerRadius;
@property (nonatomic) struct CGPoint { double x; double y; } inherentConstrainedSlip;
@property (nonatomic) double beamLength;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double effectiveCornerRadius;
@property (readonly, nonatomic) NSString *cornerCurve;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isCircle;
@property (readonly, nonatomic) BOOL isElastic;
@property (nonatomic) unsigned long long materialUsage;
@property (nonatomic, setter=_setType:) long long _type;

+ (id)_linkPointerShape;
+ (id)beamWithPreferredLength:(double)a0 axis:(unsigned long long)a1;
+ (id)_elasticRectShapePinnedAtPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)shapeWithPath:(id)a0;
+ (id)shapeWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;
+ (id)_shapeWithSymbol:(id)a0 pointSize:(double)a1;
+ (id)shapeWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
