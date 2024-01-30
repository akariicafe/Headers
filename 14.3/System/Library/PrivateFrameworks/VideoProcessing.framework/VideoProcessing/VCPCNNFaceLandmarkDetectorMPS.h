@class VCPCNNData, VCPCNNModel;

@interface VCPCNNFaceLandmarkDetectorMPS : VCPCNNFaceLandmarkDetector {
    VCPCNNModel *_modelLandmarks;
    VCPCNNData *_faceInput;
}

- (id)init;
- (void).cxx_destruct;
- (float *)getInputBuffer;
- (int)computeLandmarks:(float *)a0;

@end
