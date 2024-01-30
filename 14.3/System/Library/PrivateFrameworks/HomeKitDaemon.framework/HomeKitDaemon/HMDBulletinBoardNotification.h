@class NSString, HMFMessageDispatcher, HMDBulletinBoardNotificationServiceGroup, NSPredicate, NSUUID, NSObject, HMDService;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDBulletinBoardNotification : HMFObject <NSSecureCoding, HMFMessageReceiver, HMFLogging, HMFDumpState> {
    id<HMFLocking> _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, weak, nonatomic) HMDService *service;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) NSPredicate *condition;
@property (retain, nonatomic) HMDBulletinBoardNotificationServiceGroup *notificationServiceGroup;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)supportsBulletinNotificationGroup:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)attributeDescriptions;
- (id)initWithService:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;
- (void)registerForCharacteristicNotifications;
- (void)configureMsgDispatcher:(id)a0;
- (void)configureBulletinNotification;
- (void)registerNotificationHandlers;
- (void)_handleBulletinBoardNotificationCommitRequest:(id)a0;

@end
