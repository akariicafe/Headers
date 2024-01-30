@class VCPCNNModelEspresso;

@interface VCPCNNPoseEstimatorEspresso : VCPCNNPoseEstimator {
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (float *)getInputBuffer;
- (int)computePoseScore:(float *)a0;

@end
