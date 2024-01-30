@class UIPointerShape;

@interface UIPointerAccessory : NSObject <NSCopying>

@property (copy, nonatomic) UIPointerShape *shape;
@property (nonatomic) struct { double offset; double angle; } position;
@property (nonatomic) BOOL orientationMatchesAngle;

+ (id)arrowAccessoryWithPosition:(struct { double x0; double x1; })a0;
+ (id)accessoryWithShape:(id)a0 position:(struct { double x0; double x1; })a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
