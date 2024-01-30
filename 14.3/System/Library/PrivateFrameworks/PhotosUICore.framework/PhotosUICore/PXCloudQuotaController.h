@class NSString, PXCloudQuotaOfferProvider, UIView;
@protocol PXCloudQuotaControllerDelegate;

@interface PXCloudQuotaController : NSObject <PXChangeObserver, ICQBannerViewDelegate, PXSettingsKeyObserver> {
    PXCloudQuotaOfferProvider *_offerProvider;
}

@property (readonly, nonatomic) UIView *informationBanner;
@property (weak, nonatomic) id<PXCloudQuotaControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (long long)_mockOfferLevel;
- (void)dealloc;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)presentingViewControllerForBannerView:(id)a0;
- (BOOL)_mockOfferIncludeAssetCounts;
- (void)setInformationBanner:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateInformationBanner;
- (void)settings:(id)a0 changedValueForKey:(id)a1;

@end
