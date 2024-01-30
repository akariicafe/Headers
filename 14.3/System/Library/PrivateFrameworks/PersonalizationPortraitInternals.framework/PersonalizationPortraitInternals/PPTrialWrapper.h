@class _PASLock, NSDictionary, PPSQLDatabase;

@interface PPTrialWrapper : NSObject {
    _PASLock *_lock;
    NSDictionary *_namespaceNamesIdsDict;
    BOOL _useDefaultFiles;
    PPSQLDatabase *_db;
}

+ (id)sharedInstance;

- (unsigned int)treatmentsHash;
- (void)callRegisteredUpdateHandlersForNamespaceName:(id)a0;
- (id)plistForFactorName:(id)a0 namespaceName:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)concatenatedTreatmentNames;
- (id)readableTreatmentsMapping;
- (void)updateMetadata;
- (id)filepathForFactor:(id)a0 namespaceName:(id)a1;
- (void)removeUpdateHandlerForToken:(id)a0;
- (void)clearOverrideFilepathForFileFactor:(id)a0 namespaceName:(id)a1;
- (void)updateMetadataForNamespaceName:(id)a0;
- (BOOL)hasFactor:(id)a0 namespaceName:(id)a1;
- (id)mlModelPathForModelName:(id)a0 namespaceName:(id)a1 error:(id *)a2;
- (void)callRegisteredUpdateHandlers;
- (id)levelForFactor:(id)a0 namespaceName:(id)a1;
- (void)updateMetadataWithGuardedData:(id)a0;
- (id)defaultFilepathForFactor:(id)a0 namespaceName:(id)a1;
- (id)mlModelForModelName:(id)a0 namespaceName:(id)a1 error:(id *)a2;
- (BOOL)resetMLModelsForNamespaceName:(id)a0 error:(id *)a1;
- (BOOL)hasModel:(id)a0 namespaceName:(id)a1;
- (id)initWithSettings:(id)a0 database:(id)a1 trialClient:(id)a2;
- (id)lastTreatmentUpdateForNamespaceName:(id)a0;
- (void)overrideFilepathForFileFactor:(id)a0 namespaceName:(id)a1 path:(id)a2;
- (id)treatmentNameForNamespaceName:(id)a0;
- (void)addUpdateHandlerForNamespaceName:(id)a0 block:(id /* block */)a1;
- (id)lazyPlistForFactorName:(id)a0 namespaceName:(id)a1 error:(id *)a2;
- (id)treatmentIdForNamespaceName:(id)a0;
- (void)setUseDefaultFiles:(BOOL)a0;

@end
