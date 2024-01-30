@class VCPCNNModelEspresso;

@interface VCPCNNFaceLandmarkDetectorEspresso : VCPCNNFaceLandmarkDetector {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (float *)getInputBuffer;
- (int)computeLandmarks:(float *)a0;

@end
