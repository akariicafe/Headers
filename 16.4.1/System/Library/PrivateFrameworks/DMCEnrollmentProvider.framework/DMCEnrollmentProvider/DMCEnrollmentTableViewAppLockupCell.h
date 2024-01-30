@class NSString, ASCLockupView, NSNumber, UIViewController;

@interface DMCEnrollmentTableViewAppLockupCell : UITableViewCell <ASCLockupViewDelegate, DMCEnrollmentTableViewCellDataSource>

@property (retain, nonatomic) ASCLockupView *lockupView;
@property (retain, nonatomic) NSNumber *iTunesItemID;
@property (weak) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)cell;
- (double)estimatedCellHeight;
- (id)presentingViewControllerForLockupView:(id)a0;
- (double)cellHeight;
- (id)initWithLockupRequest:(id)a0 lockupViewGroup:(id)a1 presentingViewController:(id)a2;

@end
