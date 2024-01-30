@class NSSet, NSMutableDictionary;

@interface PLAccountingOperator : PLOperator

@property (retain, nonatomic) NSSet *rules;
@property (retain) NSMutableDictionary *ruleIDToPendingJobs;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionPowerEvents;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryAggregateDefinitionQualificationEnergy;

- (void)initOperatorDependancies;
- (void)stopAccounting;
- (id)init;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void).cxx_destruct;
- (void)startAccounting;

@end
