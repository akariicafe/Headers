@interface PLStorageOperator : PLOperator

+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionTimeCorrection;
+ (id)entryEventPointDefinitionOTA;
+ (id)eventPointCacheFlushWithPayload:(id)a0;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)entryEventForwardDefinitionTaskingMode;
+ (id)entryEventPointDefinitionCacheFlush;
+ (id)eventIntervalCacheSizeWithPayload:(id)a0 withEntryDate:(id)a1;
+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventForwardDefinitionConfiguration;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionSubmissionTag;
+ (id)entryEventNoneDefinitionAdditionalTablesTurnedOn;
+ (id)entryEventNoneDefinitionActivity;
+ (id)entryEventPointDefinitionPLLog;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)entryEventIntervalDefinitionCacheSize;
+ (id)entryEventForwardDefinitionActivityStates;

- (void)logEventPointTimeCorrection:(id)a0;
- (void)logEventPointCacheFlush:(id)a0;
- (void)logEventForwardConfiguration:(id)a0;
- (void)logEventForwardSchemaChange:(id)a0;
- (void)logEventNoneAdditionalTablesTurnedOn:(id)a0;
- (void)logEventForwardTimeOffset:(id)a0;
- (void)log;
- (void)logEventForwardTaskingMode:(id)a0;
- (void)logEventPointOTA:(id)a0;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)logEventPointArchive:(id)a0;
- (void)logEventPointPLLog:(id)a0;
- (void)initOperatorDependancies;

@end
