@class SBHIconModel;

@interface SBHIconStateUnarchiver : NSObject

@property (readonly, nonatomic) id archive;
@property (readonly, nonatomic) SBHIconModel *iconSource;
@property (nonatomic) BOOL removesEmptyFolders;

+ (void)_getFolderDisplayName:(id *)a0 defaultDisplayName:(id *)a1 uniqueIdentifier:(id *)a2 forRepresentation:(id)a3 iconSource:(id)a4;

- (void).cxx_destruct;
- (id)unarchive;
- (id)initWithArchive:(id)a0 iconSource:(id)a1;
- (id)_nodeFromRepresentation:(id)a0 context:(id)a1;
- (id)_folderFromRepresentation:(id)a0 withContext:(id)a1;
- (id)_listFromRepresentation:(id)a0 listGridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a1 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; })a2 identifier:(id)a3 context:(id)a4 overflow:(id)a5;
- (id)_iconFromRepresentation:(id)a0 withContext:(id)a1;
- (id)_widgetIconFromRepresentation:(id)a0 context:(id)a1;
- (id)_newFolderIconForFolder:(id)a0;
- (Class)_folderClassForFolderType:(id)a0 context:(id)a1;
- (void)_getFolderDisplayName:(id *)a0 defaultDisplayName:(id *)a1 uniqueIdentifier:(id *)a2 forRepresentation:(id)a3;
- (id)_customIconElementFromRepresentation:(id)a0 context:(id)a1;
- (BOOL)_canAddIconDataSource:(id)a0 toIcon:(id)a1;

@end
