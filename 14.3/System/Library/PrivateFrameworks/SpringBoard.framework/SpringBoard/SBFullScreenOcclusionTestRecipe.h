@class NSString, SBWindow, FBScene;

@interface SBFullScreenOcclusionTestRecipe : NSObject <FBSceneManagerObserver, SBTestRecipe> {
    SBWindow *_window;
    FBScene *_scene;
    FBScene *_scene2;
    BOOL _doTheThing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (void)sceneManager:(id)a0 willDestroyScene:(id)a1;
- (void)sceneManager:(id)a0 willUpdateScene:(id)a1 withSettings:(id)a2 transitionContext:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1 withClient:(id)a2;
- (void)sceneManager:(id)a0 willCommitUpdateForScene:(id)a1 transactionID:(unsigned long long)a2;
- (void)sceneManager:(id)a0 didCommitUpdateForScene:(id)a1 transactionID:(unsigned long long)a2;
- (void)dealloc;
- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (id)title;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;

@end
