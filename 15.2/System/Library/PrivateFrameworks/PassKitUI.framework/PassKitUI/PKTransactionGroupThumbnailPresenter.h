@class NSCache, NSString, PKMapsSnapshotManager, UIImage, PKContactAvatarManager, PKThumbnailCollectionViewCell, PKPaymentTransactionIconGenerator, PKContactResolver;
@protocol PKPaymentDataProvider;

@interface PKTransactionGroupThumbnailPresenter : NSObject <PKDashboardItemPresenter> {
    PKPaymentTransactionIconGenerator *_iconGenerator;
    PKContactResolver *_contactResolver;
    NSCache *_iconsPerMerchantCategory;
    UIImage *_mapsPlaceholderImage;
    PKThumbnailCollectionViewCell *_sampleCell;
}

@property (retain, nonatomic) PKMapsSnapshotManager *snapshotManager;
@property (retain, nonatomic) id<PKPaymentDataProvider> paymentDataProvider;
@property (retain, nonatomic) PKContactAvatarManager *avatarManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_contactKeysToFetch;
- (void).cxx_destruct;
- (Class)itemClass;
- (id)init;
- (double)thumbnailWidth;
- (id)collectionViewCellClasses;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)traitCollectionDidChangeFromTrait:(id)a0 toTrait:(id)a1 inCollectionView:(id)a2;
- (void)_updateAvatarOnThumbnailCell:(id)a0 contact:(id)a1;
- (void)_updateTitleOnThumbnailCell:(id)a0 withPeerPaymentCounterpartHandle:(id)a1 contact:(id)a2;

@end
