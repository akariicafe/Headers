@class EKEventAttendeePicker, NSArray, NSString, EKEvent;

@interface EKEventAttendeesEditViewController : EKEditItemViewController <EKUIManagedViewController> {
    EKEventAttendeePicker *_picker;
    EKEvent *_event;
    BOOL _cancelTapped;
}

@property (nonatomic) BOOL disableShowingButtons;
@property (copy, nonatomic) NSArray *attendees;
@property (nonatomic) BOOL appendOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)viewDidLoad;
- (BOOL)canManagePresentationStyle;
- (void).cxx_destruct;
- (BOOL)wantsManagement;
- (BOOL)isModalInPresentation;
- (void)_doneTapped:(id)a0;
- (id)_attendeeFromRecipient:(id)a0;
- (void)_cancelTapped:(id)a0;
- (id)_createAttendeeFromRecipient:(id)a0;
- (id)_createRecipientFromAttendee:(id)a0;
- (id)_firstInvalidRecipientAddress;
- (id)_recipientFromAttendee:(id)a0;
- (BOOL)editItemShouldBeAskedForInjectableViewController;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 event:(id)a1 overriddenEventStartDate:(id)a2 overriddenEventEndDate:(id)a3;
- (BOOL)prefersToBePresentedFromUINavigationController;
- (BOOL)presentModally;
- (void)setSearchAccountID:(id)a0;
- (BOOL)validateAllowingAlert:(BOOL)a0;
- (BOOL)validateEmailWithString:(id)a0;

@end
