@class UIFont, NSString, UIImage, PKPaymentTransactionCollectionViewCell, PKPaymentTransactionDetailsFactory, PKPaymentTransactionIconGenerator, PKPaymentDefaultDataProvider, PKContactResolver;
@protocol CNAvatarViewDelegate;

@interface PKDashboardPaymentTransactionItemPresenter : NSObject <PKDashboardItemPresenter> {
    unsigned long long _context;
    PKPaymentDefaultDataProvider *_dataProvider;
    PKPaymentTransactionIconGenerator *_iconGenerator;
    UIFont *_transactionCellPrimaryLabelFont;
    UIFont *_transactionCellPrimaryLabelPeerPaymentFont;
    UIFont *_transactionCellValueLabelFont;
    UIFont *_transactionCellValueLabelPeerPaymentFont;
    UIFont *_transactionCellSecondaryLabelFont;
    UIFont *_transactionCellSecondaryLabelPeerPaymentFont;
    UIImage *_emptyImage;
    UIImage *_cashbackImage;
    UIImage *_appleCardImage;
    PKPaymentTransactionDetailsFactory *_transactionDetailsFactory;
    id<CNAvatarViewDelegate> _avatarViewDelegate;
    PKPaymentTransactionCollectionViewCell *_sampleCell;
    BOOL _useAccessibilityLayout;
}

@property (retain, nonatomic) PKContactResolver *contactResolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })_imageSize;
- (id)_contactKeysToFetch;
- (void).cxx_destruct;
- (Class)itemClass;
- (void)_configureCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 forIndexPath:(id)a3;
- (BOOL)_shouldShowIconForTransactionSource:(id)a0 transaction:(id)a1 context:(unsigned long long)a2;
- (void)_updateAvatarOnTransactionCell:(id)a0 withTransaction:(id)a1 contact:(id)a2;
- (void)_updatePrimaryLabelOnTransactionCell:(id)a0 withPeerPaymentCounterpartHandle:(id)a1 contact:(id)a2;
- (id)appleCardImage;
- (BOOL)canSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)cashbackImage;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (BOOL)hideSeparatorForItem:(id)a0 inCollectionView:(id)a1;
- (id)initWithContext:(unsigned long long)a0 detailViewStyle:(long long)a1 avatarViewDelegate:(id)a2;
- (void)prefetchForItem:(id)a0 inCollectionView:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)traitCollectionDidChangeFromTrait:(id)a0 toTrait:(id)a1 inCollectionView:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;
- (void)viewControllerForTransaction:(id)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2 account:(id)a3 accountUserCollection:(id)a4 physicalCards:(id)a5 forcePreventHistory:(BOOL)a6 completion:(id /* block */)a7;

@end
