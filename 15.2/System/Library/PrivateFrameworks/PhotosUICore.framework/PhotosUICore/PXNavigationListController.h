@class UIFont, NSString, PXNavigationListDataSectionManager, UITableViewCell, UIImage, NSMutableDictionary, NSUserActivity, PXNavigationListDataSection, UITableView, NSDate, NSMutableSet;

@interface PXNavigationListController : UIViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, PXNavigationListDataSectionManagerObserver> {
    PXNavigationListDataSection *_dataSection;
    UIFont *_textLabelFont;
    UIFont *_detailTextLabelFont;
    NSMutableDictionary *_rowHeightCache;
    double _layoutWidth;
    double _currentContentHeight;
    UITableViewCell *_measuringCell;
    UIImage *_measuringImage;
    NSDate *_firstPreloadCacheStartTime;
    NSMutableSet *_queuedCacheKeys;
}

@property (retain, nonatomic) NSUserActivity *siriActionActivity;
@property (readonly, nonatomic) UITableView *tableView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) PXNavigationListDataSectionManager *dataSectionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerLog;
+ (id)_rowHeightCachingQueue;
+ (id)navigateToListItem:(id)a0 sourceViewController:(id)a1 existingAssetsFetchResult:(id)a2 animated:(BOOL)a3 completion:(id /* block */)a4;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadView;
- (void)contentHeightDidChange;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_preferredContentSizeChanged:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_textLabelFont;
- (id)_detailTextLabelFont;
- (id)initWithDataSectionManager:(id)a0;
- (void)_preloadRowHeightCache;
- (BOOL)_skipPreloadTaskIfNecessary;
- (void)_reportContentHeightDidChangeIfNecessary;
- (double)_contentHeightForWidth:(double)a0 dataSection:(id)a1;
- (double)_contentHeightForCellWithWidth:(double)a0 listItem:(id)a1;
- (double)contentHeightForWidth:(double)a0;
- (void)_updateDataSection;
- (void)_resetFonts;
- (void)_resetCachedHeight;
- (void)_resetCachedMeasuringCell;
- (void)_configureCell:(id)a0 forListItem:(id)a1 textColor:(id)a2;
- (void)_tableView:(id)a0 updateCellSeparatorStyle:(id)a1 forRowAtIndexPath:(id)a2;
- (id)_navigateTolistItem:(id)a0 animated:(BOOL)a1;
- (void)_preloadRowHeightsForAllValidItems;
- (void)_finishedAllPreloadTasks;
- (double)_insetWidth;

@end
