@class NSDictionary, AVTAvatarPose, NSString;

@interface AVTAvatarPoseAnimation : NSObject {
    NSDictionary *_staticPhysicsStates;
    NSDictionary *_blendshapeAnimations;
    NSDictionary *_perNodeAnimations;
    NSString *_animationBaseKey;
}

@property (readonly, nonatomic) AVTAvatarPose *staticPose;
@property (readonly, nonatomic) double duration;

+ (id)animationFromDataRepresentation:(id)a0 keyPath:(id)a1;
+ (id)animationFromDictionaryRepresentation:(id)a0 keyPath:(id)a1;
+ (void)dataRepresentationForAnimation:(id)a0 completionHandler:(id /* block */)a1;
+ (void)dictionaryRepresentationForAnimation:(id)a0 completionHandler:(id /* block */)a1;
+ (id)optimizeAnimation:(id)a0 target:(id)a1;
+ (void)removeAllAnimationsFromAvatar:(id)a0;

- (id)initWithScene:(id)a0;
- (void).cxx_destruct;
- (id)physicalizedPose;
- (id)_addAnimationToAvatar:(id)a0 options:(unsigned long long)a1 transitionInDuration:(double)a2 transitionOutDuration:(double)a3 isTransient:(BOOL)a4 completionQueue:(id)a5 completionHandler:(id /* block */)a6;
- (id)animatedPoseRepresentationWithDictionaryAnimationRepresentation;
- (id)_initWithScene:(id)a0 usdaMetadata:(struct { BOOL x0; double x1; double x2; double x3; })a1 identifier:(id)a2;
- (id)_initWithStaticPoseRepresentation:(id)a0 animatedPoseRepresentation:(id)a1 staticPhysicsStatesRepresentation:(id)a2 identifier:(id)a3;
- (id)addToAvatar:(id)a0 options:(unsigned long long)a1;
- (id)addToAvatar:(id)a0 options:(unsigned long long)a1 transitionDuration:(double)a2;
- (id)addToAvatar:(id)a0 useStaticPhysicsState:(BOOL)a1;
- (id)addToAvatar:(id)a0 useStaticPhysicsState:(BOOL)a1 transitionDuration:(double)a2;
- (id)animatedPoseRepresentationWithAnimationRepresentationBuilder:(id /* block */)a0;
- (id)animatedPoseRepresentationWithDataAnimationRepresentation;
- (id)animationsForAvatar:(id)a0;
- (void)commonInitWithIdentifier:(id)a0;
- (id)initWithAnimatedPoseRepresentationAtURL:(id)a0;
- (id)initWithScene:(id)a0 usdaMetadata:(struct { BOOL x0; double x1; double x2; double x3; })a1;
- (id)initWithSceneAtURL:(id)a0;
- (id)initWithSceneAtURL:(id)a0 usdaMetadata:(struct { BOOL x0; double x1; double x2; double x3; })a1;
- (id)initWithStaticPose:(id)a0 staticPhysicsStates:(id)a1;
- (id)initWithStaticPoseRepresentation:(id)a0 animatedPoseRepresentation:(id)a1 staticPhysicsStatesRepresentation:(id)a2;
- (void)playOnceOnAvatar:(id)a0 options:(unsigned long long)a1 transitionInDuration:(double)a2 transitionOutDuration:(double)a3 completionQueue:(id)a4 completionHandler:(id /* block */)a5;
- (id)staticPoseRepresentation;

@end
