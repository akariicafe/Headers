@class NSString, NSSet, BKSApplicationStateMonitor, NSMutableSet, NSDate, PLXPCListenerOperatorComposition, RBSProcessMonitor;

@interface PLApplicationAgent : PLAgent <LSApplicationWorkspaceObserverProtocol>

@property (retain) NSMutableSet *keyboardPlugins;
@property (retain) NSMutableSet *widgetPlugins;
@property (retain) NSDate *startDateForOverAllBackGroundActivity;
@property (retain) NSSet *currentDisplayIdentifiers;
@property (retain) BKSApplicationStateMonitor *appStateMonitor;
@property (retain) PLXPCListenerOperatorComposition *widgetStatsListener;
@property (retain) PLXPCListenerOperatorComposition *widgetUpdatesListener;
@property (retain) RBSProcessMonitor *appStateMonitorRBS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)installedPlugins;
+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)appNameForBundleID:(id)a0;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)appVersionForBundle:(id)a0;
+ (int)appTypeFromProxy:(id)a0;
+ (id)entryEventPointDefinitionWidgetUpdates;
+ (id)entryEventPointDefinitionApplicationExitReason;
+ (id)entryEventPointDefinitionApplicationExitReasonObfuscated;
+ (id)entryEventForwardDefinitionApplication;
+ (id)entryEventForwardDefinitionApplicationObfuscated;
+ (id)entryEventForwardDefinitionApplicationDidUninstall;
+ (id)entryEventBackwardDefinitionApplicationMemory;
+ (id)entryEventBackwardDefinitionWidgetStats;
+ (id)entryEventNoneAppVersions;
+ (id)entryEventNoneAllApps;
+ (id)entryEventNoneAllPlugins;
+ (id)entryAggregateDefinitionApplicationReason;
+ (id)pluginEntryFromProxy:(id)a0;
+ (void)addAppVersion:(id)a0 withVersion:(id)a1;
+ (void)removeAppVersion:(id)a0 forVersion:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)log;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)applicationsDidUninstall:(id)a0;
- (void)initOperatorDependancies;
- (void)applicationsDidInstall:(id)a0;
- (void)displayIdentifiersDidChange;
- (void)logEventPointApplicationForDisplayID:(id)a0 withPid:(int)a1 withState:(id)a2 withReasons:(id)a3;
- (BOOL)appAnalyticsEnabled;
- (void)logEventBackwardApplicationMemoryWithBundleId:(id)a0 withSuspendedMemory:(id)a1 withPeakMemory:(id)a2;
- (void)logAllPlugins;
- (void)logAllAppsAndVersions;
- (void)buildAppVersionDictionary;
- (id)extensionSetWithType:(id)a0;
- (void)refreshAllAppsAndPlugins;
- (void)logEventBackwardChronoDWidgetStats:(id)a0;
- (void)logEventPointChronoDWidgetUpdates:(id)a0;
- (BOOL)isApplication:(int)a0;
- (void)logEventPointApplicationExitReason:(id)a0;
- (void)logEventPointApplication;
- (void)logEventPointApplicationForDisplayID:(id)a0;
- (void)logInstalledAppWithProxy:(id)a0 withBundleID:(id)a1;
- (void)logUninstalledApp:(id)a0;
- (void)logInstalledPlugin:(id)a0;
- (BOOL)isAppClipWithBundleID:(id)a0;
- (void)logInstalledAppVersionWithProxy:(id)a0 withBundleID:(id)a1;
- (void)logUpdatedAppVersion:(id)a0;
- (void)logEventForwardApplicationDidUninstall;
- (void)logUninstalledAppVersion:(id)a0;
- (void)buildQueryWithQuery:(id)a0 withKey:(id)a1 withValue:(id)a2;

@end
