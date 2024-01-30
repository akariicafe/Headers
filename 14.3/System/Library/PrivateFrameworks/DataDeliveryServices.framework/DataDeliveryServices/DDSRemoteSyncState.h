@class NSString, DDSBackgroundActivityScheduler, NSDate;
@protocol DDSRemoteSyncStateDelegate;

@interface DDSRemoteSyncState : NSObject <DDSBackgroundActivitySchedulerDelegate>

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long syncStatus;
@property (nonatomic) unsigned long long attemptCount;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) DDSBackgroundActivityScheduler *scheduler;
@property (weak, nonatomic) id<DDSRemoteSyncStateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildVersionString;
+ (double)timeIntervalUntilNextRegularUpdate;

- (void)saveState;
- (void)requestUpdate;
- (void)loadState;
- (id)init;
- (void).cxx_destruct;
- (void)resetState;
- (void)performScheduledActivityWithIdentifier:(id)a0;
- (BOOL)shouldInitiateRegularUpdateCycle;
- (void)scheduleRegularUpdate;
- (double)timeBetweenSyncs;
- (double)nextUpdateTimeIntervalForAttemptCount:(unsigned long long)a0;
- (void)scheduleRetry;
- (void)requestRetry;
- (void)beganUpdateCycle;
- (void)completedUpdateCycleWithError:(id)a0;

@end
