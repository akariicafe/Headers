@class NSString, NSArray, HFItem;
@protocol HFServiceLikeItem;

@interface HUMatterAccessoryRemovalHelper : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *removalActionTitle;
@property (retain, nonatomic) NSString *resetAllActionTitle;
@property (retain, nonatomic) NSString *removalActionConfirmationTitle;
@property (retain, nonatomic) NSString *removalActionConfirmationButtonTitle;
@property (retain, nonatomic) NSString *resetAllActionConfirmationTitle;
@property (retain, nonatomic) NSString *resetAllActionConfirmationButtonTitle;
@property (weak, nonatomic) HFItem<HFServiceLikeItem> *item;
@property (retain, nonatomic) NSArray *connectedEcosystems;
@property (readonly, nonatomic) NSArray *thirdPartyEcosystems;
@property (readonly, nonatomic) BOOL shouldUseEcosystemRemovalConfirmation;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 connectedEcosystems:(id)a1;
- (void)matterAccessoryGenerateRemovalConfirmationForAccessoryName:(id)a0;
- (BOOL)updateShouldUseEcosystemRemovalConfirmation;

@end
