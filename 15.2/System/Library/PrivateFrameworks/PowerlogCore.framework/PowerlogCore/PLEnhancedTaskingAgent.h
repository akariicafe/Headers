@interface PLEnhancedTaskingAgent : PLAgent

+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)entryEventIntervalDefinitionUINavigationController;
+ (id)entryEventNoneDefinitionAppSwitchTrigger;
+ (void)load;
+ (id)allowlistForSignpostAggregatedData;
+ (id)entryEventIntervalDefinitionInProcessAnimation;
+ (id)entryEventIntervalDefinitionScrollView;

- (id)aggregatedSignpostDataWithEntryKey:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2 withSignpostName:(id)a3 withProcess:(id)a4 withDataDict:(id)a5;
- (void)logAggregatedDataFromSignpostWithPayload:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)log;
- (id)init;
- (int)getSignpostNameValueGroupTypeFor:(id)a0;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;

@end
