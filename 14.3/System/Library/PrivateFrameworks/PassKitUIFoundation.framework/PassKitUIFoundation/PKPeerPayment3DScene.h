@class SCNNode, SCNMaterial;

@interface PKPeerPayment3DScene : SCNScene

@property (retain, nonatomic) SCNNode *lightNode;
@property (retain, nonatomic) SCNNode *cameraNode;
@property (retain, nonatomic) SCNNode *textContainerNode;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } currentRotationMatrix;
@property (nonatomic) void /* unknown type, empty encoding */ currentSkew;
@property (nonatomic) void /* unknown type, empty encoding */ currentRollPitch;
@property (retain, nonatomic) SCNMaterial *textMaterial;

+ (void /* unknown type, empty encoding */)staticRollPitch;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })rotationMatrixForRollPitch:(SEL)a0;
+ (void /* unknown type, empty encoding */)skewForRollPitch:(SEL)a0;

- (void)resetScene;
- (id)init;
- (void).cxx_destruct;

@end
