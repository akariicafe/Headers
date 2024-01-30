@class ICQPremiumOffer;

@interface PXCloudQuotaPremiumOfferProvider : PXObservable

@property (class, readonly) PXCloudQuotaPremiumOfferProvider *currentPremiumOfferProvider;

@property (readonly, nonatomic) ICQPremiumOffer *premiumOffer;

- (void)_currentPremiumOfferChangedNotification:(id)a0;
- (void)_updateCurrentPremiumOffer:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)_queue_initialSetup;
- (void)setPremiumOffer:(id)a0;
- (void)dealloc;
- (void)_queue_getCurrentPremiumOffer;
- (id)init;
- (void).cxx_destruct;

@end
