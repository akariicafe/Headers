@interface SGRandomization : NSObject

+ (void)shuffleMutableArray:(id)a0 inApproxEqualEpsilon:(double)a1 withValueBlock:(id /* block */)a2 withRng:(id)a3;
+ (void)shuffleMutableArray:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withRng:(id)a2;
+ (void)shuffleMutableArray:(id)a0 withRng:(id)a1;
+ (id)shuffledSamplingWithoutReplacementForK:(unsigned long long)a0 fromN:(unsigned long long)a1 withRng:(id)a2;

@end
