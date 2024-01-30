@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDHomeRemoteNotificationHandler : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSString *logID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)logIdentifier;
- (void)sendNotifications:(id)a0 notificationUpdateIdentifier:(id)a1;
- (void)_sendNotifications:(id)a0 notificationUpdateIdentifier:(id)a1;
- (void)sendConfigureBulletinNotification:(id)a0;

@end
