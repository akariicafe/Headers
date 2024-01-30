@interface SBHLibraryPodCategoryFolderView : SBHLibraryPodFolderView

+ (Class)defaultIconListViewClass;

- (void)_configureIconListView:(id)a0;
- (void)_orientationDidChange:(long long)a0;
- (struct CGSize { double x0; double x1; })_iconSpacingForIconListView;
- (BOOL)isLibraryPodCategoryFolderView;

@end
