@class NSString, PXCloudQuotaOfferProvider;

@interface PXCloudQuotaOfferController : PXCloudQuotaController <PXChangeObserver, ICQBannerViewDelegate, PXSettingsKeyObserver> {
    PXCloudQuotaOfferProvider *_offerProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)presentingViewControllerForBannerView:(id)a0;
- (void)_updateInformationView;
- (BOOL)_mockOfferIncludeAssetCounts;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (long long)_mockOfferLevel;

@end
