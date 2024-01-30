@class HDFeatureAvailabilityManager, NSString, HDProfile, NSObject, HDMCAnalysisManager;
@protocol OS_dispatch_queue;

@interface HDMCAnalyticsManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDHealthDaemonReadyObserver> {
    HDMCAnalysisManager *_analysisManager;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDFeatureAvailabilityManager *_heartRateFeatureAvailabilityManager;
    HDFeatureAvailabilityManager *_deviationDetectionFeatureAvailabilityManager;
    HDFeatureAvailabilityManager *_wristTemperatureInputFeatureAvailabilityManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (void)_queue_submitAnalyticsWithCompletion:(id /* block */)a0;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (id)initWithProfile:(id)a0 analysisManager:(id)a1 heartRateFeatureAvailabilityManager:(id)a2 deviationDetectionFeatureAvailabilityManager:(id)a3 wristTemperatureInputFeatureAvailabilityManager:(id)a4;
- (void).cxx_destruct;

@end
