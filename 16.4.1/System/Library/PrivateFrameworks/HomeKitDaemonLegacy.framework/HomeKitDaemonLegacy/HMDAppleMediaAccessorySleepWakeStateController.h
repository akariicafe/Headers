@class NSUUID, NSString, NAFuture, HMFMessageDispatcher, NSObject;
@protocol OS_dispatch_queue, HMDAppleMediaAccessorySleepWakeStateControllerDataSource;

@interface HMDAppleMediaAccessorySleepWakeStateController : HMFObject <HMFMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NAFuture *_fetchSleepWakeFuture;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_accessoryUUID;
    HMFMessageDispatcher *_messageDispatcher;
    id<HMDAppleMediaAccessorySleepWakeStateControllerDataSource> _dataSource;
}

@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_handleFetchSleepWakeStateMessage:(id)a0;
- (void)configureWithHome:(id)a0 messageDispatcher:(id)a1 workQueue:(id)a2;
- (void)fetchSleepWakeStateWithCompletion:(id /* block */)a0;
- (id)initWithAccessoryUUID:(id)a0 dataSource:(id)a1;

@end
