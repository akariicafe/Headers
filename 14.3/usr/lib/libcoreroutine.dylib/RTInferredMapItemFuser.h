@class NSUUID, RTDistanceCalculator, RTInferredMapItemFuserParameters, RTInferredMapItemDeduper, RTLearnedLocationStore;

@interface RTInferredMapItemFuser : NSObject

@property (retain, nonatomic) RTInferredMapItemDeduper *deduper;
@property (readonly, nonatomic) NSUUID *placeholderUUID;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTInferredMapItemFuserParameters *parameters;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 learnedLocationStore:(id)a2;
- (id)fusedInferredMapItemsUsingCandidates:(id)a0 referenceLocation:(id)a1 snapToBestKnownPlaceAndAoi:(BOOL)a2 error:(id *)a3;
- (id)bestFromFusedInferredMapItems:(id)a0;
- (id)initWithDistanceCalculator:(id)a0 parameters:(id)a1 learnedLocationStore:(id)a2;
- (id)filterCandidates:(id)a0 referenceLocation:(id)a1 error:(id *)a2;
- (id)snapToBestKnownPlaceType:(id)a0 error:(id *)a1;
- (id)snapToBestAOICandidate:(id)a0 error:(id *)a1;
- (id)filterLearnedPlaceCandidates:(id)a0 referenceLocation:(id)a1 error:(id *)a2;
- (id)filterUnknownLearnedPlaceCandidates:(id)a0;
- (BOOL)updateNonAoiUUIDToLogProbMap:(id)a0 bluePOIDedupedInferredMapItems:(id)a1 error:(id *)a2;
- (BOOL)updateNonAoiUUIDToLogProbMap:(id)a0 nonBluePOIDedupedInferredMapItems:(id)a1 error:(id *)a2;
- (id)subtractMaxLogarithmFromLogProbMap:(id)a0 error:(id *)a1;
- (double)logSumExpOfLogProbMap:(id)a0 error:(id *)a1;
- (id)preprocessCandidates:(id)a0 referenceLocation:(id)a1 snapToBestKnownPlaceAndAoi:(BOOL)a2 error:(id *)a3;
- (id)populateMapItemSourceEntriesForDedupedInferredMapItems:(id)a0 error:(id *)a1;
- (BOOL)partitionDedupedInferredMapItems:(id)a0 intoNonAoiDedupedInferredMapItems:(id *)a1 aoiDedupedInferredMapItems:(id *)a2 error:(id *)a3;
- (BOOL)initializeEntriesForNonAoiDedupedInferredMapItems:(id)a0 aoiDedupedInferredMapItems:(id)a1 nonAoiUUIDToLogProbMap:(id *)a2 aoiUUIDToProbArrayMap:(id *)a3 error:(id *)a4;
- (BOOL)updateAoiUUIDToProbArrayMap:(id)a0 aoiDedupedInferredMapItems:(id)a1 error:(id *)a2;
- (BOOL)updateNonAoiUUIDToLogProbMap:(id)a0 nonAoiDedupedInferredMapItems:(id)a1 error:(id *)a2;
- (id)normalizeNonAoiUUIDToLogProbMap:(id)a0 aoiUUIDToProbArrayMap:(id)a1 error:(id *)a2;
- (id)fusedInferredMapItemsFromUUIDToProbMap:(id)a0 inferredMapItemDeduperState:(id)a1 uuidToFusedMapItemSourceMap:(id)a2 referenceLocation:(id)a3 error:(id *)a4;
- (id)highestConfidenceAoiMapItemFromFusedInferredMapItems:(id)a0;

@end
