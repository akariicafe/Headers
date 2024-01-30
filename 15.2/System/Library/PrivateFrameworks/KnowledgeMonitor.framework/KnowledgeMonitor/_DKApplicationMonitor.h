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

+ (id)eventStream;
+ (void)setFocalApplication:(id)a0 launchReason:(id)a1;
+ (id)debugCategory;
+ (void)addServicesForeground:(id)a0 andRemoveServices:(id)a1;
+ (id)_defaultEvent;
+ (id)entitlements;
+ (id /* block */)_eventFilterBlock;
+ (id)_eventWithBundleIdentifier:(id)a0 launchReason:(id)a1;

- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)platformSpecificStart;
- (void)synchronouslyReflectCurrentValue;
- (void)setCurrentActiveComplications;
- (void)start;
- (void).cxx_destruct;
- (void)registerForActiveComplicationChangeNotifications;
- (id)init;
- (id)currentActiveComplications;
- (void)obtainCurrentValue;
- (void)deactivate;
- (void)dealloc;
- (BOOL)ignoreAppExtension:(id)a0;
- (void)platformSpecificStop;
- (void)stop;

@end
