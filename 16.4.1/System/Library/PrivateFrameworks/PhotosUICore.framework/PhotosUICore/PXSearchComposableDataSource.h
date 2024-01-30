@class NSArray, UICollectionViewDiffableDataSource, NSString;

@interface PXSearchComposableDataSource : NSObject <UICollectionViewDataSourcePrefetching, PXSearchDataSourceSectionProviderChangeObserver>

@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (copy, nonatomic) NSArray *sectionProviders;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, copy, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemIdentifierForIndexPath:(id)a0;
- (long long)numberOfItemsInSection:(id)a0;
- (id)indexPathForItemIdentifier:(id)a0;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (void).cxx_destruct;
- (id)_configuredCellForCollectionView:(id)a0 indexPath:(id)a1 itemIdentifier:(id)a2;
- (id)_configuredSupplementaryViewForCollectionView:(id)a0 kind:(id)a1 indexPath:(id)a2;
- (id)_convertIndexPath:(id)a0 toPXSearchDataSourceSectionProvider:(id)a1;
- (void)_registerClassesForCollectionView:(id)a0 withPXSearchDataSourceSectionProviders:(id)a1;
- (void)_reloadDataAnimated:(BOOL)a0 reloadItemIdentifiers:(id)a1;
- (id)initWithCollectionView:(id)a0 searchDataSourceSectionProviders:(id)a1;
- (void)searchDataSourceSectionProviderDidChange:(id)a0 animateChanges:(BOOL)a1;
- (void)searchDataSourceSectionProviderDidChange:(id)a0 reloadItemIdentifiers:(id)a1 animateChanges:(BOOL)a2;
- (id)searchDataSourceSectionProviderForIndexPath:(id)a0;
- (id)searchDataSourceSectionProviderForItemIdentifier:(id)a0;
- (id)searchDataSourceSectionProviderForSection:(long long)a0;
- (id)searchDataSourceSectionProviderForSectionIdentifier:(id)a0;

@end
