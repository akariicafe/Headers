@class NSString, HMDHome, NSObject;
@protocol OS_dispatch_queue;

@interface HMDHomePeriodicReader : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSString *timerID;
@property (weak) HMDHome *home;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)configure:(id)a0;
- (void)dealloc;
- (void)_startTimer;
- (void).cxx_destruct;
- (void)residentUpdated;
- (id)_characteristicsToRead;
- (void)_checkToIssueRead;
- (void)_issueCharacteristicRequests:(id)a0;
- (void)checkToIssueRead;
- (void)handleCharacteristicBasedEventAdded:(id)a0;
- (void)handleTimerFiredNotification:(id)a0;
- (void)startReadTimer;

@end
