@class FBSDisplayLayoutMonitor, NSSet, NSDictionary;

@interface _DKApplicationUsageMonitor : _DKMonitor

@property (retain, nonatomic) FBSDisplayLayoutMonitor *monitor;
@property (retain, nonatomic) NSSet *activeApplications;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *externalMonitor;
@property (retain, nonatomic) NSSet *activeExternalApplications;
@property (copy, nonatomic) NSDictionary *inUseApplicationEvents;

+ (id)_eventWithBundleIdentifier:(id)a0 startDate:(id)a1 usageType:(long long)a2 usageTrusted:(BOOL)a3;
+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;

- (void)synchronouslyReflectCurrentValue;
- (void)invalidateInstantState;
- (id)init;
- (void)updateInUseApplications:(id)a0 activeApplications:(id)a1;
- (void).cxx_destruct;
- (void)platformSpecificStart;
- (void)clearAppWebAndMediaUsageInContextStoreMatchingBundleIDs:(id)a0;
- (void)stop;
- (void)updateAppDataInContextStore;
- (void)obtainCurrentValue;
- (void)start;
- (void)updateActiveApplicationsWithLayout:(id)a0 externalDisplay:(BOOL)a1;
- (void)platformSpecificStop;

@end
