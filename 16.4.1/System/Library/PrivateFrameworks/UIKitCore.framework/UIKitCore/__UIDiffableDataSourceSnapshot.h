@class NSMutableArray;
@protocol _UIDiffableDataSourceState;

@interface __UIDiffableDataSourceSnapshot : __UIDiffableDataSource <NSCopying> {
    id<_UIDiffableDataSourceState> _state;
    NSMutableArray *_pendingSnapshotUpdates;
}

- (id)itemIdentifierForIndexPath:(id)a0;
- (void)insertSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)insertItemsWithIdentifiers:(id)a0 afterItemWithIdentifier:(id)a1;
- (void)insertSectionsWithIdentifiers:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)appendSectionWithIdentifier:(id)a0;
- (id)sectionIdentifierForIndex:(long long)a0;
- (void)insertSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)appendItemsWithIdentifiers:(id)a0 intoSectionWithIdentifier:(id)a1;
- (id)state;
- (void)moveSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)deleteItemsWithIdentifiers:(id)a0;
- (long long)numberOfItemsInSection:(id)a0;
- (id)sectionIdentifiers;
- (void)deleteSectionsWithIdentifiers:(id)a0;
- (id)itemIdentifiers;
- (id)indexPathForItemIdentifier:(id)a0;
- (void)deleteAllItems;
- (void)moveSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)reconfigureItemsWithIdentifiers:(id)a0;
- (void)reloadItemsWithIdentifiers:(id)a0;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (void)insertSectionsWithIdentifiers:(id)a0 afterSectionWithIdentifier:(id)a1;
- (id)reconfiguredItemIdentifiers;
- (void)appendItemsWithIdentifiers:(id)a0;
- (id)reloadedItemIdentifiers;
- (void)insertItemsWithIdentifiers:(id)a0 beforeItemWithIdentifier:(id)a1;
- (void)_validateReloadUpdateThrowingIfNeeded:(id)a0;
- (long long)numberOfItems;
- (id)initWithState:(id)a0;
- (void)moveItemWithIdentifier:(id)a0 afterItemWithIdentifier:(id)a1;
- (long long)indexOfSectionIdentifier:(id)a0;
- (long long)numberOfSections;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_commitUpdateAtomic:(id)a0;
- (long long)indexOfItemIdentifier:(id)a0;
- (void)reloadSectionsWithIdentifiers:(id)a0;
- (void)moveItemWithIdentifier:(id)a0 beforeItemWithIdentifier:(id)a1;
- (id)reloadedSectionIdentifiers;
- (long long)indexForSectionIdentifier:(id)a0;
- (void)appendSectionsWithIdentifiers:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)pendingSnapshotUpdates;
- (id)init;
- (id)description;
- (id)_identifiersForSectionsOrItems:(BOOL)a0 reconfiguredOrReloaded:(BOOL)a1;
- (void).cxx_destruct;
- (void)_prepareForApplyToDataSource;

@end
