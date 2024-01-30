@class NSString, BKSApplicationStateMonitor, NSMutableDictionary, NSSet, BMAppLaunchStream, NSMutableArray, BMFrontBoardDisplayLayout, FBSDisplayLayoutMonitor, BMSource, BMStream;

@interface _DKApplicationMonitor : _DKMonitor <FBSDisplayLayoutObserver>

@property (retain, nonatomic) BMStream *layoutStream;
@property (retain, nonatomic) BMSource *layoutSource;
@property (retain, nonatomic) BMFrontBoardDisplayLayout *lastLayoutEvent;
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
+ (id)_eventWithBundleIdentifier:(id)a0 launchReason:(id)a1 shortVersionString:(id)a2 exactBundleVersion:(id)a3;
+ (id)_defaultEvent;
+ (id)debugCategory;
+ (id)entitlements;
+ (void)setFocalApplication:(id)a0 launchReason:(id)a1;
+ (id /* block */)_eventFilterBlock;
+ (void)addServicesForeground:(id)a0 andRemoveServices:(id)a1;

- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)obtainCurrentValue;
- (id)currentActiveComplications;
- (void)setCurrentActiveComplications;
- (void)platformSpecificStart;
- (void)dealloc;
- (void)donateDisplayLayout:(id)a0 withContext:(id)a1;
- (void)stop;
- (void)registerForActiveComplicationChangeNotifications;
- (id)init;
- (void)start;
- (BOOL)ignoreAppExtension:(id)a0;
- (void).cxx_destruct;
- (void)platformSpecificStop;

@end
