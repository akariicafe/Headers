@class NSString, PKDashboardContentHostCollectionViewCell;
@protocol PKDashboardPassTilesItemPresenterDelegate;

@interface PKDashboardPassTilesItemPresenter : NSObject <PKPassTileGroupViewDelegate, PKDashboardItemPresenter> {
    PKDashboardContentHostCollectionViewCell *_sampleCell;
}

@property (weak, nonatomic) id<PKDashboardPassTilesItemPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (Class)itemClass;
- (void)_configureCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 forIndexPath:(id)a3 animated:(BOOL)a4;
- (BOOL)canSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (void)passTileGroupView:(id)a0 executeSEActionForPass:(id)a1 tile:(id)a2 withCompletion:(id /* block */)a3;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;

@end
