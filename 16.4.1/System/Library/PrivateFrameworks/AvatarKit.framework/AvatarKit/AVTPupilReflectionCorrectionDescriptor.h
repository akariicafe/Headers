@class SCNNode, SCNMaterial;

@interface AVTPupilReflectionCorrectionDescriptor : NSObject {
    SCNNode *_readMorpherNode;
    SCNMaterial *_leftEyeMaterial;
    SCNMaterial *_rightEyeMaterial;
    long long _leftEyeTargetIndex;
    long long _rightEyeTargetIndex;
}

- (void).cxx_destruct;

@end
