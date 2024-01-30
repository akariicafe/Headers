@class HDPeriodicActivity, HDHealthRecordsProfileExtension, HDProfile, NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface HDClinicalAnalyticsManager : NSObject <HDPeriodicActivityDelegate> {
    NSNumber *_overriddenSubmitsAnalytics;
    HDPeriodicActivity *_periodicActivity;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, weak, nonatomic) HDHealthRecordsProfileExtension *profileExtension;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_predicateForContentAnalyticMedicalRecordTypes;
+ (Class)_medicalRecordEntityClassForDataTypeCode:(long long)a0;

- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (id)initWithProfileExtension:(id)a0;
- (void)triggerClinicalContentAnalyticsForReason:(long long)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_queue_triggerClinicalContentAnalyticsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)_clinicalAnalyticsKeyValueDomain;
- (void)resetClinicalContentAnalyticsAnchorsWithCompletion:(id /* block */)a0;
- (id)_queue_fetchRecordsForContentAnalyticsWithStartAnchor:(long long)a0 limitCount:(long long)a1 finalAnchor:(long long *)a2 error:(id *)a3;
- (void)_queue_didTriggerClinicalAnalyticsForReason:(long long)a0 success:(BOOL)a1 error:(id)a2;
- (void)setSubmitsAnalytics:(BOOL)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (BOOL)_queue_submitsAnalytics;
- (id)_medicalRecordForObjectID:(long long)a0 dataTypeCode:(long long)a1 error:(id *)a2;

@end
