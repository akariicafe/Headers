@interface _BMLighthouseLedgerLibraryNode : _BMLibraryNode

+ (id)identifier;
+ (id)streamWithName:(id)a0;
+ (id)sublibraries;
+ (id)validKeyPaths;
+ (id)streamNames;
+ (id)MlruntimedEvent;
+ (id)LighthousePluginEvent;
+ (id)configurationForMlruntimedEvent;
+ (id)TrialdEvent;
+ (id)configurationForLighthousePluginEvent;
+ (id)configurationForTrialdEvent;
+ (id)storeConfigurationForLighthousePluginEvent;
+ (id)storeConfigurationForMlruntimedEvent;
+ (id)storeConfigurationForTrialdEvent;
+ (id)syncPolicyForLighthousePluginEvent;
+ (id)syncPolicyForMlruntimedEvent;
+ (id)syncPolicyForTrialdEvent;

@end
