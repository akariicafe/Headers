@interface _DPStrings : NSObject

+ (id)errorDomain;
+ (id)systemBlacklistDirectoryPath;
+ (id)runtimeBlacklistDirectoryPath;
+ (id)daemonMachServiceName;
+ (id)agentMachServiceName;
+ (id)keyNamesPath;
+ (id)reportsDirectoryPath;
+ (BOOL)isDPrivacyAgentD;
+ (BOOL)appleInternalConfigExists;
+ (id)configDirectoryPath;
+ (id)databaseDirectoryPath;
+ (id)unitTestOutputDirectoryPath;
+ (id)unitTestDatabaseDirectoryPath:(id)a0;
+ (id)sandboxName;
+ (id)ENReportsDirectoryPath;
+ (id)keyPropertiesPath;
+ (id)budgetPropertiesPath;
+ (id)algorithmParametersPath;
+ (id)defaultBudgetKey;
+ (id)ipsDirectoryPath;
+ (id)bitValueMapDirectoryPath;
+ (id)submissionServiceAccessEntitlement;
+ (id)unitTestInputDirectoryPath;
+ (id)unitTestReportsDirectoryPath:(id)a0;
+ (id)unitTestSystemBlacklistDirectoryPath:(id)a0;
+ (id)unitTestRuntimeBlacklistDirectoryPath:(id)a0;
+ (id)unitTestBitValueMapDirectoryPath:(id)a0;
+ (id)dataValueStorageClass;

@end
