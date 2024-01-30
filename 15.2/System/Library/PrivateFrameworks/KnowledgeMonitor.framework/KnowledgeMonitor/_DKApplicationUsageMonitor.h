@class FBSDisplayLayoutMonitor, NSSet, NSDictionary;

@interface _DKApplicationUsageMonitor : _DKMonitor

@property (retain, nonatomic) FBSDisplayLayoutMonitor *monitor;
@property (retain, nonatomic) NSSet *activeApplications;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *externalMonitor;
@property (retain, nonatomic) NSSet *activeExternalApplications;
@property (copy, nonatomic) NSDictionary *inUseApplicationEvents;

+ (BOOL)shouldMergeUnchangedEvents;
+ (id)eventStream;
+ (id)_eventWithBundleIdentifier:(id)a0 startDate:(id)a1 usageType:(long long)a2 usageTrusted:(BOOL)a3;

- (void)clearAppWebAndMediaUsageInContextStoreMatchingBundleIDs:(id)a0;
- (void)updateAppDataInContextStore;
- (void)platformSpecificStart;
- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)updateInUseApplications:(id)a0 activeApplications:(id)a1;
- (void)obtainCurrentValue;
- (void)updateActiveApplicationsWithLayout:(id)a0 externalDisplay:(BOOL)a1;
- (void)invalidateInstantState;
- (void)platformSpecificStop;
- (void)stop;

@end
