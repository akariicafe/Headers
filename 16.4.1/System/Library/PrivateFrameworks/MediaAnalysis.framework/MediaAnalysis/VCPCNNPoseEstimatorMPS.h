@class VCPCNNData, VCPCNNModel;

@interface VCPCNNPoseEstimatorMPS : VCPCNNPoseEstimator {
    VCPCNNModel *_model;
    VCPCNNData *_input;
}

- (id)init;
- (void).cxx_destruct;
- (int)computePoseScore:(float *)a0;
- (float *)getInputBuffer;

@end
