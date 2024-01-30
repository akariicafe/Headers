@class FBScene, NSString;

@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneObserver>

@property (readonly, nonatomic) FBScene *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_begin;
- (id)initWithScene:(id)a0;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)sceneDidInvalidate:(id)a0;
- (BOOL)_canBeInterrupted;
- (void)dealloc;
- (void).cxx_destruct;

@end
