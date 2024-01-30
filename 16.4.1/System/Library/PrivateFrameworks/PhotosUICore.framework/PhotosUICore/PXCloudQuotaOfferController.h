@class NSString, PXCloudQuotaOfferProvider;

@interface PXCloudQuotaOfferController : PXCloudQuotaController <PXChangeObserver, ICQBannerViewDelegate, PXSettingsKeyObserver> {
    PXCloudQuotaOfferProvider *_offerProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)_mockOfferLevel;
- (BOOL)_mockOfferIncludeAssetCounts;
- (void)_updateInformationView;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)presentingViewControllerForBannerView:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;

@end
