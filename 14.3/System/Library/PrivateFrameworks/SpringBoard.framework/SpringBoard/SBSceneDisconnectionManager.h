@interface SBSceneDisconnectionManager : NSObject

@property (nonatomic) unsigned long long numberOfRecentScenesExcludedFromDisconnection;
@property (nonatomic) BOOL isExecuting;

+ (id)sharedManager;

- (unsigned long long)positionOf:(id)a0 inSwitcher:(id)a1;
- (id)init;
- (id)liveScenesForApplication:(id)a0;
- (BOOL)shouldDisconnectScene:(id)a0 inSwitcher:(id)a1;
- (void)_beginSceneCleanupWithBackgroundedSceneEntities:(id)a0;
- (void)disconnectScenes:(id)a0 completion:(id /* block */)a1;
- (id)sceneManager;

@end
