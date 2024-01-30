@interface _DPBiasedCoin : NSObject

@property (readonly, nonatomic) double bias;

+ (id)coinWithBias:(double)a0;
+ (double)sanitizedProbability:(double)a0;

- (BOOL)flip;
- (id)description;
- (id)init;
- (unsigned char)generateByte;
- (id)initWithBias:(double)a0;

@end
