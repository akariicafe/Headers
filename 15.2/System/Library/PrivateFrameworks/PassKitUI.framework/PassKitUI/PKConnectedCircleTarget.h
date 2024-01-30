@class UIColor;

@interface PKConnectedCircleTarget : NSObject

@property (nonatomic) BOOL hideTargetCircle;
@property (readonly, nonatomic) double outerRadius;
@property (readonly, nonatomic) UIColor *outerColor;
@property (readonly, nonatomic) double middleRadius;
@property (readonly, nonatomic) UIColor *middleColor;
@property (readonly, nonatomic) double innerRadius;
@property (readonly, nonatomic) UIColor *innerColor;
@property (nonatomic, getter=hasShadow) BOOL shadow;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithOuterRadius:(double)a0 outerColor:(id)a1 middleRadius:(double)a2 middleColor:(id)a3 innerRadius:(double)a4 innerColor:(id)a5;

@end
