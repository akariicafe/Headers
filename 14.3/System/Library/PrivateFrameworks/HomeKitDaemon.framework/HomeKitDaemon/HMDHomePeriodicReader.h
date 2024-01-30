@class NSString, HMDHome, NSObject, HMDBackgroundTaskAgentTimer;
@protocol OS_dispatch_queue;

@interface HMDHomePeriodicReader : HMFObject <HMFLogging>

@property (weak) HMDHome *home;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaReadTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configure:(id)a0;
- (void)dealloc;
- (void)_startTimer;
- (void)timerFired:(id)a0;
- (id)logIdentifier;
- (id)_characteristicsToRead;
- (void)residentUpdated;
- (void)handleCharacteristicBasedEventAdded:(id)a0;
- (void)startReadTimer;
- (void)checkToIssueRead;
- (void)_checkToIssueRead;
- (void)_issueCharacteristicRequests:(id)a0;

@end
