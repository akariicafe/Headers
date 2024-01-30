@interface NUKeyframeSequenceDouble4 : NUKeyframeSequence {
    void /* unknown type, empty encoding */ _scale;
    void /* unknown type, empty encoding */ _bias;
    void *_values;
}

- (id)debugQuickLookObject;
- (void)dealloc;
- (void /* unknown type, empty encoding */)sampleAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)sparseSequence;
- (void)_compressAndStoreValues:(void *)a0 count:(unsigned long long)a1;
- (id)initWithInterpolation:(long long)a0 count:(unsigned long long)a1 times:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2 values:(void *)a3;
- (id)initWithKeyframeSequence:(id)a0 values:(void *)a1;
- (void /* unknown type, empty encoding */)tangentOfKeyframeAtIndex:(long long)a0;
- (void /* unknown type, empty encoding */)valueOfKeyframeAtIndex:(long long)a0;

@end
