@class NSString, PKDashboardTitleDetailCell, PKPayLaterSetupFlowController;

@interface PKPayLaterEligibleSpendPresenter : NSObject <PKDashboardItemPresenter> {
    PKDashboardTitleDetailCell *_sampleCell;
    PKPayLaterSetupFlowController *_payLaterSetupFlowController;
    BOOL _loadingContent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (Class)itemClass;
- (void)_configureCell:(id)a0 item:(id)a1 collectionView:(id)a2;
- (BOOL)_payLaterAccountHasEligibleSpend:(id)a0;
- (void)_updateAccessoryForCell:(id)a0 eligibleSpendItem:(id)a1;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)traitCollectionDidChangeFromTrait:(id)a0 toTrait:(id)a1 inCollectionView:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;

@end
