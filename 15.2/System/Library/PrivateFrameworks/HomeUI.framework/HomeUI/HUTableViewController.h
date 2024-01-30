@class NSString, NSMapTable, NSHashTable;

@interface HUTableViewController : UITableViewController <HUResizableCellDelegate>

@property (retain, nonatomic) NSHashTable *childViewControllersAtViewWillAppearTime;
@property (retain, nonatomic) NSHashTable *childViewControllersAtViewWillDisappearTime;
@property (retain, nonatomic) NSMapTable *installedChildViewControllersKeyedByCell;
@property (nonatomic, getter=isViewLayingOut) BOOL viewLayingOut;
@property (nonatomic) BOOL sectionContentInsetFollowsLayoutMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)contentSizeCategoryDidChange;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)didUpdateRequiredHeightForCell:(id)a0;

@end
