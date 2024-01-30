@class HMDHomeManager, NSUUID, HMFMessageDispatcher, NSString, HMDUserCloudShareController, NSObject;
@protocol OS_dispatch_queue;

@interface HMDUserCloudShareManager : NSObject <HMFMessageReceiver, HMDUserCloudShareControllerDelegate>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager;
@property (retain, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly, nonatomic) HMDUserCloudShareController *userCloudShareController;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)a0;
- (void)registerForMessages;
- (id)messageDestination;
- (id)initWithHomeManager:(id)a0 dependency:(id)a1;
- (void)handleHomeChangedNotification:(id)a0;
- (void)handleXPCConnectionInvalidated:(id)a0;
- (void)_handleAccessoryAdded:(id)a0;
- (void)_handleEnableMultiUserChangedNotification:(id)a0;
- (void)_handleUserSettingsUpdatedNotification:(id)a0;
- (void)_handleLocalHomeDataRemovedNotification:(id *)a0;
- (void)handleUsersChangedNotification:(id)a0;
- (void)_handleRegisterRequest:(id)a0;
- (void)_postMultiUserStatusChangedNotification;
- (void)userCloudShareController:(id)a0 sendShareRequestMessageWithConnection:(id)a1 fromUser:(id)a2 toUser:(id)a3 home:(id)a4 shareURL:(id)a5 shareToken:(id)a6 containerID:(id)a7 completion:(id /* block */)a8;
- (void)userCloudShareController:(id)a0 sendRepairInfo:(id)a1 toConnection:(id)a2 home:(id)a3 containerID:(id)a4;
- (void)userCloudShareController:(id)a0 wakeClientWithContainerID:(id)a1;
- (void)userCloudShareController:(id)a0 wakeClientForRepairWithContainerID:(id)a1;
- (id)userCloudShareController:(id)a0 timerWithInterval:(double)a1;
- (id)currentDateForUserCloudShareController:(id)a0;
- (void)configureWithMessageDispatcher:(id)a0;
- (void)handleRemoteUserClientCloudShareRequest:(id)a0;
- (void)handleRemoteUserClientCloudShareRepairRequest:(id)a0;
- (void)_handleDeregisterRequest:(id)a0;

@end
