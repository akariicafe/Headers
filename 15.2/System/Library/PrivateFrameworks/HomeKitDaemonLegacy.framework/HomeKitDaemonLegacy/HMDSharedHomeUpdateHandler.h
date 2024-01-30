@class HMDSharedHomeUpdateSession, NSString, HMDHome, HMFUnfairLock, NSObject;
@protocol OS_dispatch_queue;

@interface HMDSharedHomeUpdateHandler : HMFObject <HMDSharedHomeUpdateSessionDelegate, HMFLogging, HMFDumpState> {
    HMFUnfairLock *_lock;
}

@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL firstFetchComplete;
@property (getter=isSuspended) BOOL suspended;
@property (nonatomic) BOOL pendingRequestDataFromResident;
@property (retain, nonatomic) HMDSharedHomeUpdateSession *pendingRequestDataFromResidentSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)dumpState;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)pause;
- (void)resume;
- (void)registerForMessages;
- (void)configureWithHome:(id)a0;
- (void)didCompleteHomeUpdateSession:(id)a0 withError:(id)a1;
- (void)residentsChanged:(id)a0;
- (void)handleHomeCloudZoneReadyNotification:(id)a0;
- (void)requestHomeDataSync;
- (void)_evaluateNeedForSync;
- (void)receivedHomeDataFromSourceVersion:(id)a0 forceUpdateVersion:(BOOL)a1 completion:(id /* block */)a2;
- (void)_receivedHomeDataFromSourceVersion:(id)a0 forceUpdateVersion:(BOOL)a1 completion:(id /* block */)a2;

@end
