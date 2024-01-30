@interface _DPUniformNoiseGenerator : NSObject

@property (readonly, nonatomic) double minValue;
@property (readonly, nonatomic) double range;

+ (id)generatorWithValueRange:(id)a0;

- (double)sample;
- (id)description;
- (id)init;
- (id)initWithValueRange:(id)a0;

@end
