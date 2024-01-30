@interface DESBitacoraEventManager : DESEventManager

+ (void)initialize;
+ (void)_sendBitacoraEventForBundleID:(id)a0 event:(id)a1 identifiers:(id)a2;
+ (void)_sendBitacoraEventForEvent:(id)a0 identifiers:(id)a1;
+ (void)sendEventActivityScheduled;
+ (void)sendEventTaskCompletedForBundleID:(id)a0 identifiers:(id)a1 error:(id)a2;
+ (void)sendEventTaskFetchedForBundleID:(id)a0 identifiers:(id)a1;
+ (void)sendEventTaskSchedulingFailedForBundleID:(id)a0 identifiers:(id)a1 error:(id)a2;
+ (void)sendEventTaskSchedulingSucceededForBundleID:(id)a0 identifiers:(id)a1;

@end
