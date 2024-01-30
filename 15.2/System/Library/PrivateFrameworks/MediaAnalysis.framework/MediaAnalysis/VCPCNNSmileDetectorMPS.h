@class VCPCNNData, VCPCNNModel;

@interface VCPCNNSmileDetectorMPS : VCPCNNSmileDetector {
    VCPCNNModel *_model;
    VCPCNNData *_input;
}

- (void).cxx_destruct;
- (id)init;
- (float *)getInputBuffer;
- (int)computeSmileScore:(float *)a0;

@end
