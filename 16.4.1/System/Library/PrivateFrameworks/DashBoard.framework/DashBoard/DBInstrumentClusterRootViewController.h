@class CARDisplayInfo, NSString, DBInstrumentClusterAppSceneViewController;
@protocol DBEnvironment;

@interface DBInstrumentClusterRootViewController : UIViewController <DBEnvironmentConfigurationObserving, BSInvalidatable, DBProcessMonitorObserving>

@property (weak, nonatomic) id<DBEnvironment> environment;
@property (retain, nonatomic) CARDisplayInfo *displayInfo;
@property (retain, nonatomic) DBInstrumentClusterAppSceneViewController *appSceneViewController;
@property (retain, nonatomic) NSString *targetBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEnvironment:(id)a0;
- (void)viewDidLoad;
- (void)invalidate;
- (void).cxx_destruct;
- (void)backgroundScene;
- (void)foregroundSceneWithURL:(id)a0;
- (void)processMonitor:(id)a0 didHandleDeathOfBundleIdentifier:(id)a1;
- (void)processMonitor:(id)a0 shouldHandleDeathOfBundleIdentifier:(id)a1 isCrash:(BOOL)a2;
- (void)updateSceneWithAnimationSettings:(id)a0;

@end
