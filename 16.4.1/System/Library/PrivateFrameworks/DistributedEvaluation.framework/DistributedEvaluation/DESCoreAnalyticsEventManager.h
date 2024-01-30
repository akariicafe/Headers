@interface DESCoreAnalyticsEventManager : DESEventManager

+ (void)sendEventEvaluationSessionStartForBundleID:(id)a0;
+ (void)sendEventDeleteRecordForBundleID:(id)a0 removedCount:(unsigned long long)a1;
+ (void)sendEventDeferForBundleID:(id)a0 deadlineStr:(id)a1;
+ (void)sendEventWriteRecordForBundleID:(id)a0;
+ (void)sendEventRecipeFetchedForBundleID:(id)a0 evaluationID:(id)a1 error:(id)a2;
+ (void)sendEventAttachmentDownloadsBundleID:(id)a0 duration:(float)a1 success:(BOOL)a2 downloadedAttachmentCount:(unsigned long long)a3;
+ (void)sendEventEvaluationSessionFinishForBundleID:(id)a0 success:(BOOL)a1;
+ (void)sendEventEvaluationCompletedForBundleID:(id)a0 duration:(float)a1 deferralTime:(float)a2 wasDeferred:(BOOL)a3 success:(BOOL)a4 error:(id)a5;
+ (void)sendEventEvaluationForBundleID:(id)a0 evaluationID:(id)a1 duration:(float)a2 deferred:(BOOL)a3 success:(BOOL)a4 error:(id)a5 downloadedAttachmentCount:(unsigned long long)a6;
+ (void)sendEventErrorForBundleID:(id)a0 error:(id)a1;
+ (void)sendEventFetchPolicyForBundleID:(id)a0 success:(BOOL)a1;
+ (void)sendEventActivityShouldDeferWithActivityID:(id)a0 connectionDuration:(float)a1;
+ (void)_sendCoreAnalyticsEvent:(id)a0 eventPayloadBuilder:(id /* block */)a1;
+ (void)sendEventRecipeExpiredForBundleID:(id)a0 deferralTime:(float)a1;
+ (void)sendEventMaintenanceWithActivityID:(id)a0 intervalSincePostedEvent:(double)a1 shouldSkip:(BOOL)a2;
+ (void)sendEventRecordsMatchedForBundleID:(id)a0;

@end
