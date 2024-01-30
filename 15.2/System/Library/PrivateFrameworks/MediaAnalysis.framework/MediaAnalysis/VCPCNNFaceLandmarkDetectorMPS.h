@class VCPCNNData, VCPCNNModel;

@interface VCPCNNFaceLandmarkDetectorMPS : VCPCNNFaceLandmarkDetector {
    VCPCNNModel *_modelLandmarks;
    VCPCNNData *_faceInput;
}

- (void).cxx_destruct;
- (id)init;
- (float *)getInputBuffer;
- (int)computeLandmarks:(float *)a0;

@end
