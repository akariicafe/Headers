@interface PLStorageOperator : PLOperator

+ (id)entryEventPointDefinitionCacheFlush;
+ (id)entryEventForwardDefinitionTaskingMode;
+ (id)entryEventPointDefinitionTimeCorrection;
+ (id)eventPointCacheFlushWithPayload:(id)a0;
+ (id)entryEventNoneDefinitionActivity;
+ (id)entryEventNoneDefinitionAdditionalTablesTurnedOn;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionActivityStates;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionSubmissionTag;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventForwardDefinitionConfiguration;
+ (id)entryEventPointDefinitionPLLog;
+ (id)entryEventPointDefinitionOTA;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)entryEventIntervalDefinitionCacheSize;
+ (id)eventIntervalCacheSizeWithPayload:(id)a0 withEntryDate:(id)a1;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (void)logEventForwardSchemaChange:(id)a0;
- (void)logEventPointCacheFlush:(id)a0;
- (void)log;
- (void)logEventNoneAdditionalTablesTurnedOn:(id)a0;
- (void)logEventPointTimeCorrection:(id)a0;
- (void)logEventPointOTA:(id)a0;
- (void)logEventPointArchive:(id)a0;
- (void)logEventPointPLLog:(id)a0;
- (void)logEventForwardTaskingMode:(id)a0;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)logEventForwardConfiguration:(id)a0;
- (void)logEventForwardTimeOffset:(id)a0;
- (void)initOperatorDependancies;

@end
