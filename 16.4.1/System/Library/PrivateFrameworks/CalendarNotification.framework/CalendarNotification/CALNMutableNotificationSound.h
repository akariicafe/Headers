@class NSString;

@interface CALNMutableNotificationSound : CALNNotificationSound

@property (copy, nonatomic) NSString *alertTopic;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAlertTopic:(id)a0;

@end
