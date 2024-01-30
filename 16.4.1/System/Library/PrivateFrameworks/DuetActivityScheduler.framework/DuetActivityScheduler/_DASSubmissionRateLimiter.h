@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface _DASSubmissionRateLimiter : NSObject

@property (retain, nonatomic) NSMutableDictionary *penaltyBox;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delayedSubmissionQueue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSMutableDictionary *activityGroupQueue;
@property (retain, nonatomic) NSMutableDictionary *submittedActivities;
@property (retain, nonatomic) NSMutableDictionary *activityGroups;
@property (nonatomic) int dastoolToken;

+ (id)groupNameForActivity:(id)a0;
+ (id)pluginGroupNameForGroupName:(id)a0;

- (void)submitActivity:(id)a0 inGroup:(id)a1 withScheduler:(id)a2;
- (void)submitActivity:(id)a0 withScheduler:(id)a1;
- (void)createActivityGroup:(id)a0;
- (void)addToPenaltyBox:(id)a0 atDate:(id)a1;
- (BOOL)shouldQueueActivity:(id)a0;
- (void)submitActivities:(id)a0 withScheduler:(id)a1;
- (void)removeAllObjects;
- (void)removeFromPenaltyBox:(id)a0;
- (void)dealloc;
- (void)activityCanceled:(id)a0 withScheduler:(id)a1;
- (void)admitNextActivityAfterCompletionOf:(id)a0 withScheduler:(id)a1;
- (void)handleCanceledActivity:(id)a0 withGroupName:(id)a1;
- (BOOL)shouldDelaySubmissionOfActivity:(id)a0;
- (unsigned long long)capacityForGroupName:(id)a0;
- (id)init;
- (void)handleCanceledActivity:(id)a0;
- (void)activityCompleted:(id)a0 withScheduler:(id)a1;
- (BOOL)shouldDelayGroupSubmissionOfActivity:(id)a0;
- (void).cxx_destruct;
- (void)updateCapacity:(unsigned long long)a0 forGroupName:(id)a1;

@end
