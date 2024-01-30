@class NSArray, NSString, CNUINavigationListView, CNUINavigationListItem, CNUINavigationListViewCellHeightEstimator;
@protocol CNUINavigationListStyle, CNUINavigationListViewControllerDelegate;

@interface CNUINavigationListViewController : UIViewController <CNUINavigationListViewDataSource, CNUINavigationListViewDelegate, UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) CNUINavigationListView *navigationListView;
@property (retain, nonatomic) CNUINavigationListViewCellHeightEstimator *cellHeightEstimator;
@property (retain, nonatomic) CNUINavigationListItem *displayedExpandedItem;
@property (nonatomic) BOOL ignoreParentControllerResize;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) CNUINavigationListItem *expandedItem;
@property (weak, nonatomic) id<CNUINavigationListViewControllerDelegate> delegate;
@property (retain, nonatomic) id<CNUINavigationListStyle> navigationListStyle;
@property (nonatomic) long long contentAlignment;
@property (nonatomic) BOOL showFirstSectionTopSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)itemRequiresDetailCell:(id)a0;

- (id)itemAtIndexPath:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)itemAtIndex:(long long)a0;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)viewDidLoad;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (BOOL)canExpandItem:(id)a0;
- (BOOL)canSelectItem:(id)a0;
- (double)cellSeparatorHeight;
- (struct CGSize { double x0; double x1; })contentSizeForExpandedItem:(id)a0;
- (id)dequeueReusableDetailCell;
- (id)dequeueReusableStandardCell;
- (void)expandItem:(id)a0;
- (id)itemsForItem:(id)a0;
- (void)navigationListView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)navigationListView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)navigationListView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (BOOL)navigationListView:(id)a0 shouldSelectRowAtIndexPath:(id)a1;
- (void)reloadNavigationListView;
- (void)startTrackingRolloverWithGestureRecognizer:(id)a0;
- (void)stopTrackingRollover;
- (void)styleUpdated;
- (void)toggleItem:(id)a0;
- (void)updateNavigationListView;
- (void)updateNavigationListViewStateAnimated:(BOOL)a0;

@end
