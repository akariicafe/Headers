@class VCPObjectPool;

@interface VCPColorNormalizationAnalyzer : NSObject {
    VCPObjectPool *_sessionPool;
}

- (id)init;
- (void).cxx_destruct;
- (int)analyzeCGImage:(struct CGImage { } *)a0 results:(id *)a1;

@end
