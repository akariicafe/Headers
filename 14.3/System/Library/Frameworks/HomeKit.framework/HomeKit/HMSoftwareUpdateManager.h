@class HMSoftwareUpdate, NSUUID, _HMContext, NSString, HMFUnfairLock, NSObject;
@protocol OS_dispatch_queue, HMSoftwareUpdateManagerDelegate;

@interface HMSoftwareUpdateManager : NSObject <HMFMessageReceiver> {
    HMFUnfairLock *_lock;
}

@property (readonly, nonatomic) _HMContext *context;
@property (readonly) NSUUID *identifier;
@property (nonatomic, getter=isStarted) BOOL started;
@property (weak) id<HMSoftwareUpdateManagerDelegate> delegate;
@property (readonly) HMSoftwareUpdate *availableUpdate;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)reconnect;
- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)stop;
- (void)setAvailableUpdate:(id)a0;
- (void)_handleUpdatedAvailableUpdate:(id)a0;
- (void)_handleFetch:(id)a0;
- (void)_handleStartUpdate:(id)a0;
- (void)_reallyStartWithCompletionHandler:(id /* block */)a0;
- (void)updateAvailableUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (id)messageDestination;
- (void)__registerForMessages;

@end
