@class TSUColor;

@interface TSDMutableGradientStop : TSDGradientStop

@property (copy, nonatomic) TSUColor *color;
@property (nonatomic) double fraction;
@property (nonatomic) double inflection;

- (void)setFraction:(double)a0;
- (void)setColor:(id)a0;
- (void)setInflection:(double)a0;

@end
