@class NSUUID, NSString, NSDate, HMDUser, HMDUserPresenceUpdateReason, HMFMessageDispatcher, HMUserPresenceAuthorization, HMUserPresenceCompute, NSObject, HMDUserPresenceRegion, HMDUserPresenceFeedRetryTimer;
@protocol HMDUserPresenceFeedSessionDelegate, OS_dispatch_queue;

@interface HMDUserPresenceFeedSession : HMFObject <HMFLogging, HMFTimerDelegate>

@property (copy, nonatomic) NSString *logIdentifierString;
@property (readonly, weak, nonatomic) id<HMDUserPresenceFeedSessionDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSUUID *targetUUID;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) HMDUser *user;
@property (readonly, nonatomic) HMUserPresenceAuthorization *presenceAuthStatus;
@property (readonly, nonatomic) HMUserPresenceCompute *presenceComputeStatus;
@property (readonly, nonatomic) HMDUserPresenceRegion *presenceRegionStatus;
@property (retain, nonatomic) HMDUserPresenceUpdateReason *reason;
@property (readonly, nonatomic) NSDate *statusChangeDate;
@property (readonly, nonatomic) NSUUID *sessionID;
@property (retain, nonatomic) HMDUserPresenceFeedRetryTimer *statusUpdateRetryTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)send;
- (void)timerDidFire:(id)a0;
- (id)attributeDescriptions;
- (void)_send;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 workQueue:(id)a1 targetUUID:(id)a2 messageDispatcher:(id)a3 user:(id)a4 presenceAuthStatus:(id)a5 presenceComputeStatus:(id)a6 presenceRegionStatus:(id)a7 reason:(id)a8;
- (void)_handleStatusUpdateMessageError:(id)a0 responseTime:(double)a1;
- (void)_callDelegate;

@end
