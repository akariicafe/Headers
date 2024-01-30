@interface AATrustedContactNotificationPublisher : NSObject

+ (void)postRecoveryContactChangedNotification;
+ (void)postInheritanceContactChangedNotification;

@end
