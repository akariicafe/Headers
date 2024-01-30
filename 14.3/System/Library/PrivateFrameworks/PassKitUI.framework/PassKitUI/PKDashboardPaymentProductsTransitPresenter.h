@class PKPassGroupView, NSString, PKPassTransitProductsViewController, PKAdjustableSingleCellView, PKFusedDoubleCellView;

@interface PKDashboardPaymentProductsTransitPresenter : NSObject <PKDashboardItemPresenter, PKPerformActionViewControllerDelegate> {
    PKPassGroupView *_passGroupView;
    PKPassTransitProductsViewController *_productDetailsController;
    PKAdjustableSingleCellView *_sampleSingleCellView;
    PKFusedDoubleCellView *_sampleFusedCellView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPassGroupView:(id)a0;
- (long long)_viewTypeForTransitItem:(id)a0;
- (id)_identifierForItem:(id)a0;
- (id)_allocViewForTransitItem:(id)a0;
- (void)_configureView:(id *)a0 transitItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;
- (id)_sampleViewForTransitItem:(id)a0;
- (id)_passForTransitItem:(id)a0 indexPath:(id)a1;
- (id)_topUpActionForItem:(id)a0 indexPath:(id)a1 balanceIdentifier:(id)a2;
- (id /* block */)_actionHandlerForItem:(id)a0 indexPath:(id)a1;
- (id)_renewActionForItem:(id)a0 commutePlanIdentifier:(id)a1;
- (Class)itemClass;
- (void)_configureCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 forIndexPath:(id)a3;
- (void)performActionViewControllerDidCancel:(id)a0;
- (void)performActionViewControllerDidPerformAction:(id)a0;
- (id)collectionViewCellClasses;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (BOOL)canSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)traitCollectionDidChangeFromTrait:(id)a0 toTrait:(id)a1 inCollectionView:(id)a2;
- (BOOL)cellIsIndependentForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;

@end
