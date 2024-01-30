@class VCPCNNData, VCPCNNModel;

@interface VCPCNNSmileDetectorMPS : VCPCNNSmileDetector {
    VCPCNNModel *_model;
    VCPCNNData *_input;
}

- (id)init;
- (void).cxx_destruct;
- (int)computeSmileScore:(float *)a0;
- (float *)getInputBuffer;

@end
