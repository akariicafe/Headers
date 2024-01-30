@class NSUUID, NSString, NSPredicate, HMBulletinBoardNotificationServiceGroup, _HMContext, NSObject, HMService, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMBulletinBoardNotification : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver, HMFLogging> {
    HMFUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *targetUUID;
@property (readonly, copy, nonatomic) NSString *logID;
@property (retain, nonatomic) _HMContext *context;
@property (readonly, weak, nonatomic) HMService *service;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) NSPredicate *condition;
@property (readonly, nonatomic) HMBulletinBoardNotificationServiceGroup *notificationServiceGroup;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)commitWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)_unconfigureContext;
- (void)_unconfigure;
- (void)_commitWithCompletionHandler:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)_handleBulletinBoardNotificationUpdateNotification:(id)a0;
- (void)_callBulletinBoardNotificationUpdatedDelegate;
- (void)__configureWithContext:(id)a0;
- (id)initWithEnabled:(BOOL)a0 condition:(id)a1;
- (void)_registerNotificationHandlers;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
