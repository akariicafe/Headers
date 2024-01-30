@interface SBHLibraryPodCategoryFolderController : SBHLibraryPodFolderController

+ (id)iconLocation;
+ (Class)_contentViewClass;

- (id)currentIconListView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)iconListView:(id)a0 didRemoveIconView:(id)a1;
- (id)contentScrollView;
- (void)viewDidDisappear:(BOOL)a0;
- (void)handleTapGesture:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_logCategoryVisibilityChangedTo:(BOOL)a0;

@end
