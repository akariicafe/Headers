@class NSString, VCPCNNModelEspresso;

@interface VCPImageSaliencyAnalyzerFullEspresso : VCPImageSaliencyAnalyzer {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
    NSString *_resConfig;
    int _srcWidth;
    int _srcHeight;
}

+ (id)sharedModel:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (int)prepareModelForSourceWidth:(int)a0 andSourceHeight:(int)a1;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;
- (int)getSalientRegions:(id /* block */)a0;

@end
