@class HFUserItem, NSString, ICQOpportunitySheetDetailsSpecification, NSNumber, HMHome;
@protocol HFHomeKitObject;

@interface HUCameraUpgradeOfferBannerItem : HFItem <HFHomeKitItemProtocol>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HFUserItem *userItem;
@property (nonatomic) BOOL hasFetchedOfferResults;
@property (retain, nonatomic) NSString *offerTitle;
@property (retain, nonatomic) NSString *offerMessage;
@property (retain, nonatomic) NSString *offerActionTitle;
@property (retain, nonatomic) NSString *sheetTitle;
@property (retain, nonatomic) NSString *sheetMessage;
@property (retain, nonatomic) NSString *sheetActionText;
@property (retain, nonatomic) ICQOpportunitySheetDetailsSpecification *sheetDetails;
@property (retain, nonatomic) NSNumber *planLimit;
@property (readonly, nonatomic) NSString *bannerActionText;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)hiddenOfferDisplayOutcome;
- (id)offerDisplayOutcome;

@end
