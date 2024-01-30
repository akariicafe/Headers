@protocol CNUIDefaultUserActionFetcher, CNUIUserActionDiscoveringEnvironment, CNUIUserActionTargetDiscovering, CNUIUserActionRanking;

@interface CNUIUserActionDisambiguationModeler : NSObject

@property (retain, nonatomic) id<CNUIUserActionTargetDiscovering> targetDiscoveringHelper;
@property (retain, nonatomic) id<CNUIUserActionRanking> rankingHelper;
@property (retain, nonatomic) id<CNUIDefaultUserActionFetcher> defaultActionFetcher;
@property (retain, nonatomic) id<CNUIUserActionDiscoveringEnvironment> discoveringEnvironment;

+ (id)descriptorForRequiredKeys;

- (id)schedulerProvider;
- (void)setContactStore:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)thirdPartyTargetsForActionTypes:(id)a0;
- (id)thirdPartyActionsForContactProperty:(id)a0;
- (id)initWithDiscoveringEnvironment:(id)a0;
- (id)modelsWithContact:(id)a0 actionType:(id)a1;
- (id)initWithTargetDiscoveringHelper:(id)a0 rankingHelper:(id)a1 defaultActionFetcher:(id)a2 discoveringEnvironment:(id)a3;
- (id)discoverActionsForContact:(id)a0 actionType:(id)a1;
- (id)defaultActionFromActions:(id)a0;
- (id)recentActionsFromActions:(id)a0;
- (id)modelsWithDefaultAction:(id)a0 actions:(id)a1 recentActions:(id)a2 sorts:(BOOL)a3 throttles:(BOOL)a4;
- (id)_discoverActionsForContact:(id)a0 actionType:(id)a1;
- (id)sortActionsOnModel:(id)a0;
- (id)targetsChangedObservableForActionType:(id)a0;
- (id)defaultActionChangedObservable;

@end
