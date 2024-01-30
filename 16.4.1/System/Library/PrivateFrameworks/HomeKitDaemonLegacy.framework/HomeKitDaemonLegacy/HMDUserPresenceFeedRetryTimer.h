@class NSUUID, HMFTimer, NSString;

@interface HMDUserPresenceFeedRetryTimer : HMFObject <HMFLogging>

@property (readonly, copy) NSUUID *timerID;
@property (readonly) double retryTimeInterval;
@property (retain) HMFTimer *retryTimer;
@property unsigned long long retryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)cancel;
- (id)init;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)shouldRetryImmediately:(double)a0;
- (void)startWithDelegate:(id)a0 delegateQueue:(id)a1 responseTime:(double)a2;

@end
