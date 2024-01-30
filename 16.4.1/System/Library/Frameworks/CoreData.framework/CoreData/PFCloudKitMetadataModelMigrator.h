@class PFCloudKitMetadataMigrationContext, PFCloudKitMetricsClient, NSSQLCore, NSManagedObjectContext;

@interface PFCloudKitMetadataModelMigrator : NSObject {
    NSSQLCore *_store;
    NSManagedObjectContext *_metadataContext;
    PFCloudKitMetadataMigrationContext *_context;
    long long _databaseScope;
    PFCloudKitMetricsClient *_metricsClient;
}

- (void)dealloc;
- (id)initWithStore:(id)a0 metadataContext:(id)a1 databaseScope:(long long)a2 metricsClient:(id)a3;

@end
