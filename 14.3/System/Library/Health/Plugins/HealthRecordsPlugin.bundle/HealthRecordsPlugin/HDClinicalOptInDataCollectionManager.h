@class HDDaemonTransaction, NSString, HDHealthRecordsProfileExtension, HDPeriodicActivity, HDClinicalOptInStudy, HDProfile, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface HDClinicalOptInDataCollectionManager : NSObject <HDPeriodicActivityDelegate> {
    NSNumber *_overriddenCollectsClinicalOptInData;
    HDPeriodicActivity *_periodicActivity;
    NSObject<OS_dispatch_queue> *_queue;
    HDDaemonTransaction *_transaction;
}

@property (readonly, weak, nonatomic) HDHealthRecordsProfileExtension *profileExtension;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDClinicalOptInStudy *study;
@property (readonly, nonatomic) BOOL collectsClinicalOptInData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_optInJSONForBuild:(id)a0 extractionRulesVersion:(id)a1 FHIRVersion:(id)a2 resource:(id)a3;

- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (id)initWithProfileExtension:(id)a0;
- (void)resetClinicalOptInDataCollectionAnchorsWithCompletion:(id /* block */)a0;
- (void)_queue_submitOptInResourcesForAccounts:(id)a0 batchCountLimit:(long long)a1 batchSizeLimit:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_queue_submitFetchedResources:(id)a0 completion:(id /* block */)a1;
- (void)triggerClinicalOptInDataCollectionForReason:(long long)a0 completion:(id /* block */)a1;
- (BOOL)enableHealthCloudStudy;
- (void)_queue_triggerClinicalOptInDataCollectionWithCompletion:(id /* block */)a0;
- (void)_queue_submitAnalyticsForResult:(id)a0 completion:(id /* block */)a1;
- (void)setCollectsClinicalOptInData:(BOOL)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (BOOL)_queue_updateSubmittedAnchors:(id)a0 accounts:(id)a1 error:(id *)a2;

@end
