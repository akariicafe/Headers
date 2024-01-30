@class SCNNode, SCNMaterial, NSString;

@interface AVTMorpherDrivenMaterialDescriptor : NSObject {
    SCNNode *_readMorpherNode;
    long long _morphTargetIndex;
    SCNMaterial *_material;
    NSString *_propertyName;
}

- (void).cxx_destruct;

@end
