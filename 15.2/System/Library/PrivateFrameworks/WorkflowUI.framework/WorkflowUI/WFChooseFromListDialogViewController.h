@class WFChooseFromListDialogCell, NSCache, NSString, NSMutableArray, UITableView;

@interface WFChooseFromListDialogViewController : WFCompactDialogViewController <UITableViewDataSource, UITableViewDelegatePrivate, WFCompactPlatterContentClippingDelegate>

@property (weak, nonatomic) UITableView *listTableView;
@property (retain, nonatomic) NSMutableArray *selectedItems;
@property (retain, nonatomic) WFChooseFromListDialogCell *prototypeCell;
@property (retain, nonatomic) NSCache *imageCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)configureCell:(id)a0 forIndexPath:(id)a1;
- (void)platterView:(id)a0 didUpdateContentVerticalOffset:(double)a1;
- (void)finishWithSelectedItems;
- (double)contentHeightForWidth:(double)a0 withMaximumVisibleHeight:(double)a1;

@end
