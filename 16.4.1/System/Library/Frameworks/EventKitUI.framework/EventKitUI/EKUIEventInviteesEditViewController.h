@class EKEvent, EKUIEventInviteesViewController, NSDate;

@interface EKUIEventInviteesEditViewController : EKEditItemViewController {
    EKEvent *_event;
    EKUIEventInviteesViewController *_controller;
}

@property (readonly, nonatomic) NSDate *selectedStartDate;
@property (readonly, nonatomic) NSDate *selectedEndDate;

- (id)initWithEvent:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;

@end
