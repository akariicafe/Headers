@class EKEvent, EKUIEventInviteesViewController, NSDate;

@interface EKUIEventInviteesEditViewController : EKEditItemViewController {
    EKEvent *_event;
    EKUIEventInviteesViewController *_controller;
}

@property (readonly, nonatomic) NSDate *selectedStartDate;
@property (readonly, nonatomic) NSDate *selectedEndDate;

- (id)initWithEvent:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;

@end
