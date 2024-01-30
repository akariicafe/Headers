@class UIColor;

@interface SXTextDecoration : SXJSONObject

@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) int style;

- (int)styleWithValue:(id)a0 withType:(int)a1;

@end
