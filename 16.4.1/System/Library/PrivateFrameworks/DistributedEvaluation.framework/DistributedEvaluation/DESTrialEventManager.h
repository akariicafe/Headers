@interface DESTrialEventManager : DESEventManager

+ (void)initialize;
+ (void)_sendTrialMetrics:(id)a0 dimensions:(id)a1 factorsState:(id)a2;
+ (void)sendEventActivityShouldDeferWithConnectionDuration:(float)a0;
+ (void)sendEventMaintenanceWithActivityID:(id)a0 shouldSkip:(BOOL)a1;
+ (void)sendEventSchedulerStartedWithPluginCount:(unsigned long long)a0;
+ (void)sendEventTaskCompletedForBundleID:(id)a0 factorsState:(id)a1 duration:(float)a2 error:(id)a3;
+ (void)sendEventTaskFetchedForBundleID:(id)a0 factorsState:(id)a1;
+ (void)sendEventTaskScheduledStatusForBundleID:(id)a0 factorsState:(id)a1 success:(BOOL)a2;
+ (void)sendEventTaskSchedulingErrorForBundleID:(id)a0 factorsState:(id)a1 error:(id)a2;
+ (void)sendEventTasksFetchedCountForBundleID:(id)a0 count:(unsigned long long)a1;
+ (void)sendEventTasksFetchingErrorForBundleID:(id)a0 error:(id)a1;
+ (void)sendEventTrialPostedBMLTActivatedEvent;

@end
