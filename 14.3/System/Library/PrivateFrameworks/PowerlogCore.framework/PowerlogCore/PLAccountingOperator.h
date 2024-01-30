@class NSSet, NSMutableDictionary;

@interface PLAccountingOperator : PLOperator

@property (retain, nonatomic) NSSet *rules;
@property (retain) NSMutableDictionary *ruleIDToPendingJobs;

+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (void)load;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionPowerEvents;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitionQualificationEnergy;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (id)init;
- (void).cxx_destruct;
- (void)stopAccounting;
- (void)startAccounting;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)initOperatorDependancies;

@end
