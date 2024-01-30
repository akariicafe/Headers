@class HMDDeviceSetupSessionInternal, NSUUID, HMDHomeManager, NSString, NSObject, HMFActivity;
@protocol OS_dispatch_queue, HMDDeviceSetupSessionDelegate;

@interface HMDDeviceSetupSession : HMFObject <HMFLogging, HMFMessageReceiver> {
    HMFActivity *_activity;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) HMDDeviceSetupSessionInternal *internal;
@property (nonatomic, getter=isOpen) BOOL open;
@property (weak) id<HMDDeviceSetupSessionDelegate> delegate;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long role;
@property (readonly, weak) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (BOOL)isRoleSupported:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_closeWithError:(id)a0;
- (id)messageDispatcher;
- (BOOL)isEqual:(id)a0;
- (void)open;
- (id)messageDestination;
- (id)logIdentifier;
- (void)__registerForMessages;
- (void)_handleClose:(id)a0;
- (void)_handleReceiveData:(id)a0;
- (void)_sendRequestData:(id)a0;
- (id)initWithIdentifier:(id)a0 role:(long long)a1 homeManager:(id)a2;

@end
