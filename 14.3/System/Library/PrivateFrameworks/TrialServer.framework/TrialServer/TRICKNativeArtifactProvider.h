@class CKContainer, CKRecordZoneID, NSString;
@protocol TRINamespaceDescriptorProviding, TRIDateProviding, TRIPaths;

@interface TRICKNativeArtifactProvider : NSObject <TRIArtifactProvider>

@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) NSString *teamId;
@property (readonly, nonatomic) id<TRIDateProviding> dateProvider;
@property (readonly, nonatomic) id<TRINamespaceDescriptorProviding> namespaceDescriptorProvider;
@property (readonly, nonatomic) id<TRIPaths> paths;
@property (readonly, nonatomic) NSString *bundleId;

+ (id)providerForContainer:(int)a0 teamId:(id)a1 bundleId:(id)a2 dateProvider:(id)a3 namespaceDescriptorProvider:(id)a4 paths:(id)a5;
+ (id)mockSQLiteContainerWithIdentifier:(id)a0;
+ (id)cloudkitIdentifierForContainer:(int)a0;
+ (id)containerForIdentifier:(id)a0;
+ (id)recordZoneForContainerIdentifier:(id)a0 teamId:(id)a1;
+ (int)containerFromCkContainer:(id)a0;

- (void).cxx_destruct;
- (void)fetchExperimentWithLatestDeploymentForExperimentId:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchTreatmentWithId:(id)a0 assetIndexes:(id)a1 options:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)configurationFromOptions:(id)a0;
- (id)initWithCloudKitContainer:(int)a0 teamId:(id)a1 bundleId:(id)a2 dateProvider:(id)a3 namespaceDescriptorProvider:(id)a4 paths:(id)a5;
- (id)queryOperationForRecordType:(id)a0 predicate:(id)a1 options:(id)a2 recordFetchedBlock:(id /* block */)a3 queryCompletionBlock:(id /* block */)a4;
- (void)_fetchExperimentWithExperimentId:(id)a0 deploymentId:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)_fetchNotificationsWithQueryType:(unsigned long long)a0 withCursor:(id)a1 withNamespaceNames:(id)a2 sinceDate:(id)a3 options:(id)a4 resultsHandler:(id /* block */)a5;
- (id)queryOperationWithCursor:(id)a0 options:(id)a1 recordFetchedBlock:(id /* block */)a2 queryCompletionBlock:(id /* block */)a3;
- (void)_fetchExperimentsWithCursor:(id)a0 withNamespaceNames:(id)a1 sinceDate:(id)a2 fetchRollbacksOnly:(BOOL)a3 options:(id)a4 resultsHandler:(id /* block */)a5;
- (id)_selectAssetIndexesFromTreatment:(id)a0 requestedAssetIndexes:(id)a1;
- (void)fetchExperimentNotificationsWithNamespaceNames:(id)a0 rollbacksOnly:(BOOL)a1 lastFetchDateOverride:(id)a2 options:(id)a3 resultsHandler:(id /* block */)a4;
- (void)fetchExperimentWithExperimentDeployment:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;

@end
