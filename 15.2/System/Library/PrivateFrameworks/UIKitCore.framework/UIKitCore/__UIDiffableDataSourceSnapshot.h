@class NSMutableArray;
@protocol _UIDiffableDataSourceState;

@interface __UIDiffableDataSourceSnapshot : __UIDiffableDataSource <NSCopying> {
    id<_UIDiffableDataSourceState> _state;
    NSMutableArray *_pendingSnapshotUpdates;
}

- (id)reloadedSectionIdentifiers;
- (void)appendItemsWithIdentifiers:(id)a0 intoSectionWithIdentifier:(id)a1;
- (void)reloadSectionsWithIdentifiers:(id)a0;
- (void)moveSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (id)sectionIdentifierForIndex:(long long)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (void)appendSectionWithIdentifier:(id)a0;
- (void)insertSectionsWithIdentifiers:(id)a0 afterSectionWithIdentifier:(id)a1;
- (long long)indexOfItemIdentifier:(id)a0;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (id)sectionIdentifiers;
- (long long)indexOfSectionIdentifier:(id)a0;
- (void)deleteItemsWithIdentifiers:(id)a0;
- (id)initWithState:(id)a0;
- (long long)numberOfItems;
- (long long)numberOfSections;
- (id)itemIdentifiers;
- (void)reloadItemsWithIdentifiers:(id)a0;
- (void)_validateReloadUpdateThrowingIfNeeded:(id)a0;
- (void)moveItemWithIdentifier:(id)a0 beforeItemWithIdentifier:(id)a1;
- (long long)numberOfItemsInSection:(id)a0;
- (id)reloadedItemIdentifiers;
- (id)pendingSnapshotUpdates;
- (id)state;
- (id)description;
- (void)insertItemsWithIdentifiers:(id)a0 afterItemWithIdentifier:(id)a1;
- (void)_commitUpdateAtomic:(id)a0;
- (void)insertSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)appendItemsWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)moveItemWithIdentifier:(id)a0 afterItemWithIdentifier:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)deleteSectionsWithIdentifiers:(id)a0;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)insertItemsWithIdentifiers:(id)a0 beforeItemWithIdentifier:(id)a1;
- (long long)indexForSectionIdentifier:(id)a0;
- (void)insertSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)appendSectionsWithIdentifiers:(id)a0;
- (void)deleteAllItems;
- (id)reconfiguredItemIdentifiers;
- (id)_identifiersForSectionsOrItems:(BOOL)a0 reconfiguredOrReloaded:(BOOL)a1;
- (void)insertSectionsWithIdentifiers:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)moveSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)reconfigureItemsWithIdentifiers:(id)a0;
- (id)indexPathForItemIdentifier:(id)a0;

@end
