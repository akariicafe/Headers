@class HMFTimer, NSString, NSUUID, HMDHome, NSDictionary, NSObject, HMFMessageDispatcher;
@protocol OS_dispatch_queue, HMDSharedHomeUpdateSessionDelegate;

@interface HMDSharedHomeUpdateSession : NSObject <HMFLogging, HMFTimerDelegate, HMFDumpState> {
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHome *_home;
    NSDictionary *_messagePayload;
    HMFMessageDispatcher *_messageDispatcher;
    HMFTimer *_timer;
    unsigned long long _retryCount;
    double _currentTimerValue;
}

@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, weak, nonatomic) id<HMDSharedHomeUpdateSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (id)dumpState;
- (void)dealloc;
- (void).cxx_destruct;
- (void)requestDataSync;
- (id)initWithHome:(id)a0 delegate:(id)a1 workQueue:(id)a2 messagePayload:(id)a3 messageDispatcher:(id)a4;

@end
