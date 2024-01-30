@class FBScene, NSString;

@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneObserver>

@property (readonly, nonatomic) FBScene *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_canBeInterrupted;
- (void)_begin;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (id)initWithScene:(id)a0;
- (void)sceneDidInvalidate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
