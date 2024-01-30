@class SBHIconModel;
@protocol SBHIconStateUnarchiverIconSource, SBHIconStateUnarchiverDelegate;

@interface SBHIconStateUnarchiver : NSObject

@property (readonly, nonatomic) id archive;
@property (readonly, nonatomic) BOOL postNewsWidgetMigration;
@property (retain, nonatomic) SBHIconModel *iconModel;
@property (retain, nonatomic) id<SBHIconStateUnarchiverIconSource> iconSource;
@property (retain, nonatomic) id<SBHIconStateUnarchiverDelegate> delegate;
@property (nonatomic) BOOL removesEmptyFolders;

+ (void)_getFolderDisplayName:(id *)a0 defaultDisplayName:(id *)a1 uniqueIdentifier:(id *)a2 forRepresentation:(id)a3 iconSource:(id)a4;

- (id)_listWithIcons:(id)a0 listGridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a1 listWithNonDefaultSizedIconsGridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a2 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; })a3 listRotatedLayoutClusterGridSizeClass:(unsigned long long)a4 listAllowedGridSizeClasses:(unsigned long long)a5 listAddOptions:(unsigned long long)a6 identifier:(id)a7 folder:(id)a8 overflow:(id)a9;
- (id)_listFromRepresentation:(id)a0 listGridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a1 listWithNonDefaultSizedIconsGridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a2 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; })a3 listRotatedLayoutClusterGridSizeClass:(unsigned long long)a4 listAllowedGridSizeClasses:(unsigned long long)a5 listAddOptions:(unsigned long long)a6 identifier:(id)a7 context:(id)a8 overflow:(id)a9;
- (unsigned long long)_listRotatedLayoutClusterGridSizeClass;
- (BOOL)_listsAllowRotatedLayoutForFolderClass:(Class)a0;
- (id)initWithArchive:(id)a0;
- (id)_nodeFromRepresentation:(id)a0 context:(id)a1;
- (struct SBHIconGridSize { unsigned short x0; unsigned short x1; })_listGridSizeForFolderClass:(Class)a0;
- (id)unarchive;
- (id)_iconFromRepresentation:(id)a0 withContext:(id)a1;
- (unsigned long long)_allowedGridSizeClassesForTodayList;
- (void)_getFolderDisplayName:(id *)a0 defaultDisplayName:(id *)a1 uniqueIdentifier:(id *)a2 forRepresentation:(id)a3;
- (unsigned long long)_maxIconCountForDock;
- (struct SBHIconGridSize { unsigned short x0; unsigned short x1; })_listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)a0;
- (id)_customIconElementFromRepresentation:(id)a0 context:(id)a1;
- (struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x4; })_gridSizeClassSizes;
- (id)effectiveDelegate;
- (unsigned long long)_allowedGridSizeClassesForDock;
- (id)_folderFromRepresentation:(id)a0 withContext:(id)a1;
- (id)init;
- (id)initWithArchive:(id)a0 iconModel:(id)a1;
- (unsigned long long)_allowedGridSizeClassesForFolderClass:(Class)a0;
- (unsigned long long)_maxListCountForFolders;
- (long long)_suggestionSourceFromRepresentation:(id)a0;
- (id)_applicationIconFromRepresentation:(id)a0 context:(id)a1;
- (BOOL)_canAddIconDataSource:(id)a0 toIcon:(id)a1;
- (id)_newFolderIconForFolder:(id)a0;
- (id)_widgetIconFromRepresentation:(id)a0 context:(id)a1;
- (Class)_folderClassForFolderType:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
