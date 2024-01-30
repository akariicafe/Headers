@class NSArray, __UIDiffableDataSource;

@interface _UIDiffableDataSource : NSObject {
    __UIDiffableDataSource *_dsImpl;
}

@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, nonatomic) NSArray *itemIdentifiers;

- (id)itemIdentifierForIndexPath:(id)a0;
- (void)applyDifferencesFromSnapshot:(id)a0;
- (void)reloadFromSnapshot:(id)a0;
- (void)insertSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (id)initWithTableView:(id)a0 cellProvider:(id /* block */)a1;
- (void)insertItemsWithIdentifiers:(id)a0 afterItemWithIdentifier:(id)a1;
- (void)insertSectionsWithIdentifiers:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)appendSectionWithIdentifier:(id)a0;
- (void)reloadFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (id)emptySnapshot;
- (void)insertSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)appendItemsWithIdentifiers:(id)a0 intoSectionWithIdentifier:(id)a1;
- (id)initWithViewUpdatesSink:(id)a0;
- (id)initWithCollectionView:(id)a0 cellProvider:(id /* block */)a1;
- (id)initWithTableView:(id)a0 reuseIdentifierProvider:(id /* block */)a1 cellConfigurationHandler:(id /* block */)a2;
- (void)applySnapshot:(id)a0;
- (void)applyDifferencesFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (void)moveSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)deleteItemsWithIdentifiers:(id)a0;
- (long long)numberOfItemsInSection:(id)a0;
- (void)deleteSectionsWithIdentifiers:(id)a0;
- (id)indexPathForItemIdentifier:(id)a0;
- (void)deleteAllItems;
- (void)moveSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)reloadItemsWithIdentifiers:(id)a0;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (void)insertSectionsWithIdentifiers:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)appendItemsWithIdentifiers:(id)a0;
- (void)insertItemsWithIdentifiers:(id)a0 beforeItemWithIdentifier:(id)a1;
- (void)moveItemWithIdentifier:(id)a0 afterItemWithIdentifier:(id)a1;
- (long long)indexOfSectionIdentifier:(id)a0;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (long long)indexOfItemIdentifier:(id)a0;
- (void)reloadSectionsWithIdentifiers:(id)a0;
- (void)moveItemWithIdentifier:(id)a0 beforeItemWithIdentifier:(id)a1;
- (void)appendSectionsWithIdentifiers:(id)a0;
- (id)snapshot;
- (id)initWithCollectionView:(id)a0 reuseIdentifierProvider:(id /* block */)a1 cellConfigurationHandler:(id /* block */)a2;
- (id)init;
- (id)_impl;
- (void).cxx_destruct;
- (long long)defaultRowAnimation;
- (id)dsImpl;
- (id)initWithDiffableDataSource:(id)a0;
- (void)setDefaultRowAnimation:(long long)a0;

@end
