@class NSString, NSDictionary, AVTAvatarPose, NSMutableArray;

@interface AVTAvatarPoseAnimation : NSObject {
    NSDictionary *_staticPhysicsStates;
    NSDictionary *_blendshapeAnimations;
    NSDictionary *_perNodeAnimations;
    NSMutableArray *_animationKeys;
    NSString *_animationBaseKey;
}

@property (readonly, nonatomic) AVTAvatarPose *staticPose;
@property (readonly, nonatomic) double duration;

+ (id)animationFromRepresentation:(id)a0 keyPath:(id)a1;
+ (void)enumerateRepresentationsForAnimation:(id)a0 block:(id /* block */)a1;
+ (id)optimizeAnimation:(id)a0 target:(id)a1;

- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithScene:(id)a0;
- (id)physicalizedPose;
- (void)addToAvatar:(id)a0 options:(unsigned long long)a1 transitionDuration:(double)a2;
- (id)animationsForAvatar:(id)a0;
- (id)initWithSceneAtURL:(id)a0;
- (id)initWithStaticPose:(id)a0 staticPhysicsStates:(id)a1;
- (id)initWithStaticPoseRepresentation:(id)a0 animatedPoseRepresentation:(id)a1 staticPhysicsStatesRepresentation:(id)a2;
- (id)staticPoseRepresentation;
- (id)animatedPoseRepresentation;
- (void)addToAvatar:(id)a0 useStaticPhysicsState:(BOOL)a1;
- (void)addToAvatar:(id)a0 useStaticPhysicsState:(BOOL)a1 transitionDuration:(double)a2;
- (void)addToAvatar:(id)a0 options:(unsigned long long)a1;
- (void)removeFromAvatar:(id)a0 transitionDuration:(double)a1;

@end
