@class PXCloudQuotaOfferController, NSString, PXCloudQuotaPremiumOfferController, UIView;
@protocol PXCloudQuotaControllerHelperDelegate;

@interface PXCloudQuotaControllerHelper : NSObject <PXCloudQuotaControllerDelegate> {
    PXCloudQuotaOfferController *_offerController;
    PXCloudQuotaPremiumOfferController *_premiumOfferController;
}

@property (weak, nonatomic) id<PXCloudQuotaControllerHelperDelegate> delegate;
@property (readonly, nonatomic) UIView *informationView;
@property (readonly, nonatomic) UIView *premiumInformationView;
@property (readonly, nonatomic) BOOL hasAnyInformationViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
