@class PKPaymentWebService, NSString, UICollectionViewDiffableDataSource, NSMutableDictionary, PKRetrieveMerchantTokensResponse, PKSecureElementPass, NSMutableArray;
@protocol PKMerchantTokensViewControllerDelegate;

@interface PKMerchantTokensViewController : UICollectionViewController <PKMerchantTokenDetailViewControllerDelegate> {
    UICollectionViewDiffableDataSource *_dataSource;
    PKSecureElementPass *_pass;
    PKRetrieveMerchantTokensResponse *_previousMerchantTokensResponse;
    NSMutableArray *_merchantTokens;
    NSMutableDictionary *_idsToMerchantTokens;
    BOOL _isFetchingMerchantTokens;
    PKPaymentWebService *_webService;
    BOOL _merchantIconsEnabled;
}

@property (weak, nonatomic) id<PKMerchantTokensViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_collectionViewLayout;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_initialSnapshot;
- (BOOL)_hasMoreUnfetchedMerchantTokens;
- (BOOL)_isMerchantRow:(id)a0;
- (void)_deselectSelectedItemAnimated:(BOOL)a0;
- (void)_fetchNextPageOfMerchantTokens;
- (BOOL)_isLoadingRow:(id)a0;
- (void)_setUpCollectionView;
- (void)_setUpSelf;
- (void)_setUpViews;
- (BOOL)_shouldShowLoadingRow;
- (void)_trackButtonTapForMerchantToken:(id)a0;
- (id)_updateIdentifiersWithMerchantTokens:(id)a0;
- (id)_updatedSnapshotRemovingMerchantToken:(id)a0;
- (id)_updatedSnapshotWithMerchantTokens:(id)a0;
- (id)initWithPass:(id)a0 merchantTokensResponse:(id)a1;
- (void)merchantTokenDetailViewController:(id)a0 didDeleteMerchantToken:(id)a1;

@end
