@class NSHashTable, NSArray, NSString, NSSet, SBHIconModel, SBHLibraryCategoriesRootFolder, SBHLibraryCategoryMap;

@interface SBHLibraryCategoriesFolderDataSource : NSObject <SBIconObserver> {
    NSSet *_mappedIcons;
    SBHLibraryCategoryMap *_categoryMap;
    long long _maximumNumberOfDisplayedCategories;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) SBHLibraryCategoriesRootFolder *categoriesFolder;
@property (readonly, nonatomic) SBHIconModel *iconModel;
@property (readonly, nonatomic) NSArray *categoryIdentifiers;
@property (readonly, nonatomic) unsigned long long categoryIdentifiersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reloadDataWithCategoryMap:(id)a0;
- (BOOL)isEqualToDataSource:(id)a0;
- (BOOL)containsIcon:(id)a0;
- (void)setMaximumNumberOfDisplayedCategories:(long long)a0;
- (void)addObserver:(id)a0;
- (void)_noteDidReloadIcons:(id)a0;
- (id)initWithCategoriesFolder:(id)a0;
- (id)reloadData;
- (id)categoryForIdentifier:(id)a0;
- (id)reloadDataSourceUsingIcons:(id)a0 categoryMap:(id)a1;
- (void)_noteWillRemoveIcon:(id)a0;
- (void)_noteIconVisibilityDidChange:(id)a0;
- (void)iconAccessoriesDidUpdate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_regenerateCategoriesFolder;
- (void)_noteDidReplaceIcon:(id)a0;
- (void)_noteWillLayoutIconState:(id)a0;
- (id)init;
- (long long)maximumNumberOfDisplayedCategories;
- (void)_noteDidAddIcon:(id)a0;
- (void).cxx_destruct;

@end
