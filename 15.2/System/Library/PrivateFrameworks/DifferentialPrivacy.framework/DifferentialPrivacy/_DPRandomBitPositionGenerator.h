@interface _DPRandomBitPositionGenerator : NSObject

@property (readonly, nonatomic) unsigned long long m;

+ (id)generatorWithDimensionality:(unsigned long long)a0;

- (unsigned long long)sample;
- (id)description;
- (id)init;
- (id)initWithDimensionality:(unsigned long long)a0;

@end
