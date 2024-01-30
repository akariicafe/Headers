@class _DPBiasedCoin;

@interface _DPBitValueRandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) unsigned long long p;
@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) _DPBiasedCoin *epsilonCoin;

+ (id)bitValueRandomizerWithDimensionality:(unsigned long long)a0 epsilon:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDimensionality:(unsigned long long)a0 epsilon:(double)a1;
- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (id)randomize:(id)a0;

@end
