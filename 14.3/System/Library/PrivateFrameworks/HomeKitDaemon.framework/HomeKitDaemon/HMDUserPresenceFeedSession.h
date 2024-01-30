@class NSUUID, NSDate, NSString, HMDUser, HMDUserPresenceUpdateReason, HMFMessageDispatcher, HMUserPresenceAuthorization, HMUserPresenceCompute, NSObject, HMDDevice, HMDUserPresenceRegion, HMDUserPresenceFeedRetryTimer;
@protocol HMDUserPresenceFeedSessionDelegate, OS_dispatch_queue;

@interface HMDUserPresenceFeedSession : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, weak, nonatomic) id<HMDUserPresenceFeedSessionDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSUUID *targetUUID;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) HMDDevice *residentDevice;
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

- (void).cxx_destruct;
- (void)_send;
- (void)dealloc;
- (id)attributeDescriptions;
- (void)timerDidFire:(id)a0;
- (void)send;
- (id)logIdentifier;
- (id)initWithDelegate:(id)a0 workQueue:(id)a1 targetUUID:(id)a2 messageDispatcher:(id)a3 residentDevice:(id)a4 user:(id)a5 presenceAuthStatus:(id)a6 presenceComputeStatus:(id)a7 presenceRegionStatus:(id)a8 reason:(id)a9;
- (void)_handleStatusUpdateMessageError:(id)a0 responseTime:(double)a1;
- (void)_callDelegate;

@end
