@class UIColor;

@interface SXTextShadow : SXJSONObject

@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } offset;
@property (readonly, nonatomic) UIColor *color;

- (id)TSDShadow;

@end
