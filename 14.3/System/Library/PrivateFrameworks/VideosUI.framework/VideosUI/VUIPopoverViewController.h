@class UITableView, NSArray, NSString, VUIPopoverDescriptor, UIBarButtonItem;

@interface VUIPopoverViewController : _TVBgImageLoadingViewController <UITableViewDelegate, UITableViewDataSource> {
    BOOL _ignoreDismissalOnExpansionOrContraction;
    BOOL _supportsAutoDismiss;
}

@property (nonatomic) long long expandedRow;
@property (copy, nonatomic) NSArray *popoverEntries;
@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } calculatedPreferredContentSize;
@property (readonly, nonatomic) VUIPopoverDescriptor *popoverDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)_updatePreferredContentSize;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)_dismissViewControllerAnimated:(BOOL)a0;
- (void)updateWithViewElement:(id)a0;
- (id)initWithViewElement:(id)a0;
- (void)_cancelButtonTouchUpInside:(id)a0;
- (id)_modalPresenterPresentedViewController;
- (double)_heightForOptionAtRow:(unsigned long long)a0;

@end
