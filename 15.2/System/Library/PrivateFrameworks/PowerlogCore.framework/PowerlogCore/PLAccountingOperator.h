@class NSSet, NSMutableDictionary;

@interface PLAccountingOperator : PLOperator

@property (retain, nonatomic) NSSet *rules;
@property (retain) NSMutableDictionary *ruleIDToPendingJobs;

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryAggregateDefinitionQualificationEnergy;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionPowerEvents;

- (void)startAccounting;
- (void).cxx_destruct;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)stopAccounting;
- (id)init;
- (void)initOperatorDependancies;

@end
