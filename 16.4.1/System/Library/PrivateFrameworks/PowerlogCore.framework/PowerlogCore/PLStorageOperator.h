@interface PLStorageOperator : PLOperator

+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionPLLog;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitionActivity;
+ (id)entryEventPointDefinitionCacheFlush;
+ (id)entryEventForwardDefinitionSubmissionTag;
+ (id)eventPointCacheFlushWithPayload:(id)a0;
+ (id)entryEventForwardDefinitionActivityStates;
+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventPointDefinitionTimeCorrection;
+ (id)entryEventForwardDefinitionConfiguration;
+ (id)eventIntervalCacheSizeWithPayload:(id)a0 withEntryDate:(id)a1;
+ (id)entryEventNoneDefinitionAdditionalTablesTurnedOn;
+ (id)entryEventPointDefinitionOTA;
+ (id)entryEventForwardDefinitionTaskingMode;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)entryEventIntervalDefinitionCacheSize;

- (void)initOperatorDependancies;
- (void)logEventPointArchive:(id)a0;
- (void)logEventPointOTA:(id)a0;
- (void)log;
- (void)logEventForwardConfiguration:(id)a0;
- (void)logEventPointCacheFlush:(id)a0;
- (void)logEventPointPreUnlock:(id)a0;
- (void)logEventPointTimeCorrection:(id)a0;
- (void)logEventForwardTimeOffset:(id)a0;
- (void)logEventForwardSchemaChange:(id)a0;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (void)logEventPointPLLog:(id)a0;
- (void)logEventForwardTaskingMode:(id)a0;
- (void)logEventNoneAdditionalTablesTurnedOn:(id)a0;

@end
