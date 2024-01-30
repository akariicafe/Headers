@class CALNNotificationAction;

@interface CALNTriggeredEventNotificationActionUtilities : NSObject

@property (class, readonly, nonatomic) CALNNotificationAction *snoozeAction;
@property (class, readonly, nonatomic) CALNNotificationAction *directionsAction;
@property (class, readonly, nonatomic) CALNNotificationAction *conferenceCallAction;
@property (class, readonly, nonatomic) CALNNotificationAction *mailOrganizerAction;

@end
