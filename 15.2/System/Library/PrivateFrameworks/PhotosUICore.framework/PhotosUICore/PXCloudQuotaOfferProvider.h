@class ICQOffer;

@interface PXCloudQuotaOfferProvider : PXObservable

@property (class, readonly) PXCloudQuotaOfferProvider *currentOfferProvider;

@property (readonly, nonatomic) ICQOffer *offer;
@property (readonly, nonatomic) BOOL offerHasAssetCounts;

- (void)setOffer:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)_queue_getCurrentOffer;
- (void)_currentOfferChangedNotification:(id)a0;
- (void)_updateCurrentOffer:(id)a0;
- (void)_queue_initialSetup;
- (void).cxx_destruct;
- (void)setOfferHasAssetCounts:(BOOL)a0;
- (id)init;
- (void)dealloc;

@end
