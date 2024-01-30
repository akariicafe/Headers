@class NSArray, NSString, NSSet, SBHIconModel, SBHLibraryCategoriesRootFolder, SBHLibraryCategoryMap;
@protocol SBHLibraryCategoriesFolderDataSourceDelegate;

@interface SBHLibraryCategoriesFolderDataSource : NSObject <SBIconObserver> {
    NSSet *_mappedIcons;
    SBHLibraryCategoryMap *_categoryMap;
}

@property (readonly, nonatomic) SBHLibraryCategoriesRootFolder *categoriesFolder;
@property (readonly, nonatomic) SBHIconModel *iconModel;
@property (weak, nonatomic) id<SBHLibraryCategoriesFolderDataSourceDelegate> delegate;
@property (readonly, nonatomic) NSArray *categoryIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reloadData;
- (id)init;
- (void).cxx_destruct;
- (void)iconAccessoriesDidUpdate:(id)a0;
- (BOOL)isEqualToDataSource:(id)a0;
- (void)_noteDidAddIcon:(id)a0;
- (void)_noteDidReplaceIcon:(id)a0;
- (void)_noteWillRemoveIcon:(id)a0;
- (void)_noteDidReloadIcons:(id)a0;
- (void)_noteIconVisibilityDidChange:(id)a0;
- (void)_noteWillLayoutIconState:(id)a0;
- (id)reloadDataSourceUsingIcons:(id)a0 categoryMap:(id)a1;
- (void)_regenerateCategoriesFolder;
- (BOOL)isEqual:(id)a0;
- (id)initWithCategoriesFolder:(id)a0;
- (id)categoryForIdentifier:(id)a0;
- (BOOL)containsIcon:(id)a0;
- (id)reloadDataWithCategoryMap:(id)a0;

@end
