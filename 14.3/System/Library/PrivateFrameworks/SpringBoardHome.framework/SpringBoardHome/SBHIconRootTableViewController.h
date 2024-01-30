@class UIView, NSString, _UILegibilitySettings, NSSet, SBHIconImageCache, SBFolderIconImageCache, SBFolder, UIViewController;

@interface SBHIconRootTableViewController : UITableViewController <SBHIconRootViewProviding>

@property (retain, nonatomic) SBFolder *folder;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) UIViewController *deepestFolderController;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property (readonly, nonatomic, getter=isScrollTracking) BOOL scrollTracking;
@property (nonatomic) long long currentPageIndex;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPresentingIconLocation:(id)a0;
- (void)setIdleText:(id)a0;
- (void)enumerateDisplayedIconViewsForIcon:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)setCurrentPageIndex:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)firstIconViewForIcon:(id)a0 excludingLocations:(id)a1;
- (BOOL)isDisplayingIconView:(id)a0 inLocation:(id)a1;
- (BOOL)isDisplayingIcon:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)iconViewForIcon:(id)a0 location:(id)a1;
- (id)firstIconViewForIcon:(id)a0;
- (void)revealIcon:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isDisplayingIcon:(id)a0 inLocation:(id)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)firstIconViewForIcon:(id)a0 inLocations:(id)a1;
- (BOOL)isDisplayingIconView:(id)a0;
- (BOOL)isDisplayingIcon:(id)a0 inLocations:(id)a1;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)a0;
- (void)noteUserIsInteractingWithIcons;
- (void)cancelScrolling;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;

@end
