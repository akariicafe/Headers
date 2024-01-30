@class FBSDisplayLayoutMonitor, NSMutableDictionary, BKSApplicationStateMonitor, NSSet, NSString, NSMutableArray, BMAppLaunchStream;

@interface _DKApplicationMonitor : _DKMonitor <FBSDisplayLayoutObserver>

@property (retain, nonatomic) FBSDisplayLayoutMonitor *monitor;
@property (retain, nonatomic) NSMutableArray *previouslyForegroundServices;
@property (retain, nonatomic) BKSApplicationStateMonitor *bksMonitor;
@property (retain) NSMutableDictionary *activeExtensions;
@property (retain, nonatomic) NSSet *servicesOfInterestForWatchCommunication;
@property (retain, nonatomic) BMAppLaunchStream *appLaunchStream;
@property (retain, nonatomic) NSString *lastIdentifierSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addServicesForeground:(id)a0 andRemoveServices:(id)a1;
+ (id)entitlements;
+ (id)_eventWithBundleIdentifier:(id)a0 launchReason:(id)a1;
+ (void)setFocalApplication:(id)a0 launchReason:(id)a1;
+ (id)_defaultEvent;
+ (id)eventStream;
+ (id /* block */)_eventFilterBlock;

- (void)synchronouslyReflectCurrentValue;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)platformSpecificStart;
- (void)dealloc;
- (void)stop;
- (void)obtainCurrentValue;
- (id)currentActiveComplications;
- (void)start;
- (BOOL)ignoreAppExtension:(id)a0;
- (void)deactivate;
- (void)platformSpecificStop;
- (void)registerForActiveComplicationChangeNotifications;
- (void)setCurrentActiveComplications;

@end
