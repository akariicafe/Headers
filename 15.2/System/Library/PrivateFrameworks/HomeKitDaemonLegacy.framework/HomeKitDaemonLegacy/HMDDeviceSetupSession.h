@class NSUUID, NSString, NSDate, HMDHomeManager, NSError, HMFActivity, HMDDeviceSetupSessionInternal, NSObject;
@protocol OS_dispatch_queue, HMDDeviceSetupSessionDelegate;

@interface HMDDeviceSetupSession : HMFObject <HMFLogging, HMDDeviceSetupTrackingInfoMutable, HMFMessageReceiver, HMDDeviceSetupTrackingInfoProviding> {
    HMFActivity *_activity;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) HMDDeviceSetupSessionInternal *internal;
@property (nonatomic, getter=isOpen) BOOL open;
@property (readonly) id /* block */ dateFactory;
@property (weak) id<HMDDeviceSetupSessionDelegate> delegate;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long role;
@property (readonly, weak) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSUUID *accessoryUUID;
@property (copy) NSDate *startTime;
@property (copy) NSDate *endTime;
@property (copy) NSError *sessionError;
@property (copy) NSString *category;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (BOOL)isRoleSupported:(long long)a0;

- (void)__registerForMessages;
- (id)messageDispatcher;
- (id)logIdentifier;
- (void)open;
- (void)_closeWithError:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)messageDestination;
- (id)setupTrackingInfo;
- (id)initWithIdentifier:(id)a0 role:(long long)a1 homeManager:(id)a2;
- (id)initWithIdentifier:(id)a0 role:(long long)a1 homeManager:(id)a2 dateFactory:(id /* block */)a3;
- (void)_handleClose:(id)a0;
- (void)_handleReceiveData:(id)a0;
- (void)_sendRequestData:(id)a0;

@end
