@class CALNNotificationAction;

@interface CALNTriggeredEventNotificationActionUtilities : NSObject

@property (class, readonly, nonatomic) CALNNotificationAction *snoozeAction;
@property (class, readonly, nonatomic) CALNNotificationAction *snoozeFor5MinutesAction;
@property (class, readonly, nonatomic) CALNNotificationAction *snoozeFor15MinutesAction;
@property (class, readonly, nonatomic) CALNNotificationAction *snoozeFor30MinutesAction;
@property (class, readonly, nonatomic) CALNNotificationAction *snoozeFor1HourAction;
@property (class, readonly, nonatomic) CALNNotificationAction *snoozeUntil30MinutesBeforeAction;
@property (class, readonly, nonatomic) CALNNotificationAction *snoozeUntil15MinutesBeforeAction;
@property (class, readonly, nonatomic) CALNNotificationAction *snoozeUntil5MinutesBeforeAction;
@property (class, readonly, nonatomic) CALNNotificationAction *snoozeUntilStartTimeAction;
@property (class, readonly, nonatomic) CALNNotificationAction *snoozeUntilEndTimeAction;
@property (class, readonly, nonatomic) CALNNotificationAction *directionsAction;
@property (class, readonly, nonatomic) CALNNotificationAction *conferenceCallAction;
@property (class, readonly, nonatomic) CALNNotificationAction *mailOrganizerAction;

@end
