@interface PPTDataIngesterUtilities : NSObject

+ (id)columnNamesForDataSource:(id)a0 metricsFilepath:(id)a1;
+ (id)dataSourceForMetricDefinition:(id)a0;
+ (id)dataSourceForSubsystem:(id)a0 category:(id)a1;
+ (long long)fileTypeForFilepath:(id)a0;
+ (id)filepathForMetricDefinition:(id)a0;
+ (id)filepathForSubsystem:(id)a0 category:(id)a1;
+ (BOOL)isMetricMetadataFilepath:(id)a0;
+ (BOOL)isMetricStorageFilepath:(id)a0;

@end
