@interface _DPPrioValueRandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) unsigned long long p;

+ (id)randomizerWithEpsilon:(double)a0 dimensionality:(unsigned long long)a1;

- (id)init;
- (id)initWithEpsilon:(double)a0 dimensionality:(unsigned long long)a1;
- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (id)randomizeBitValues:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (id)randomizeBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (id)randomize:(id)a0 metadata:(id)a1;
- (id)randomizeVector:(id)a0 metadata:(id)a1;

@end
