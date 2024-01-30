@class NSString;
@protocol CNUIInteractionAdvisor;

@interface CNUIUserActionRanking : NSObject <CNUIUserActionRanking>

@property (readonly, nonatomic) id<CNUIInteractionAdvisor> interactionAdvisor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)advisorSettingsForIdentifyingMostRecentAction:(id)a0 actionType:(id)a1;
+ (id)advisorSettingsForSortingAddresses:(id)a0 actionType:(id)a1;
+ (id)constrainMechanismsForActionType:(id)a0;
+ (id)sortKeyWithUsername:(id)a0 bundleIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInteractionAdvisor:(id)a0;
- (id)selectMostRecentActionFromItems:(id)a0;
- (id)selectRecentActionItems:(id)a0 schedulerProvider:(id)a1;
- (id)sortActionItems:(id)a0 schedulerProvider:(id)a1;
- (id)sortKeysByRankingAddresses:(id)a0 actionType:(id)a1 scheduler:(id)a2;

@end
