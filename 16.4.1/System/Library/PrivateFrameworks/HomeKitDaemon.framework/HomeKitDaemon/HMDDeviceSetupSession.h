@class HMDDeviceSetupSessionInternal, NSUUID, HMDHomeManager, NSString, NSError, NSObject, HMFActivity;
@protocol OS_dispatch_queue, HMDDeviceSetupSessionDelegate;

@interface HMDDeviceSetupSession : HMFObject <HMFLogging, HMDDeviceSetupTrackingInfoMutable, HMFMessageReceiver, HMDDeviceSetupTrackingInfoProviding> {
    HMFActivity *_activity;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) HMDDeviceSetupSessionInternal *internal;
@property (nonatomic, getter=isOpen) BOOL open;
@property (readonly) id /* block */ upSecondsFactory;
@property (weak) id<HMDDeviceSetupSessionDelegate> delegate;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long role;
@property (readonly, weak) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSUUID *accessoryUUID;
@property unsigned long long startTime;
@property unsigned long long endTime;
@property (copy) NSError *sessionError;
@property (copy) NSString *category;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (BOOL)isRoleSupported:(long long)a0;

- (id)logIdentifier;
- (id)messageDestination;
- (void)open;
- (BOOL)isEqual:(id)a0;
- (void)close:(id)a0;
- (void)_closeWithError:(id)a0;
- (id)init;
- (void)__registerForMessages;
- (void).cxx_destruct;
- (id)messageDispatcher;
- (void)_handleClose:(id)a0;
- (void)_handleReceiveData:(id)a0;
- (void)_sendRequestData:(id)a0;
- (id)initWithIdentifier:(id)a0 role:(long long)a1 homeManager:(id)a2;
- (id)initWithIdentifier:(id)a0 role:(long long)a1 homeManager:(id)a2 upSecondsFactory:(id /* block */)a3;
- (id)setupTrackingInfo;

@end
