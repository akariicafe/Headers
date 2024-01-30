@class SCNNode, SCNMorpher;

@interface AVTPhysicalizedMorpherDescriptor : NSObject {
    BOOL _mirrored;
    float _simulationFactor;
    SCNNode *_referenceNode;
    SCNNode *_drivingNode;
    SCNMorpher *_writeMorpher;
    unsigned long long _forwardMorphTargetIndex;
    unsigned long long _backwardMorphTargetIndex;
    unsigned long long _leftwardMorphTargetIndex;
    unsigned long long _rightwardMorphTargetIndex;
    unsigned long long _upwardMorphTargetIndex;
    unsigned long long _downwardMorphTargetIndex;
    SCNNode *_extraSimulationFactorReadMorpherNode;
    unsigned long long _extraSimulationFactorTargetIndex;
}

- (void).cxx_destruct;

@end
