@class NSSet, SBMultiDisplayUserInteractionCoordinator, NSMutableSet, _SBActiveDisplayKeyboardFocusTracker, SBWindowScene, NSString;

@interface SBWindowSceneManager : NSObject <SBMultiDisplayUserInteractionCoordinatorDelegate>

@property (readonly, nonatomic) NSMutableSet *mutableConnectedWindowScenes;
@property (retain, nonatomic) _SBActiveDisplayKeyboardFocusTracker *keyboardFocusTracker;
@property (retain, nonatomic) SBMultiDisplayUserInteractionCoordinator *userInteractionCoordinator;
@property (readonly, copy, nonatomic) NSSet *connectedWindowScenes;
@property (readonly, nonatomic) SBWindowScene *activeDisplayWindowScene;
@property (readonly, nonatomic) SBWindowScene *activeDisplayWindowSceneFollowingKeyboard;
@property (readonly, nonatomic) SBWindowScene *activeDisplayWindowSceneFollowingUserInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_embeddedDisplayWindowScene;
- (id)initWithUserInteractionCoordinator:(id)a0;
- (id)windowSceneForSceneIdentifier:(id)a0;
- (id)windowSceneForDisplayIdentity:(id)a0;
- (id)windowSceneForSceneHandle:(id)a0;
- (void)_sceneWillConnect:(id)a0;
- (id)embeddedDisplayWindowScene;
- (void)_sceneDidDisconnect:(id)a0;
- (id)_validateSuggestedActiveWindowScene:(id)a0 usingMethodology:(long long)a1;
- (id)windowSceneForPersistentIdentifier:(id)a0;
- (void).cxx_destruct;

@end
