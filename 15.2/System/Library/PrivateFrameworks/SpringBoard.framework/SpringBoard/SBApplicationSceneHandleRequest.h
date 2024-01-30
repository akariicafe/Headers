@class FBSDisplayIdentity, SBApplication, FBSSceneDefinition, FBScene;

@interface SBApplicationSceneHandleRequest : NSObject

@property (retain, nonatomic) SBApplication *application;
@property (retain, nonatomic) FBScene *existingScene;
@property (retain, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (copy, nonatomic) FBSSceneDefinition *sceneDefinition;

+ (id)defaultRequestForApplication:(id)a0 sceneIdentity:(id)a1 displayIdentity:(id)a2;
+ (id)defaultSceneSpecificationForDisplayIdentity:(id)a0;

- (void).cxx_destruct;
- (id)initWithApplication:(id)a0 sceneDefinition:(id)a1 displayIdentity:(id)a2;

@end
