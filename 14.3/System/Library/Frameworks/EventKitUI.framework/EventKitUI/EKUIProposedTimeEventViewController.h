@class EKUIInviteesViewMessageSendingManager, EKCalendarEventInvitationNotificationAttendee, EKUIRecurrenceAlertController;
@protocol EKEditItemViewControllerDelegate;

@interface EKUIProposedTimeEventViewController : EKEventViewController <EKEditItemViewControllerProtocol>

@property (retain) EKCalendarEventInvitationNotificationAttendee *proposedTimeAttendee;
@property (retain) EKUIRecurrenceAlertController *recurrenceAlertController;
@property (retain) EKUIInviteesViewMessageSendingManager *messageSendingManager;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

- (id)proposedTime;
- (void).cxx_destruct;
- (id)viewTitle;
- (id)initWithProposedTimeAttendee:(id)a0;
- (id)items;
- (id)_statusButtons;
- (void)invokeAction:(long long)a0 eventStatusButtonsView:(id)a1;

@end
