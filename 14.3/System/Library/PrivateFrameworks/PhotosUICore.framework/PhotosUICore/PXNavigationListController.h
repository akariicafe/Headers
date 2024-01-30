@class NSString, NSUserActivity, PXNavigationListDataSection, PXNavigationListDataSectionManager, UITableView;
@protocol PXNavigationListContainer;

@interface PXNavigationListController : UIViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, PXNavigationListDataSectionManagerObserver>

@property (retain, nonatomic) PXNavigationListDataSection *dataSection;
@property (retain, nonatomic) NSUserActivity *siriActionActivity;
@property (nonatomic) double rowHeight;
@property (nonatomic, setter=_setNeedsUpdateRowHeight:) BOOL _needsUpdateRowHeight;
@property (readonly, nonatomic) PXNavigationListDataSectionManager *dataSectionManager;
@property (weak, nonatomic) id<PXNavigationListContainer> container;
@property (readonly, nonatomic) double contentHeight;
@property (readonly, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL allowsNavigation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)navigateToListItem:(id)a0 sourceViewController:(id)a1 existingAssetsFetchResult:(id)a2 animated:(BOOL)a3 completion:(id /* block */)a4;

- (void)_updateTableView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)contentHeightDidChange;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)loadView;
- (id)_createTransparentFullWidthViewOfHeight:(double)a0;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithDataSectionManager:(id)a0;
- (double)_contentHeightForDataSection:(id)a0;
- (double)_rowHeightForCurrentFont;
- (void)_updateCell:(id)a0 atIndexPath:(id)a1;
- (void)_updateCellSeparatorStyle:(id)a0 forRowAtIndexPath:(id)a1;
- (id)_navigateTolistItem:(id)a0 animated:(BOOL)a1;
- (void)_preferredContentSizeChanged:(id)a0;

@end
