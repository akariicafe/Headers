@interface _HDHealthRecordsAPIReminderRegistryEventListener : NSObject

@property (copy, nonatomic) id /* block */ handledApplicationsUninstalledHandler;
@property (copy, nonatomic) id /* block */ displayedAlertHandler;
@property (copy, nonatomic) id /* block */ droppedReminderHandler;
@property (copy, nonatomic) id /* block */ finishedProcessingReminderHandler;
@property (copy, nonatomic) id /* block */ launchedClinicalSourceSettingsHandler;
@property (copy, nonatomic) id /* block */ startedListeningForHomescreenUnlockedNotificationsHandler;
@property (copy, nonatomic) id /* block */ receivedHomescreenUnlockedAtHomescreenNotificationHandler;
@property (copy, nonatomic) id /* block */ stoppedListeningForHomescreenUnlockedNotificationsHandler;

- (void).cxx_destruct;
- (void)droppedReminder:(id)a0;
- (void)displayedAlertForPendingReminderID:(id)a0;
- (void)launchedClinicalSettingsForSource:(id)a0;
- (void)didFinishProcessingPendingReminderID:(id)a0;
- (void)handledApplicationsUninstalled;
- (void)startedListeningForHomescreenUnlockedNotifications;
- (void)stoppedListeningForHomescreenUnlockedNotifications;
- (void)receivedHomescreenUnlockedAtHomescreenNotification;

@end
