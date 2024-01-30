@class NSArray;

@interface SFManageWebExtensionsViewController : UITableViewController <WBSExtensionsControllerObserver> {
    NSArray *_extensions;
}

@property (readonly, nonatomic) BOOL isPresentingFromPageFormatMenu;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_reload;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initFromPageFormatMenu:(BOOL)a0;
- (void)extensionsControllerExtensionListDidChange:(id)a0;
- (void)_updateLastViewedDate;
- (void)_extensionStateWasToggled:(id)a0;
- (void)_setExtensionStateForExtension:(id)a0 isOn:(BOOL)a1;
- (void)_enableExtensionPromptingForNewTabOverrideIfNecessary:(id)a0;
- (void)_enableExtensionWithNewTabOverridePage:(id)a0;

@end
