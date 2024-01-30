@class UITableView, NSString, UIAutoRespondingScrollViewControllerKeyboardSupport, _UIFilteredDataSource, UITableViewDataSource, UIScrollView, UIRefreshControl;
@protocol _UIKeyboardAutoRespondingScrollView;

@interface UITableViewController : UIViewController <_UIKeyboardAutoRespondingScrollViewController, UITableViewFocusDelegateLegacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, UITableViewDelegate, UITableViewDataSource> {
    long long _tableViewStyle;
    UIAutoRespondingScrollViewControllerKeyboardSupport *_keyboardSupport;
    UITableViewDataSource *_staticDataSource;
    struct { unsigned char clearsSelectionOnViewWillAppear : 1; unsigned char insetsApplied : 1; unsigned char adjustingInsets : 1; } _tableViewControllerFlags;
    _UIFilteredDataSource *_filteredDataSource;
    long long _filteredDataType;
}

@property (retain, nonatomic, getter=_staticDataSource, setter=_setStaticDataSource:) UITableViewDataSource *staticDataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL clearsSelectionOnViewWillAppear;
@property (retain, nonatomic) UIRefreshControl *refreshControl;
@property (readonly, retain, nonatomic, getter=_scrollView) UIScrollView<_UIKeyboardAutoRespondingScrollView> *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)willPresentPreviewViewController:(id)a0 forPosition:(struct CGPoint { double x0; double x1; })a1 inSourceView:(id)a2;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)willPresentPreviewViewController:(id)a0 forRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)_willChangeToIdiom:(long long)a0 onScreen:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (BOOL)_shouldRespondToPreviewingMethods;
- (id)previewViewControllerForLocation:(struct CGPoint { double x0; double x1; })a0 inSourceView:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)willPresentPreviewViewController:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inSourceView:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)_filteredDataType;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 indentationLevelForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)_viewControllerWasSelected;
- (void)viewWillAppear:(BOOL)a0;
- (void)_limitedUIDidChange;
- (id)previewingContext:(id)a0 viewControllerForLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)_existingTableView;
- (void)_setFilteredDataType:(long long)a0;
- (void)_applyDefaultDataSourceToTable:(id)a0;
- (void)_refreshFilteredDataSourceFilterTypeForScreen:(id)a0;
- (long long)_resolvedDataSourceFilterTypeForScreen:(id)a0;
- (id)previewViewControllerForRowAtIndexPath:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)previewingContext:(id)a0 commitViewController:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
