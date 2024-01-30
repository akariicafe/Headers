@class HMFTimer, HMFMessageDispatcher, NSDictionary, HMDHome, NSString, NSObject, NSUUID;
@protocol OS_dispatch_queue, HMDSharedHomeUpdateSessionDelegate;

@interface HMDSharedHomeUpdateSession : NSObject <HMFLogging, HMFTimerDelegate, HMFDumpState>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDHome *home;
@property (readonly, nonatomic) NSDictionary *messagePayload;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (retain, nonatomic) HMFTimer *timer;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) double currentTimerValue;
@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, weak, nonatomic) id<HMDSharedHomeUpdateSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (void)startTimer;
- (void)timerDidFire:(id)a0;
- (id)dumpState;
- (id)logIdentifier;
- (void)_callDelegate;
- (id)initWithHome:(id)a0 delegate:(id)a1 workQueue:(id)a2 messagePayload:(id)a3 messageDispatcher:(id)a4;
- (void)requestDataSync;
- (void)_requestDataSync;
- (id)_selectResident;

@end
