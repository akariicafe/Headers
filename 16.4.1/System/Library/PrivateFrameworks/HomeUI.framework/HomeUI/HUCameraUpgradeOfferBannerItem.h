@class ICQOpportunitySheetDetailsSpecification, NSString, NSNumber, HFUserItem;

@interface HUCameraUpgradeOfferBannerItem : HUBannerItem

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

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)hiddenOfferDisplayOutcome;
- (id)offerDisplayOutcome;

@end
