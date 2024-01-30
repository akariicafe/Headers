@class NSArray;

@interface PHASEScatteringData : NSObject

@property (readonly, nonatomic) NSArray *scatteringCoefficients;

+ (id)new;
+ (id)objectForDefault;

- (id)init;
- (void).cxx_destruct;
- (id)initWithScatteringCoefficients:(id)a0;
- (id)initWithScatteringCoefficients:(id)a0 frequencyBands:(id)a1;

@end
