@class NSDictionary, AVTAvatarPose;

@interface AVTAvatarPhysicalizedPose : NSObject

@property (readonly, nonatomic) AVTAvatarPose *pose;
@property (readonly, nonatomic) NSDictionary *physicsStates;

- (id)initWithPoseRepresentation:(id)a0 physicsStatesRepresentation:(id)a1;
- (void).cxx_destruct;
- (id)initWithPose:(id)a0 physicsStates:(id)a1;
- (void)applyToAvatar:(id)a0;
- (id)initWithSceneAtURL:(id)a0;

@end
