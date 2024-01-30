@class NSArray, NSSet;

@interface HRETemplateRecommendationGeneratorProcess : HREStandardAsyncRecommendationGenerationProcess

@property (retain, nonatomic) NSArray *rooms;
@property (retain, nonatomic) NSSet *homeActionObjects;
@property (retain, nonatomic) NSArray *activeTemplates;

- (void).cxx_destruct;
- (BOOL)shouldGenerateRecommendations;
- (id)generateRecommendations;
- (id)recommendationsWithTemplate:(id)a0;
- (id)_initialRecommendationsForTemplate:(id)a0;
- (BOOL)_actionObjects:(id)a0 meetTypeCountRequirementInTemplate:(id)a1;
- (id)_triggerForRecommendation:(id)a0 fromTemplate:(id)a1 withActionableObjects:(id)a2;
- (id)_triggerInHome:(id)a0 withSameConfigurationAsTrigger:(id)a1;
- (id)_filterToAllowedObjects:(id)a0 withSourceObjects:(id)a1 withTrigger:(id)a2 template:(id)a3;
- (id)_existingActionSetInHome:(id)a0 forRecommendation:(id)a1;
- (id)_defineActionsForRecommendation:(id)a0 withActionMap:(id)a1 withActionableObjects:(id)a2;
- (id)_filterRecommendations:(id)a0 fromTemplate:(id)a1;
- (id)_createInitialRecommendations:(id)a0 withBaseConfiguration:(id)a1;
- (id)characteristicActionsForObject:(id)a0 actionMap:(id)a1;
- (id)_defineProfileActionsForActionableObjects:(id)a0 withActionMap:(id)a1;
- (id)_filterSplitRecommendations:(id)a0 characteristicTypePriority:(id)a1;
- (id)definiteActionsForCharacteristicActionMap:(id)a0 object:(id)a1;

@end
