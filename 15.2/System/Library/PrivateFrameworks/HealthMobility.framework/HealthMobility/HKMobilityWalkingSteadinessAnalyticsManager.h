@class NSObject;
@protocol OS_dispatch_queue;

@interface HKMobilityWalkingSteadinessAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)init;
- (void)submitNotificationInteractionEventWithDataSource:(id)a0 resultHandler:(id /* block */)a1;
- (id)_queue_submitDailyEventWithDataSource:(id)a0;
- (id)_queue_submitNotificationEventWithDataSource:(id)a0;
- (id)_queue_submitNotificationInteractionEventWithDataSource:(id)a0;
- (id)_queue_submitOnboardingEventWithDataSource:(id)a0;
- (BOOL)_isImproveHealthAndActivityAllowed;
- (BOOL)_collectDiagnosticFieldsForDailyMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (BOOL)_collectSensitiveFieldsForDailyMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (BOOL)_collectDiagnosticFieldsForNotificationMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (BOOL)_collectSensitiveFieldsForNotificationMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (BOOL)_collectDiagnosticFieldsForNotificationInteractionMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (BOOL)_collectSensitiveFieldsForNotificationInteractionMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (BOOL)_collectDiagnosticFieldsForOnboardingMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (BOOL)_collectSensitiveFieldsForOnboardingMetric:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (void)submitDailyEventWithDataSource:(id)a0 resultHandler:(id /* block */)a1;
- (void)submitNotificationEventWithDataSource:(id)a0 resultHandler:(id /* block */)a1;
- (void)submitOnboardingEventWithDataSource:(id)a0 resultHandler:(id /* block */)a1;

@end
