@class NSArray, NSSet;

@interface _UIDiffableDataSourceSectionControllerInternal : _UIDiffableDataSourceSectionController

@property (readonly, nonatomic) NSArray *itemRenderers;
@property (readonly, nonatomic) NSSet *associatedSectionIdentifiers;

- (void)applySnapshot:(id)a0 toSection:(id)a1 animatingDifferences:(BOOL)a2 completion:(id /* block */)a3;
- (void)applySnapshot:(id)a0 toSection:(id)a1 customAnimationsProvider:(id /* block */)a2;
- (void)applySnapshot:(id)a0 toSection:(id)a1 viewPropertyAnimator:(id)a2 customAnimationsProvider:(id /* block */)a3;
- (id)collectionViewDiffableDataSourceSectionController;
- (id)initWithItemRenderers:(id)a0;
- (id)initWithItemRenderers:(id)a0 associatedSectionIdentifiers:(id)a1;

@end
