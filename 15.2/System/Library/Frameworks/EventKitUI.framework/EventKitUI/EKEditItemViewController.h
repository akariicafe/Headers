@class EKUIRecurrenceAlertController;
@protocol EKEditItemViewControllerDelegate, EKStyleProvider;

@interface EKEditItemViewController : UIViewController <EKEditItemViewControllerProtocol> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialFrame;
    id<EKStyleProvider> _styleProvider;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
}

@property (nonatomic) unsigned long long subitem;
@property (nonatomic) BOOL modal;
@property (nonatomic) BOOL showsDoneButton;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

+ (id)preferredViewControllerForPresentationsFromViewController:(id)a0;

- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (double)marginForTableView:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)cancel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleProvider:(id)a1;
- (void)popIfNonModal;
- (void)saveAndDismissWithExtremePrejudice;
- (void)setCell:(id)a0 checked:(BOOL)a1;
- (BOOL)fitsPopoverWhenKeyboardActive;
- (void)saveAndDismiss;
- (BOOL)validateAllowingAlert:(BOOL)a0;
- (void)_saveAndDismissWithForce:(BOOL)a0;

@end
