@class UIColor;

@interface LPShadowStyle : NSObject

@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (retain, nonatomic) UIColor *color;

+ (id)cardHeadingIconShadow;

- (void).cxx_destruct;
- (id)init;

@end
