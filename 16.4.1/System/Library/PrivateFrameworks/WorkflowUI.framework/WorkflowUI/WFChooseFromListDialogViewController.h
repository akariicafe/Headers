@class WFChooseFromListDialogCell, NSCache, NSMutableDictionary, NSString, NSMutableArray, UITableView;

@interface WFChooseFromListDialogViewController : WFCompactDialogViewController <UITableViewDataSource, UITableViewDelegatePrivate, WFCompactPlatterContentClippingDelegate>

@property (weak, nonatomic) UITableView *listTableView;
@property (retain, nonatomic) NSMutableArray *selectedItems;
@property (retain, nonatomic) WFChooseFromListDialogCell *prototypeCell;
@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) NSMutableDictionary *cachedAggregateHeightsByWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithRequest:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)configureCell:(id)a0 forIndexPath:(id)a1;
- (BOOL)shouldInstallBannerDimmingLayer;
- (BOOL)allowsInteractiveDismiss;
- (double)contentHeightForWidth:(double)a0 withMaximumVisibleHeight:(double)a1;
- (void)finishWithSelectedItems;
- (void)platterView:(id)a0 didUpdateContentVerticalOffset:(double)a1;

@end
