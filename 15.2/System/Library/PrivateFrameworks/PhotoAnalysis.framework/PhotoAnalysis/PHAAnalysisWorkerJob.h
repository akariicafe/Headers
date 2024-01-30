@class NSDictionary, NSMutableDictionary;

@interface PHAAnalysisWorkerJob : PHAAssetProcessingJob

@property (readonly, nonatomic) BOOL canUseNetwork;
@property (readonly, nonatomic) BOOL shouldBackoffForFailedNoResourceErrors;
@property (readonly, nonatomic) NSDictionary *workerFlagsByAssetLocalIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *ignoreUntilDatesByAssetLocalIdentifier;
@property (nonatomic) BOOL persistsAnalysisState;

- (void)finish;
- (void)prepare;
- (id)description;
- (void).cxx_destruct;
- (id)statusAsDictionary;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;
- (id)_fetchAllAssetsForLocalIdentifiers:(id)a0;
- (void)_markAssetsPending;
- (void)_processFailures;
- (id)_resultsDescription;
- (id)initWithWorkerType:(short)a0 scenario:(unsigned long long)a1 workInfos:(id)a2 canUseNetwork:(BOOL)a3 shouldBackoffForFailedNoResource:(BOOL)a4 library:(id)a5;
- (id)dataLoaderOptions;
- (int)workerFlagsForAssetLocalIdentifier:(id)a0;
- (void)setIgnoreUntilDate:(id)a0 forAssetLocalIdentifier:(id)a1;
- (id)ignoreUntilDateForAssetLocalIdentifier:(id)a0;

@end
