@class SCNNode;

@interface AVTPhysicsRig : NSObject

@property (retain, nonatomic) SCNNode *rig;
@property (retain, nonatomic) SCNNode *chainRoot;
@property (nonatomic) void /* unknown type, empty encoding */ restPosition;
@property (nonatomic) void /* unknown type, empty encoding */ restDown;
@property (nonatomic) double applyDownForce;

- (void).cxx_destruct;

@end
