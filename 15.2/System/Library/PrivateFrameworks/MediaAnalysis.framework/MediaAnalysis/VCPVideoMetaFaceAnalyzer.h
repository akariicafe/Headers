@class NSMutableDictionary, NSMutableArray;

@interface VCPVideoMetaFaceAnalyzer : VCPVideoMetaAnalyzer {
    NSMutableDictionary *_activeFaces;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transform;
    NSMutableArray *_faceResults;
}

- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void).cxx_destruct;
- (int)finalizeAnalysis;
- (int)processMetadataGroup:(id)a0 flags:(unsigned long long *)a1;
- (id)publicResults;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })flipTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
