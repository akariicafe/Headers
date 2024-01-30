@class VCPCNNModelEspresso;

@interface VCPCNNSmileDetectorEspresso : VCPCNNSmileDetector {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (int)computeSmileScore:(float *)a0;
- (void)dealloc;
- (float *)getInputBuffer;

@end
