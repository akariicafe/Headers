@interface DEDCollectionNotification : NSObject

+ (id)log;
+ (void)beginListeningForNotification;
+ (void)configureEventStream;
+ (void)fireNotificationWithFinishingMove:(long long)a0;
+ (void)handleDistributedNotification:(id)a0;
+ (void)postNotificationToNotificationCenterForFinishingMove:(long long)a0;
+ (BOOL)shouldFireNotificationForTransport:(long long)a0;

@end
