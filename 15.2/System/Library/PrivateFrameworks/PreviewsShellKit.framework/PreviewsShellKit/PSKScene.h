@class FBScene, NSString;

@interface PSKScene : NSObject

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSString *sceneIdentifier;

- (id)initWithScene:(id)a0;
- (void).cxx_destruct;
- (void)updateSceneSettings:(id)a0 with:(id)a1;

@end
