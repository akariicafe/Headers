@class NSMutableArray;
@protocol NAScheduler;

@interface MTAgentNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *listeners;
@property (retain, nonatomic) id<NAScheduler> serializer;

+ (double)_schedulingAssertionTimeout;
+ (double)defaultAssertionTimeOutForNotification:(id)a0 type:(long long)a1;

- (void)_registerForDarwinNotifications;
- (void)_registerForXPCStream:(id)a0 notificationType:(long long)a1;
- (void)_registerForLiveDarwinNotification:(id)a0;
- (void)_handleNotificationWithName:(id)a0 type:(long long)a1;
- (void)beginListening;
- (void).cxx_destruct;
- (id)init;
- (void)_registerForDistributedNotifications;
- (void)dealloc;
- (void)registerListener:(id)a0;
- (void)_registerForAlarmNotifications;

@end
