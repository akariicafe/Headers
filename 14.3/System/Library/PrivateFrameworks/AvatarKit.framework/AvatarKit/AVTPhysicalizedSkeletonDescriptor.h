@class SCNNode;

@interface AVTPhysicalizedSkeletonDescriptor : NSObject {
    float _simulationFactor;
    SCNNode *_referenceNode;
    SCNNode *_drivingNode;
    SCNNode *_rootJoint;
    void /* unknown type, empty encoding */ _upDownRotation;
    void /* unknown type, empty encoding */ _leftRightRotation;
    void /* unknown type, empty encoding */ _forwardBackRotation;
}

- (void).cxx_destruct;

@end
