@class UIColor, SXConvertiblePoint;

@interface SXComponentShadow : SXJSONObject

@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } radius;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) SXConvertiblePoint *offset;
@property (readonly, nonatomic) UIColor *color;

@end
