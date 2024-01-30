@class NSArray, NSString, HFCustomDiffableDataSourceSnapshot;

@interface HFCustomDiffableDataSource : NSObject <HFDiffableDataSource>

@property (retain, nonatomic) HFCustomDiffableDataSourceSnapshot *snapshot;
@property (retain, nonatomic) NSArray *sections;
@property (copy, nonatomic) id /* block */ supplementaryViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemIdentifierForIndexPath:(id)a0;
- (void)applySnapshot:(id)a0 toSection:(id)a1 animatingDifferences:(BOOL)a2 completion:(id /* block */)a3;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (id)indexPathForItemIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_indexPathForItem:(id)a0 inDisplayedItemsArray:(id)a1;
- (unsigned long long)_sectionForItem:(id)a0;
- (unsigned long long)_sectionForItem:(id)a0 assertOnNotFound:(BOOL)a1;

@end
