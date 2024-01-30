@interface AMDMultiArrayFeature : AMDFeature

- (id)initWithValue:(id)a0;
- (id)buildMultiArrayBufferFrom:(id)a0 andCapacity:(unsigned long long)a1 error:(id *)a2;
- (double *)fillDoubleMultiArray:(double *)a0 fromSource:(id)a1 atDepth:(unsigned int)a2 error:(id *)a3;
- (float *)fillFloat32MultiArray:(float *)a0 fromSource:(id)a1 atDepth:(unsigned int)a2 error:(id *)a3;
- (int *)fillInt32MultiArray:(int *)a0 fromSource:(id)a1 atDepth:(unsigned int)a2 error:(id *)a3;
- (id)getMultiArray:(id *)a0;

@end
