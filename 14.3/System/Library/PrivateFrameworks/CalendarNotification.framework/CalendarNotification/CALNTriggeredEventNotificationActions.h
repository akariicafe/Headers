@class NSString;

@interface CALNTriggeredEventNotificationActions : NSObject <CALNTriggeredEventNotificationActionUpdater, CALNTriggeredEventNotificationResponseLaunchURLProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_mailOrganizerActionForNotification:(id)a0;
+ (id)_mailtoURLForNotification:(id)a0;

- (id)updatedActionsForNotification:(id)a0 existingActions:(id)a1;
- (id)launchURLForResponse:(id)a0;

@end
