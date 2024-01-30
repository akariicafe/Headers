@class EKEvent, EKCalendarEventInvitationNotificationAttendee, EKEventDetailsHighlightControl;

@interface EKEventDetailProposedTimeCell : EKEventDetailCell {
    EKCalendarEventInvitationNotificationAttendee *_attendee;
    EKEventDetailsHighlightControl *_control;
    EKEvent *_event;
}

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (BOOL)update;
- (BOOL)shouldDisplayForEvent;
- (BOOL)hasCustomLayout;
- (id)initWithEvent:(id)a0 andAttendee:(id)a1;

@end
