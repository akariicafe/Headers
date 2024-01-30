@class SISceneSegmentationAlgorithm, OUCVPixelRotate, SISceneSegmentationNetworkConfiguration, SISceneSegmentationData;

@interface OUSemanticSegmentation : NSObject {
    OUCVPixelRotate *cvRotate90;
    OUCVPixelRotate *cvRotate90r;
    OUCVPixelRotate *cvRotate180;
    OUCVPixelRotate *cvRotate180r;
    OUCVPixelRotate *cvRotate270;
    OUCVPixelRotate *cvRotate270r;
    SISceneSegmentationAlgorithm *siSceneSegmentationAlgorithm;
    SISceneSegmentationNetworkConfiguration *semanticConfig;
    SISceneSegmentationData *semResultData;
    long long semanticModel;
    long long deviceOrientation;
    BOOL _initRotater;
    BOOL _initSegModel;
}

- (id)init;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)generateSemanticOnWideCameraWithFrame:(id)a0;
- (BOOL)setupRotater:(id)a0;

@end
