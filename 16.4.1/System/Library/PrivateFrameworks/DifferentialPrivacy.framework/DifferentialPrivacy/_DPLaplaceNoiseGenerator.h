@interface _DPLaplaceNoiseGenerator : NSObject

@property (readonly, nonatomic) double b;

+ (id)zeroMeanLaplaceNoiseGenerator:(double)a0;

- (id)initWithScale:(double)a0;
- (id)init;
- (id)description;
- (double)sample;

@end
