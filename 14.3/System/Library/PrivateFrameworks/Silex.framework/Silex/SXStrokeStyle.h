@class UIColor;

@interface SXStrokeStyle : SXJSONObject

@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } width;
@property (readonly, nonatomic) int style;

- (int)styleWithValue:(id)a0 withType:(int)a1;

@end
