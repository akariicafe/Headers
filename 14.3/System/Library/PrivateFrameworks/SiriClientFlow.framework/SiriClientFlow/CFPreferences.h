@interface CFPreferences : NSObject

+ (BOOL)shouldOverrideScripts;
+ (id)_clientFlowUserDefaults;
+ (id)_valueFromCKKnowledgeStoreWithKey:(id)a0;
+ (BOOL)shouldRunNodeFlow:(BOOL)a0;
+ (BOOL)shouldSkipUpdateScriptsOnBoot;
+ (BOOL)isByteCodeCacheEnabled;
+ (id)warmupScriptIdentifiers;
+ (id)warmupModularScriptIdentifiers;
+ (id)baseScriptExecutorCacheKey;
+ (id)defaultWarmupScriptsExtension;
+ (id)scripterInactivityTimerInSeconds;

@end
