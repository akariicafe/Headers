@interface KnowledgeGraphKit.MAMutableFloatVectorWrapper : KnowledgeGraphKit.MAFloatVectorWrapper

- (void)addVector:(id)a0;
- (void)appendFloat:(float)a0;
- (id)copyWithZone:(void *)a0;
- (void)appendArray:(id)a0;
- (void)multiplyByScalar:(float)a0;
- (void)setFloat:(float)a0 atIndex:(long long)a1;
- (void)appendDoubles:(const double *)a0 count:(long long)a1;
- (void)appendVector:(id)a0;
- (void)appendFloats:(const float *)a0 count:(long long)a1;
- (void)subtractVector:(id)a0;
- (void)subtractScalar:(float)a0;
- (void)addScalar:(float)a0;
- (void)divideByScalar:(float)a0;
- (void)elementwiseMultiplyByWrapper:(id)a0;
- (void)elementwiseRaiseToExponent:(float)a0;
- (id)init;
- (id)initWithArray:(id)a0;

@end
