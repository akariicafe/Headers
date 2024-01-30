@class NSString, _ATXDataStore;

@interface ATXCandidateRelevanceModelDataStore : NSObject <ATXCandidateRelevanceModelDataStoreProtocol> {
    _ATXDataStore *_dataStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clientModelNamesWithTrainedRelevanceModels;
- (void)deleteRowsWithIds:(id)a0 fromTableWithName:(id)a1;
- (id)initWithDataStore:(id)a0;
- (long long)datasetMetadataIdForDatasetMetadata:(id)a0 error:(id *)a1;
- (long long)candidateIdForCandidate:(id)a0 error:(id *)a1;
- (id)mostRecentVerifiedTrainDateForClientModelName:(id)a0;
- (id)mostRecentVerifiedTrainingResultsForClientModelName:(id)a0;
- (unsigned long long)numberOfFeaturizationManagerIds;
- (id)trainingResultsForClientModelName:(id)a0 modelUUID:(id)a1;
- (id)idsInTableWithName:(id)a0;
- (unsigned long long)numberOfCandidateIds;
- (void)deleteTrainedModelsWithTrainDateOlderThanDate:(id)a0;
- (id)modelUUIDToTrainDateForClientModelName:(id)a0;
- (void)writeSuccessfulVerificationForModelUUID:(id)a0;
- (long long)featurizationManagerIdForFeaturizationManager:(id)a0 error:(id *)a1;
- (unsigned long long)numberOfDatasetMetadataIds;
- (void).cxx_destruct;
- (BOOL)isModelUUIDVerified:(id)a0;
- (id)init;
- (unsigned long long)numberOfTrainedModels;
- (void)receiveMostRecentVerifiedTrainedModelTrainingResults:(id /* block */)a0 completion:(id /* block */)a1;
- (void)writeVerificationStatusForModelUUID:(id)a0 clientModelName:(id)a1 expectedNumberOfModels:(unsigned long long)a2;
- (void)writeTrainingResult:(id)a0;
- (void)receiveMostRecentVerifiedTrainedModelTrainingResults:(id /* block */)a0 clientModelName:(id)a1 completion:(id /* block */)a2;
- (void)receiveTrainingResult:(id /* block */)a0 completion:(id /* block */)a1 modelUUID:(id)a2 clientModelName:(id)a3;

@end
