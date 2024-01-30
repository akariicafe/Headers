@class FBScene, NSString, FBSceneManager;

@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneManagerObserver> {
    FBSceneManager *_sceneManager;
}

@property (readonly, nonatomic) FBScene *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithScene:(id)a0;
- (void)dealloc;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_begin;
- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;

@end
