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

- (void)resetState;
- (id)initWithDelegate:(id)a0;
- (void)saveState;
- (void)loadState;
- (void)requestUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)performScheduledActivityWithIdentifier:(id)a0;
- (BOOL)shouldRequestCompleteRefresh;
- (void)requestCompleteRefresh;
- (BOOL)shouldInitiateRegularUpdateCycle;
- (void)scheduleRegularUpdate;
- (double)timeBetweenSyncs;
- (double)nextUpdateTimeIntervalForAttemptCount:(unsigned long long)a0;
- (void)scheduleRetry;
- (void)requestRetry;
- (void)beganUpdateCycle;
- (void)completedUpdateCycleWithError:(id)a0;

@end
