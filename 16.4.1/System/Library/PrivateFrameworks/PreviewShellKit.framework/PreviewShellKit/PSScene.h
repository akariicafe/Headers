@class FBScene, NSString, PSSceneSettings;

@interface PSScene : NSObject

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) PSSceneSettings *sceneSettings;

- (id)initWithScene:(id)a0;
- (void).cxx_destruct;
- (void)updateSceneSettings:(id)a0 with:(id)a1;

@end
