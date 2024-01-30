@class HDPeriodicActivity, NSMutableDictionary, HDProfile, ACHEarnedInstanceStore, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ACHAWDSubmissionManager : NSObject <HDPeriodicActivityDelegate>

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) HDPeriodicActivity *scheduler;
@property (retain, nonatomic) NSMutableDictionary *serverConnectionsByComponentId;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void).cxx_destruct;
- (BOOL)_computeAndSubmitAchievementCountMetric;
- (id)_formatMetricTypeToString:(unsigned int)a0;
- (id)_serverConnectionForComponentId:(unsigned int)a0;
- (BOOL)_submitMetric:(id)a0 container:(id)a1 connection:(id)a2;
- (id)initWithProfile:(id)a0 earnedInstanceStore:(id)a1;

@end
