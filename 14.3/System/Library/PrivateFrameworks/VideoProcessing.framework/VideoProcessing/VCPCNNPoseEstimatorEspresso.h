@class VCPCNNModelEspresso;

@interface VCPCNNPoseEstimatorEspresso : VCPCNNPoseEstimator {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)a0;

- (id)init;
- (int)computePoseScore:(float *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (float *)getInputBuffer;

@end
