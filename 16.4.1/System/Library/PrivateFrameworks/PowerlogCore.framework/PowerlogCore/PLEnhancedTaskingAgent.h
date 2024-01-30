@interface PLEnhancedTaskingAgent : PLAgent

+ (id)defaults;
+ (id)allowlistForSignpostAggregatedData;
+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionUINavigationController;
+ (id)entryEventIntervalDefinitionInProcessAnimation;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)entryEventIntervalDefinitionScrollView;
+ (id)entryEventNoneDefinitionAppSwitchTrigger;

- (void)initOperatorDependancies;
- (void)logAggregatedDataFromSignpostWithPayload:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)log;
- (void)initTaskOperatorDependancies;
- (id)init;
- (id)aggregatedSignpostDataWithEntryKey:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2 withSignpostName:(id)a3 withProcess:(id)a4 withDataDict:(id)a5;
- (int)getSignpostNameValueGroupTypeFor:(id)a0;

@end
