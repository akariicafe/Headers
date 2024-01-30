@class UITableView, TFFeedbackFormPresenter, UIActivityIndicatorView, TFFeedbackFormViewDataSource, UIBarButtonItem;

@interface TFFeedbackFormViewController : UIViewController <TFFeedbackFormPresenterView>

@property (readonly, nonatomic) TFFeedbackFormViewDataSource *viewDataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) UIBarButtonItem *submitButtonItem;
@property (readonly, nonatomic) UIBarButtonItem *activityItem;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (readonly, nonatomic) TFFeedbackFormPresenter *presenter;

- (void)registerNotifications;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithPresenter:(id)a0;
- (void)submitButtonPressed:(id)a0;
- (void)showSubmitButtonForSubmissionPendingState:(BOOL)a0;
- (void)unregisterNotifications;
- (void)adjustContentOffsetForKeyboardNotification:(id)a0;
- (void)setNavigationItemTitle:(id)a0;
- (void)prepareForEntryType:(unsigned long long)a0;
- (void)reloadEntryGroupsAtIndices:(id)a0;
- (void)reloadEntriesAtIndexPaths:(id)a0;
- (void)showErrorAlertWithTitle:(id)a0 message:(id)a1;

@end
