@interface _DPRandomBitPositionGenerator : NSObject

@property (readonly, nonatomic) unsigned long long m;

+ (id)generatorWithDimensionality:(unsigned long long)a0;

- (unsigned long long)sample;
- (id)init;
- (id)description;
- (id)initWithDimensionality:(unsigned long long)a0;

@end
