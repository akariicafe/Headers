@class NSMutableArray;
@protocol NAScheduler;

@interface MTAgentNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *listeners;
@property (retain, nonatomic) id<NAScheduler> serializer;

+ (double)defaultAssertionTimeOutForNotification:(id)a0 type:(long long)a1;
+ (double)_schedulingAssertionTimeout;

- (void)_registerForAlarmNotifications;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleNotificationWithName:(id)a0 type:(long long)a1;
- (void)_registerForDarwinNotifications;
- (void)registerListener:(id)a0;
- (void)_registerForXPCStream:(id)a0 notificationType:(long long)a1;
- (void)beginListening;
- (void)_registerForDistributedNotifications;
- (void)_registerForLiveDarwinNotification:(id)a0;

@end
