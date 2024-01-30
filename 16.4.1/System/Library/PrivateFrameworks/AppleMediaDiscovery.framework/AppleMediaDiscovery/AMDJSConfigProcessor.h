@interface AMDJSConfigProcessor : NSObject

+ (id)getBinariesToFetch:(id)a0 withCurrentColdstartInfo:(id)a1 andAMDColdstartBinariesToDelete:(id)a2 andSummaryContainer:(id)a3;
+ (id)getModelsToFetch:(id)a0 withCurrentModelInfo:(id)a1 andAMDModlsToDelete:(id)a2 andSummaryContainer:(id)a3;
+ (id)getUrlsWithVersion:(id)a0;
+ (id)processConfig:(id)a0 withCallUUID:(id)a1 error:(id *)a2;
+ (id)refreshDescriptors:(id)a0 forDomain:(id)a1;
+ (id)saveInAppSegmentsWorkflow:(id)a0 inDomain:(id)a1 withCallUUID:(id)a2 andSummaryContainer:(id)a3;
+ (id)saveInFlightWorkflows:(id)a0 forModels:(id)a1 inDomain:(id)a2 withCallUUID:(id)a3 error:(id *)a4;
+ (id)validateConfig:(id)a0 forDomain:(id)a1;

@end
