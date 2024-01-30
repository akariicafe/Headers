@class NSUUID, NSString, NSSet, HMDRemoteLoginReceiver, HMFMessageDispatcher, NSObject, ACAccount, HMDAppleMediaAccessory, HMDRemoteLoginAnisetteDataHandler, HMDRemoteLoginInitiator;
@protocol OS_dispatch_queue;

@interface HMDRemoteLoginHandler : HMFObject <HMDHomeMessageReceiver, HMFLogging, NSSecureCoding>

@property (class, readonly) BOOL hasMessageReceiverChildren;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) HMDRemoteLoginInitiator *initiator;
@property (readonly, nonatomic) HMDRemoteLoginReceiver *receiver;
@property (readonly, weak, nonatomic) HMDAppleMediaAccessory *accessory;
@property (readonly, nonatomic) HMDRemoteLoginAnisetteDataHandler *anisetteDataHandler;
@property (retain, nonatomic) ACAccount *loggedInAccount;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)remoteMessages;

- (void).cxx_destruct;
- (void)registerForMessages;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void)_initialize;
- (void)configureWithWorkQueue:(id)a0 messageDispatcher:(id)a1;
- (void)_updateLoggedInAccount:(id)a0;
- (id)initWithAccessory:(id)a0 loggedInAccountData:(id)a1;
- (void)_registerForUsernameUpdates;
- (void)_handleRemoteLoginAccount:(id)a0 message:(id)a1;
- (void)__handleUpdateLoggedInAccount:(id)a0;
- (void)_sendAccountUpdateNotification:(id)a0;
- (void)handleAccountUsernameUpdatedOnCurrentDevice:(id)a0;

@end
