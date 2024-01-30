@interface SBHLibraryPodCategoryFolderController : SBHLibraryPodFolderController

+ (Class)_contentViewClass;
+ (id)iconLocation;

- (void)iconListView:(id)a0 didRemoveIconView:(id)a1;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)currentIconListView;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleTapGesture:(id)a0;
- (void)_logCategoryVisibilityChangedTo:(BOOL)a0;

@end
