@class HDPeriodicActivity, HDHealthRecordsProfileExtension, HDProfile, HDClinicalOptInStudy, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HDClinicalOptInDataUploadManager : NSObject <HDPeriodicActivityDelegate>

@property (readonly, weak, nonatomic) HDHealthRecordsProfileExtension *profileExtension;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDClinicalOptInStudy *study;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) HDPeriodicActivity *periodicActivity;
@property (readonly, nonatomic) BOOL collectsClinicalOptInData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (id)initWithProfileExtension:(id)a0;
- (void).cxx_destruct;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)triggerClinicalOptInDataUploadWithCompletion:(id /* block */)a0;
- (void)_queue_triggerClinicalOptInDataUploadWithCompletion:(id /* block */)a0;

@end
