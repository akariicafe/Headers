@class UIFont, NSString, PKMapsSnapshotManager, UIImage, PKPaymentTransactionCollectionViewCell, NSDateFormatter, PKPeerPaymentContactResolver, PKPaymentTransactionIconGenerator, NSCache;

@interface PKTransactionGroupItemPresenter : NSObject <PKDashboardItemPresenter> {
    PKPaymentTransactionCollectionViewCell *_sampleCell;
    UIFont *_transactionCellPrimaryLabelFont;
    UIFont *_transactionCellValueLabelFont;
    UIFont *_transactionCellSecondaryLabelFont;
    UIImage *_emptyImage;
    UIImage *_cashbackImage;
    UIImage *_transactionListImage;
    UIImage *_interestImage;
    UIImage *_appleCardImage;
    UIImage *_refundsImage;
    UIImage *_adjustmentsImage;
    UIImage *_mapsPlaceholderImage;
    NSCache *_iconsPerMerchantCategory;
    struct CGSize { double width; double height; } _groupSize;
    BOOL _needsSizing;
    NSDateFormatter *_formatterYear;
    NSDateFormatter *_formatterMonth;
    BOOL _useAccessibilityLayout;
    PKPaymentTransactionIconGenerator *_iconGenerator;
}

@property (retain, nonatomic) PKPeerPaymentContactResolver *contactResolver;
@property (retain, nonatomic) PKMapsSnapshotManager *snapshotManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })_imageSize;
- (id)init;
- (void).cxx_destruct;
- (Class)itemClass;
- (void)_configureCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 forIndexPath:(id)a3 forSizing:(BOOL)a4;
- (void)_viewControllerForItem:(id)a0 withCompletion:(id /* block */)a1;
- (id)cashbackImage;
- (id)appleCardImage;
- (id)transactionListImage;
- (id)interestImage;
- (id)refundsImage;
- (id)adjustmentsImage;
- (void)_updateAvatarOnTransactionCell:(id)a0 withGroup:(id)a1 contact:(id)a2;
- (void)_updatePrimaryLabelOnTransactionCell:(id)a0 withPeerPaymentCounterpartHandle:(id)a1 contact:(id)a2;
- (id)mapsPlaceholderImage;
- (void)_applyTokenFiltersFromItem:(id)a0 toFetcher:(id)a1;
- (id)collectionViewCellClasses;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (BOOL)canSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)traitCollectionDidChangeFromTrait:(id)a0 toTrait:(id)a1 inCollectionView:(id)a2;
- (id)_contactKeysToFetch;

@end
