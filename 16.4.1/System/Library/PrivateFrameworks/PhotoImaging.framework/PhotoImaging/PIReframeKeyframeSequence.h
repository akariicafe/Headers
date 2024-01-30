@class NUKeyframeSequenceMatrixFloat33;

@interface PIReframeKeyframeSequence : NSObject {
    NUKeyframeSequenceMatrixFloat33 *_homographySequence;
}

@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (struct { void /* unknown type, empty encoding */ x0[3]; })homographyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithKeyframeArray:(id)a0;
- (long long)interpolation;
- (id)sparseSequence;

@end
