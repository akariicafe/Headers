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

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)loadView;
- (void)expandItem:(id)a0;
- (BOOL)navigationListView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (BOOL)navigationListView:(id)a0 shouldSelectRowAtIndexPath:(id)a1;
- (void)toggleItem:(id)a0;
- (id)itemAtIndex:(long long)a0;
- (void)navigationListView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)styleUpdated;
- (void)navigationListView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)cellSeparatorHeight;
- (BOOL)canExpandItem:(id)a0;
- (id)dequeueReusableStandardCell;
- (id)dequeueReusableDetailCell;
- (id)itemsForItem:(id)a0;
- (BOOL)canSelectItem:(id)a0;
- (struct CGSize { double x0; double x1; })contentSizeForExpandedItem:(id)a0;
- (void)updateNavigationListView;
- (void)reloadNavigationListView;
- (void)updateNavigationListViewSeparatorStyle;
- (void)updateNavigationListViewStateAnimated:(BOOL)a0;
- (void)startTrackingRolloverWithGestureRecognizer:(id)a0;
- (void)stopTrackingRollover;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)itemAtIndexPath:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)viewDidLoad;

@end
