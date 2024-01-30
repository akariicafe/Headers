@interface NUKeyframeSequenceMatrixFloat33 : NUKeyframeSequence {
    struct { void /* unknown type, empty encoding */ x0[3]; } *_values;
}

- (void)dealloc;
- (id)initWithCount:(unsigned long long)a0 times:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 values:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a2;
- (struct { void /* unknown type, empty encoding */ x0[3]; })sampleAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { void /* unknown type, empty encoding */ x0[3]; })valueOfKeyframeAtIndex:(long long)a0;

@end
