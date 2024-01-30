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
- (void)saveState;
- (void)loadState;
- (void)beganUpdateCycle;
- (void)requestCompleteRefresh;
- (BOOL)shouldInitiateRegularUpdateCycle;
- (double)timeBetweenSyncs;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void)completedUpdateCycleWithError:(id)a0;
- (void)requestUpdate;
- (double)nextUpdateTimeIntervalForAttemptCount:(unsigned long long)a0;
- (void)performScheduledActivityWithIdentifier:(id)a0;
- (void)requestRetry;
- (void)scheduleRegularUpdate;
- (void)scheduleRetry;
- (void).cxx_destruct;
- (BOOL)shouldRequestCompleteRefresh;

@end
