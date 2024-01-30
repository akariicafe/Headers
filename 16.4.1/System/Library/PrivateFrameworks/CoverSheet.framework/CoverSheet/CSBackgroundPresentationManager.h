@class FBSceneWorkspace, FBScene, BLSHGenericSceneDelegateWithActionHandlers;
@protocol UIScenePresenter;

@interface CSBackgroundPresentationManager : NSObject

@property (readonly, nonatomic) FBSceneWorkspace *sceneWorkspace;
@property (readonly, nonatomic) id<UIScenePresenter> scenePresenter;
@property (readonly, nonatomic) FBScene *currentScene;
@property (readonly, nonatomic) BLSHGenericSceneDelegateWithActionHandlers *sceneDelegate;

- (id)createBackgroundViewControllerForDefinition:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
