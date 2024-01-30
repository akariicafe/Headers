@protocol _DPStringRandomizer;

@interface _DPStringRandomizer : NSObject

@property (readonly, nonatomic) unsigned long long algorithm;
@property (readonly, nonatomic) id<_DPStringRandomizer> randomizer;

+ (id)stringRandomizerWithEpsilon:(double)a0 privatizationAlgorithm:(unsigned long long)a1 dataAlgorithm:(unsigned long long)a2 algorithmParameters:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEpsilon:(double)a0 privatizationAlgorithm:(unsigned long long)a1 dataAlgorithm:(unsigned long long)a2 algorithmParameters:(id)a3;

@end
