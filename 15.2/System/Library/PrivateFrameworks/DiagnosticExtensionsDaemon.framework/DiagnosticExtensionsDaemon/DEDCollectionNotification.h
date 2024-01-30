@interface DEDCollectionNotification : NSObject

+ (id)log;
+ (BOOL)shouldFireNotificationForTransport:(long long)a0;
+ (void)fireNotificationWithFinishingMove:(long long)a0;
+ (void)beginListeningForNotification;
+ (void)postNotificationToNotificationCenterForFinishingMove:(long long)a0;
+ (void)handleDistributedNotification:(id)a0;
+ (void)configureEventStream;

@end
