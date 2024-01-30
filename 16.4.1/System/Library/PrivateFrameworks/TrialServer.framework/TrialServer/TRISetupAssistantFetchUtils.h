@interface TRISetupAssistantFetchUtils : NSObject

+ (id)getNamespaceNamesWithFetchDuringSetupAssistantEnabledWithTRIPaths:(id)a0;
+ (id)getValueInKeyValueStore:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)getIncompatibleNamespaceNamesForTriClientRollout:(id)a0 namespaceDescriptorProvider:(id)a1;
+ (BOOL)stopSetupAssistantFetchWithServerContext:(id)a0 namespaceNames:(id)a1 error:(id *)a2;
+ (id)registerFinalizeBlockForDownloadLatencyTelemetryWithServerContext:(id)a0;
+ (BOOL)setValueInKeyValueStore:(id)a0 key:(id)a1 value:(id)a2 error:(id *)a3;
+ (BOOL)removeNamespaceNamesWithRolloutForServerContext:(id)a0 namespaceNames:(id)a1;

@end
