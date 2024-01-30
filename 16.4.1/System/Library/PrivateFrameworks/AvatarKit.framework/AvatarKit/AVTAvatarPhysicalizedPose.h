@class NSDictionary, AVTAvatarPose;

@interface AVTAvatarPhysicalizedPose : NSObject

@property (readonly, nonatomic) AVTAvatarPose *pose;
@property (readonly, nonatomic) NSDictionary *physicsStates;

- (void).cxx_destruct;
- (id)initWithPoseRepresentation:(id)a0 physicsStatesRepresentation:(id)a1;
- (id)initWithPose:(id)a0 physicsStates:(id)a1;
- (void)applyToAvatar:(id)a0;
- (void)applyWithTransitionToAvatar:(id)a0 duration:(double)a1 completionHandler:(id /* block */)a2;
- (id)initWithSceneAtURL:(id)a0;

@end
