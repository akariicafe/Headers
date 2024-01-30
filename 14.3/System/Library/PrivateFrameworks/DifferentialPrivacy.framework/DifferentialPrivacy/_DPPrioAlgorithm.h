@class _DPBiasedCoin;

@interface _DPPrioAlgorithm : NSObject

@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) unsigned long long dimension;
@property (readonly, nonatomic) struct { unsigned int *x0; unsigned int *x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; struct _poly_memory *x5; } *prioMemory;
@property (readonly, nonatomic) _DPBiasedCoin *coin;

+ (id)prioWithEpsilon:(double)a0 dimensionality:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEpsilon:(double)a0 dimensionality:(unsigned long long)a1;
- (id)privatizeDataWithBlock:(id /* block */)a0;

@end
