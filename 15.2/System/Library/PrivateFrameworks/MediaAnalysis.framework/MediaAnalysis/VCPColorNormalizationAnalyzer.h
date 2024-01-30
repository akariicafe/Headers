@class VCPObjectPool;

@interface VCPColorNormalizationAnalyzer : NSObject {
    VCPObjectPool *_sessionPool;
}

- (void).cxx_destruct;
- (id)init;
- (void)_configureRequest:(id)a0 withRevision:(unsigned long long)a1;
- (int)analyzeCGImage:(struct CGImage { } *)a0 results:(id *)a1;

@end
