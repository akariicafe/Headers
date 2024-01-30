@interface SBHLibraryPodCategoryFolderController : SBHLibraryPodFolderController

+ (id)iconLocation;
+ (Class)_contentViewClass;

- (id)contentScrollView;
- (void)iconListView:(id)a0 didRemoveIconView:(id)a1;
- (id)currentIconListView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)handleTapGesture:(id)a0;
- (void)_logCategoryVisibilityChangedTo:(BOOL)a0;
- (void)viewDidLoad;

@end
