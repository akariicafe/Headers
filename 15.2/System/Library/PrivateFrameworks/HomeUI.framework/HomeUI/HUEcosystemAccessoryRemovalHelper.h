@class NSString, NSSet, HFItem;
@protocol HFServiceLikeItem;

@interface HUEcosystemAccessoryRemovalHelper : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *removalActionTitle;
@property (retain, nonatomic) NSString *resetAllActionTitle;
@property (retain, nonatomic) NSString *removalActionConfirmationTitle;
@property (retain, nonatomic) NSString *removalActionConfirmationButtonTitle;
@property (retain, nonatomic) NSString *resetAllActionConfirmationTitle;
@property (retain, nonatomic) NSString *resetAllActionConfirmationButtonTitle;
@property (weak, nonatomic) HFItem<HFServiceLikeItem> *item;
@property (nonatomic) BOOL shouldUseEcosystemRemovalConfirmation;
@property (retain, nonatomic) NSSet *connectedEcosystemHomes;
@property (nonatomic) BOOL hasValidConnectedHomes;

- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (void)_parseItemForSuitability;
- (void)ecosystemAccessoryGenerateRemovalConfirmationForAccessoryName:(id)a0;

@end
