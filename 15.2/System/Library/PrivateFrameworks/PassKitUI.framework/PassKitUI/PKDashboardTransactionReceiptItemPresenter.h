@class NSString, PKDashboardStackedImageCollectionViewCell, PKPaymentTransactionDetailsFactory;

@interface PKDashboardTransactionReceiptItemPresenter : NSObject <PKDashboardItemPresenter> {
    PKDashboardStackedImageCollectionViewCell *_sampleCell;
    PKPaymentTransactionDetailsFactory *_transactionDetailsFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_contactKeysToFetch;
- (void).cxx_destruct;
- (Class)itemClass;
- (id)init;
- (id)collectionViewCellClasses;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (BOOL)canSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)_configureCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 forIndexPath:(id)a3;

@end
