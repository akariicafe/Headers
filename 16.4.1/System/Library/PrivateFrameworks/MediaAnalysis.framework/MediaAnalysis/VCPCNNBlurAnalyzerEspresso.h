@class VCPLoaned, NSString;

@interface VCPCNNBlurAnalyzerEspresso : VCPCNNBlurAnalyzer {
    VCPLoaned *_modelEspresso;
    float *_inputData;
    NSString *_resConfig;
    int _srcWidth;
    int _srcHeight;
}

+ (id)sharedModel:(id)a0;
+ (id)sharedModelPoolWithRevision:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (float)calculateScoreFromNetworkOutputV2:(float *)a0;
- (int)computeSharpnessScore:(float *)a0 textureness:(char *)a1 contrast:(float)a2 imgWidth:(int)a3 cancel:(id /* block */)a4;
- (void)copyBufferFrom:(char *)a0 fromStride:(long long)a1 toPtr:(float *)a2 toStride:(long long)a3 toWidth:(int)a4 toHeight:(int)a5;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;
- (id)initWithRevision:(unsigned long long)a0;
- (int)prepareModelForSourceWidth:(int)a0 andSourceHeight:(int)a1;

@end
