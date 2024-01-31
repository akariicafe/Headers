@class NSRecursiveLock, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ACCUserNotificationManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *userNotifications;
@property (retain, nonatomic) NSMutableDictionary *completionHandlers;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)dismissNotificationWithIdentifier:(id)a0;
- (void)dismissNotification:(id)a0;
- (void)dismissNotificationsWithGroupIdentifier:(id)a0;
- (void)dismisssAllNotifications;
- (void)presentNotification:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeUserNotification:(id)a0;
- (id)userNotificationWithUUID:(id)a0;

@end
