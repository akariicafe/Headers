@class NSSet, SBApplicationSceneEntity, NSString;

@interface SBUIAnimationControllerActivatingAndDeactivatingAppTransitionContextProvider : NSObject <SBUIAnimationControllerTransitionContextProvider>

@property (retain, nonatomic) SBApplicationSceneEntity *activatingAppSceneEntity;
@property (retain, nonatomic) SBApplicationSceneEntity *deactivatingAppSceneEntity;
@property (readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;
@property (readonly, nonatomic) SBApplicationSceneEntity *toApplicationSceneEntity;
@property (readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property (readonly, nonatomic) SBApplicationSceneEntity *fromApplicationSceneEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitionContextProviderWithToApplicationSceneEntity:(id)a0 fromApplicationSceneEntity:(id)a1;

- (void).cxx_destruct;
- (id)initWithToApplicationSceneEntity:(id)a0 fromApplicationSceneEntity:(id)a1;

@end
