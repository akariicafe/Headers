@class NSString, NSPointerArray, PPLPeopleAppLauncher, FBScene, FBApplicationUpdateScenesTransaction;

@interface PPLPeopleAppSceneManager : NSObject <FBProcessWatchdogProviding, FBSceneObserver, FBApplicationUpdateScenesTransactionObserver, PPLPeopleAppLauncherDelegate>

@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) FBApplicationUpdateScenesTransaction *transaction;
@property (readonly, copy, nonatomic) NSPointerArray *sceneRequesters;
@property (readonly, nonatomic) PPLPeopleAppLauncher *peopleAppLauncher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSceneManager;

- (void)sceneDidInvalidate:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)watchdogPolicyForProcess:(id)a0 eventContext:(id)a1;
- (void)transaction:(id)a0 didCreateScene:(id)a1;
- (void).cxx_destruct;
- (void)_configureSceneForRequester:(id)a0;
- (void)_createSceneForRequester:(id)a0;
- (void)_launchPeopleAppIfNeededWithForegroundPriority:(BOOL)a0;
- (void)_sendSceneToBackground;
- (void)_updateSceneSettingsForRequester:(id)a0;
- (void)_updateTraitCollection;
- (void)addSceneRequester:(id)a0;
- (id)initWithAppLauncher:(id)a0;
- (void)removeSceneRequester:(id)a0;
- (void)willLaunchPeopleAppInBackground:(id)a0;

@end
