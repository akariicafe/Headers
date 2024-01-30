@class UIColor, NSString, NSArray, SKUIColorScheme, SKUIClientContext, SKUIProductPageHeaderViewController, UITableView, SKUIProductPageTableView, SKUILayoutCache;
@protocol SKUIProductPageChildViewControllerDelegate, SKUIProductPageChildViewController;

@interface SKUIProductPageTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UIColor *_evenColor;
    UIColor *_color;
    SKUIProductPageTableView *_tableView;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (copy, nonatomic) SKUIColorScheme *colorScheme;
@property (copy, nonatomic) NSArray *sections;
@property (retain, nonatomic) SKUILayoutCache *textLayoutCache;
@property (readonly, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<SKUIProductPageChildViewControllerDelegate> delegate;
@property (retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (weak, nonatomic) id<SKUIProductPageChildViewController> delegateSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)_tableView;
- (void)loadView;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_addHeaderView;
- (id)initWithInAppPurchases:(id)a0 clientContext:(id)a1;
- (void)scrollToView:(id)a0 animated:(BOOL)a1;
- (id)_textLayoutRequestWithText:(id)a0;
- (id)initWithReleaseNotes:(id)a0 clientContext:(id)a1;

@end
