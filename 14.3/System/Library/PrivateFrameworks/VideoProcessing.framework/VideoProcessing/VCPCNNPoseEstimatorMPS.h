@class VCPCNNData, VCPCNNModel;

@interface VCPCNNPoseEstimatorMPS : VCPCNNPoseEstimator {
    VCPCNNModel *_model;
    VCPCNNData *_input;
}

- (id)init;
- (int)computePoseScore:(float *)a0;
- (void).cxx_destruct;
- (float *)getInputBuffer;

@end
