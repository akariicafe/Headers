@class SCNMorpher, SCNNode;

@interface AVTCorrectiveMorpherDescriptor : NSObject {
    SCNMorpher *_correctiveWriteMorpher;
    long long _correctiveTargetIndex;
    SCNNode *_drivingReadMorpherNode0;
    SCNNode *_drivingReadMorpherNode1;
    SCNNode *_drivingReadMorpherNode2;
    SCNNode *_drivingReadMorpherNode3;
    SCNNode *_drivingReadMorpherNode4;
    long long _drivingTargetIndex0;
    long long _drivingTargetIndex1;
    long long _drivingTargetIndex2;
    long long _drivingTargetIndex3;
    long long _drivingTargetIndex4;
    long long _drivingTargetCount;
}

- (void).cxx_destruct;

@end
