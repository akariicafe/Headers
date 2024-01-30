@class NSArray, SKUIClientContext, NSURL, NSString, SKUICategoryArtworkLoader, SKUICategory;
@protocol SKUICategoryTableViewControllerDelegate;

@interface SKUICategoryTableViewController : UITableViewController <SKUICategoryArtworkLoaderObserver, SKUICategoryTableViewControllerDelegate> {
    BOOL _childrenHaveArtwork;
}

@property (retain, nonatomic) SKUICategoryArtworkLoader *artworkLoader;
@property (retain, nonatomic) SKUICategory *category;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUICategoryTableViewControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *metricsLocations;
@property (nonatomic) long long numberOfHiddenRows;
@property (retain, nonatomic) NSURL *selectedURL;
@property (retain, nonatomic) NSURL *defaultURL;
@property (nonatomic, getter=isRoot) BOOL root;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_doneButtonAction:(id)a0;
- (id)_categoryAtIndexPath:(id)a0;
- (void)categoryTableView:(id)a0 didSelectCategory:(id)a1;
- (id)metricsPageContextForCategoryTableView:(id)a0;
- (void)_recordClickEventForIndexPath:(id)a0 category:(id)a1 actionType:(id)a2;
- (id)_metricsLocationsToPushIndexPath:(id)a0;
- (long long)_metricsLocationPostionForIndexPath:(id)a0;
- (void)categoryArtworkLoader:(id)a0 didLoadImage:(id)a1 forCategory:(id)a2;

@end
