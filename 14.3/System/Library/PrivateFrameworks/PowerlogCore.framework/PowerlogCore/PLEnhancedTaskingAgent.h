@interface PLEnhancedTaskingAgent : PLAgent

+ (id)entryEventNoneDefinitionAppSwitchTrigger;
+ (void)load;
+ (id)entryEventIntervalDefinitionInProcessAnimation;
+ (id)defaults;
+ (void)logAggregatedDataFromSignpostWithStartDate:(id)a0 withEndDate:(id)a1;
+ (id)whitelistForSignpostAggregatedData;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionUINavigationController;
+ (id)entryEventIntervalDefinitionScrollView;
+ (id)entryEventNoneDefinitions;

- (id)aggregatedSignpostDataWithEntryKey:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2 withSignpostName:(id)a3 withProcess:(id)a4 withDataDict:(id)a5;
- (id)init;
- (void)log;
- (void)initTaskOperatorDependancies;
- (int)getSignpostNameValueGroupTypeFor:(id)a0;
- (void)initOperatorDependancies;
- (void)logAggregatedDataFromSignpostWithPayload:(id)a0 withStartDate:(id)a1 withEndDate:(id)a2;

@end
