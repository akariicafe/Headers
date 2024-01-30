@class FBSDisplayLayoutMonitor, BSTimer, RBSAssertion, NSHashTable, SPUIAppService, NSObject, RBSProcessHandle;
@protocol OS_dispatch_queue, SPUISpotlightSceneManagerDelegate;

@interface SPUISpotlightSceneManager : NSObject {
    SPUIAppService *_appService;
}

@property (retain) NSHashTable *managedScenes;
@property (retain) NSHashTable *foregroundScenes;
@property (retain) FBSDisplayLayoutMonitor *layoutMonitor;
@property (retain) BSTimer *watchdogTimer;
@property (retain) RBSProcessHandle *spotlightProcessHandle;
@property (retain) RBSAssertion *initializationAssertions;
@property (retain) RBSAssertion *backgroundingAssertions;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<SPUISpotlightSceneManagerDelegate> delegate;

+ (id)sharedManager;

- (void)addScene:(id)a0;
- (void)launchSpotlightIfNeededWithForegroundPriority:(BOOL)a0;
- (void)spendMoreTimeReleasingMemory;
- (void)applyAssertionAsNeeded;
- (void)removeScene:(id)a0;
- (void)sceneWillBackground:(id)a0;
- (id)init;
- (void)sceneWillForeground:(id)a0;
- (void).cxx_destruct;

@end
