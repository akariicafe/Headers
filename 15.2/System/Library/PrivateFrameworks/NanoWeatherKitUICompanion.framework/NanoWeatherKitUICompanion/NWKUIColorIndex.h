@class UIColor;

@interface NWKUIColorIndex : NSObject

@property (readonly, nonatomic) double value;
@property (readonly, nonatomic) UIColor *color;

+ (id)indexForValue:(double)a0;
+ (id)colorForValue:(double)a0;
+ (id)indexWithValue:(double)a0 color:(id)a1;
+ (id)zeroIndex;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(double)a0 color:(id)a1;

@end
