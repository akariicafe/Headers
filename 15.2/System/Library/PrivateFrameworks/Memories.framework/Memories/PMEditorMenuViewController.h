@class NSString, VEKProduction, PMTitleEditorProvider, NSIndexPath, UITableView;
@protocol PMEditorMenuViewControllerDelegate;

@interface PMEditorMenuViewController : PMEditorBasePlayerViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) VEKProduction *production;
@property (retain, nonatomic) PMTitleEditorProvider *titleProvider;
@property (weak, nonatomic) id<PMEditorMenuViewControllerDelegate> menuDelegate;
@property (nonatomic) BOOL showingActivityIndicatorForContentEditor;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)_updateFonts;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)popFromNavigationController;
- (id)_normalizedIndexPathForRow:(long long)a0 inSection:(long long)a1;
- (id)_getTimeStringFromSeconds:(double)a0;

@end
