@class FBSDisplayLayoutMonitor, NSSet, NSDictionary, NSString, FBSDisplayMonitor;

@interface _DKApplicationUsageMonitor : _DKMonitor <FBSDisplayObserving>

@property (retain, nonatomic) FBSDisplayLayoutMonitor *monitor;
@property (retain, nonatomic) NSSet *activeApplications;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *carPlayMonitor;
@property (retain, nonatomic) NSSet *activeCarPlayApplications;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *externalMonitor;
@property (retain, nonatomic) NSSet *activeExternalApplications;
@property (retain, nonatomic) FBSDisplayMonitor *displayMonitor;
@property (copy, nonatomic) NSDictionary *inUseApplicationEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)_eventWithBundleIdentifier:(id)a0 startDate:(id)a1 usageType:(long long)a2 usageTrusted:(BOOL)a3;

- (void)synchronouslyReflectCurrentValue;
- (void)updateAppDataInContextStore;
- (void)updateInUseApplications:(id)a0 activeApplications:(id)a1;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (void)obtainCurrentValue;
- (void)updateActiveApplicationsWithLayout:(id)a0 displayType:(unsigned long long)a1;
- (void)platformSpecificStart;
- (void)clearAppWebAndMediaUsageInContextStoreMatchingBundleIDs:(id)a0 clearAll:(BOOL)a1;
- (void)invalidateInstantState;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)platformSpecificStop;

@end
