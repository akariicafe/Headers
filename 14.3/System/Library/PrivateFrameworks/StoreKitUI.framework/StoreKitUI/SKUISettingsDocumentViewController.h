@class SKUISettingsEditTransaction, NSString, SKUIViewElementLayoutContext, SKUIResourceLoader, SKUISettingsGroupsDescription, SKUISettingsContext, SKUISettingsTemplateViewElement, UITableView, SKUIViewElementTextLayoutCache, UIBarButtonItem;

@interface SKUISettingsDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUISettingsDocumentViewDelegate, SKUISettingsEditTransactionDelegate, SKUISettingsGroupsDescriptionDelegate, UITableViewDataSource, UITableViewDelegate, SKUIDocumentViewController> {
    UIBarButtonItem *_barButtonItemCancel;
    UIBarButtonItem *_barButtonItemDone;
    UIBarButtonItem *_barButtonItemEdit;
    SKUISettingsEditTransaction *_editTransaction;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIResourceLoader *_resourceLoader;
    SKUISettingsContext *_settingsContext;
    SKUISettingsGroupsDescription *_settingsGroupsDescription;
    UITableView *_tableView;
    SKUISettingsTemplateViewElement *_templateElement;
    SKUIViewElementTextLayoutCache *_textLayoutCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_settingsGroupsFromTemplateElement:(id)a0 withDelegate:(id)a1 settingsContext:(id)a2;
+ (double)_heightThatFitsWidth:(double)a0 withSettingsHeaderFooterDescription:(id)a1 context:(id)a2;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)_tableView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)_reloadData;
- (id)_resourceLoader;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_cancelButtonAction:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)_layoutContext;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)_invalidateLayout;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)documentDidUpdate:(id)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)_textLayoutCache;
- (void)_doneButtonAction:(id)a0;
- (void)settingsDocumentViewDidChangeTintColor:(id)a0;
- (id)initWithTemplateElement:(id)a0 clientContext:(id)a1;
- (void)_deselectItemsAnimated:(BOOL)a0;
- (id)_viewForSettingsHeaderFooterDescription:(id)a0;
- (void)_showEditBarButtonItemAnimated:(BOOL)a0;
- (id)_barButtonItemDone;
- (void)_showEditingBarButtonItemsEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)_editButtonAction:(id)a0;
- (id)_barButtonItemEdit;
- (void)_showBarItemLeft:(id)a0 right:(id)a1 animated:(BOOL)a2;
- (id)_barButtonItemCancel;
- (id)_dequeueHeaderFooterViewWithReuseIdentifier:(id)a0;
- (void)settingsEditTransactionDidCompleteTransaction:(id)a0;
- (void)settingsEditTransactionDidFailTransaction:(id)a0;
- (void)settingsEditTransactionWillBeginTransaction:(id)a0;
- (void)settingsEditTransactionWillCommitTransaction:(id)a0;
- (id)owningViewControllerForSettingsGroupsDescription:(id)a0;
- (void)settingsGroupsDescription:(id)a0 deletedSettingAtIndexPath:(id)a1;
- (void)settingsGroupsDescription:(id)a0 deletedSettingsGroupAtIndex:(unsigned long long)a1;
- (void)settingsGroupsDescription:(id)a0 didUpdateSettingsDescription:(id)a1;
- (void)settingsGroupsDescription:(id)a0 dismissViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)settingsGroupsDescription:(id)a0 presentViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)settingsGroupsDescription:(id)a0 viewForSettingAtIndexPath:(id)a1;
- (void)settingsGroupsDescriptionDidUpdateValidity:(id)a0;
- (void)settingsEditTransaction:(id)a0 isValid:(BOOL)a1;

@end
