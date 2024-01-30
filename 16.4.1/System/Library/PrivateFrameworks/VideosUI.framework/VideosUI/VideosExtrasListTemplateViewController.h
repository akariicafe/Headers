@class NSIndexPath, NSString, UIImageView, NSArray, NSMapTable, VideosExtrasViewElementViewController, UITableView;

@interface VideosExtrasListTemplateViewController : VideosExtrasTemplateViewController <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    BOOL _tableViewLeft;
    UIImageView *_vignetteView;
    BOOL _relatedContentEmbedded;
    NSArray *_masterViewConstraints;
    NSArray *_detailViewConstraints;
    NSMapTable *_relatedContentViewControllerMap;
    NSIndexPath *_autohighlightIndexPath;
}

@property (retain, nonatomic) VideosExtrasViewElementViewController *relatedContentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)relatedContentViewControllerForElement:(id)a0;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didHighlightRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (BOOL)showsPlaceholder;
- (id)templateElement;
- (void)_addConstraintsToTableView:(id)a0;
- (void)_configureBannerWithElement:(id)a0;
- (void)_configureVignette:(BOOL)a0;
- (void)_embedRelatedContentViewController;
- (void)_prepareLayout;
- (void)_pushRelatedViewController:(id)a0 animated:(BOOL)a1;
- (void)_setDetailContraints;
- (void)_setNavigationConstraints;
- (void)_setRelatedContentEmbedded:(BOOL)a0;
- (void)_unembedRelatedContent;
- (void)_updateForTemplate:(id)a0;
- (void)_updateRelatedContent:(id)a0 forListItem:(id)a1;
- (id)initWithDocument:(id)a0 options:(id)a1 context:(id)a2;
- (BOOL)shouldUpdateByReplacingViewControllerWithTemplate:(id)a0;

@end
