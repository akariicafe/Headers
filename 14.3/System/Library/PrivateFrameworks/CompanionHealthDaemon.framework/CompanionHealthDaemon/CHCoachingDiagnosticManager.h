@class NSDate, NSString, CMMotionActivityManager, HDPeriodicActivity, NSOperationQueue, AWDServerConnection, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface CHCoachingDiagnosticManager : NSObject <HDPeriodicActivityDelegate, HDDiagnosticObject> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDPeriodicActivity *_scheduler;
    CMMotionActivityManager *_activityManager;
    NSOperationQueue *_activityQueue;
    NSDate *_cachedLastSubmittedDate;
    AWDServerConnection *_serverConnection;
}

@property (retain, nonatomic) Class motionActivityManagerClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (BOOL)_queue_submitMetricForData:(id)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (void).cxx_destruct;
- (void)_queue_applyDataItem:(id)a0 toMetric:(id)a1;
- (void)dealloc;
- (id)_dateComponentsAsAge:(id)a0;
- (void)setActivityManager:(id)a0;
- (id)_queue_statisticsCollectionForAnchorDate:(id)a0 quantityType:(id)a1 statisticsOptions:(unsigned long long)a2 error:(id *)a3;
- (BOOL)_queue_submitMetricForActivitySummary:(id)a0 dateOfBirth:(id)a1 biologicalSex:(id)a2 heightSample:(id)a3 weightSample:(id)a4;
- (void)_queue_setLastSubmittedDate:(id)a0;
- (BOOL)_queue_submitMetrics:(id)a0;
- (id)diagnosticDescription;
- (BOOL)_queue_acquireMotionActivityStatisticsForAnchorDate:(id)a0 data:(id)a1 error:(id *)a2;
- (id)_queue_computeStatisticsForCoachingEvent:(id)a0 error:(id *)a1;
- (id)_queue_lastSubmittedDate;
- (void)_queue_performCoachingDiagnosticWithRunDate:(id)a0 ignoreAnchor:(BOOL)a1 completion:(id /* block */)a2;
- (void)_performCoachingDiagnosticWithCompletion:(id /* block */)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)performCoachingDiagnosticWithRunDate:(id)a0 ignoreAnchor:(BOOL)a1 submitMetrics:(BOOL)a2 handler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_queue_performCoachingDiagnosticWithRunDate:(id)a0 ignoreAnchor:(BOOL)a1 submitMetrics:(BOOL)a2 handler:(id /* block */)a3 completion:(id /* block */)a4;
- (BOOL)_queue_computeWorkoutStatisticsForAnchorDate:(id)a0 data:(id)a1 error:(id *)a2;
- (BOOL)_queue_addHealthCharacteristicsToMetrics:(id)a0 error:(id *)a1;

@end
