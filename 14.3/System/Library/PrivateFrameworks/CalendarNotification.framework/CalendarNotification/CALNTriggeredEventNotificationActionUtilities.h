@class UNNotificationAction;

@interface CALNTriggeredEventNotificationActionUtilities : NSObject

@property (class, readonly, nonatomic) UNNotificationAction *snoozeAction;
@property (class, readonly, nonatomic) UNNotificationAction *directionsAction;
@property (class, readonly, nonatomic) UNNotificationAction *conferenceCallAction;

@end
