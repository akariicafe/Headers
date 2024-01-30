@class NSUUID, RTDistanceCalculator, NSArray, RTInferredMapItemDeduper, RTRelabelerParameters;

@interface RTRelabeler : NSObject

@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTInferredMapItemDeduper *deduper;
@property (readonly, nonatomic) RTRelabelerParameters *parameters;
@property (readonly, nonatomic) NSUUID *placeholderUUID;
@property (readonly, nonatomic) NSArray *hallucinatedUUIDs;
@property (nonatomic) BOOL loggingEnabled;

+ (BOOL)placeholderCandidate:(id)a0 knownPlaceTypeThreshold:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (id)createProbabilityVectorForNonRevGeoCandidate:(id)a0 uniqueNonRevGeoMapItems:(id)a1 hallucinatedUUIDs:(id)a2 placeholderUUID:(id)a3 placeholderWeight:(double)a4 error:(id *)a5;
- (id)combineProbabilityVector:(id)a0 prior:(id)a1 error:(id *)a2;
- (double)contextDistanceThreshold;
- (id)convertAndNormalizeLogProbMap:(id)a0 error:(id *)a1;
- (id)convertLowConfidenceCandidates:(id)a0 error:(id *)a1;
- (id)createProbabilityVectorForCandidate:(id)a0 uniqueNonRevGeoMapItems:(id)a1 hallucinatedUUIDs:(id)a2 error:(id *)a3;
- (id)createProbabilityVectorForRevGeoCandidate:(id)a0 uniqueNonRevGeoMapItems:(id)a1 hallucinatedUUIDs:(id)a2 placeholderUUID:(id)a3 revGeoConfidence:(double)a4 clippingRadius:(double)a5 sigma:(double)a6 error:(id *)a7;
- (id)createUUIDToPriorMapForContextNonRevGeoCandidates:(id)a0 contextRevGeoCandidates:(id)a1 uniqueNonRevGeoMapItems:(id)a2 hallucinatedUUIDs:(id)a3 baseCount:(double)a4 error:(id *)a5;
- (BOOL)dedupeRelabelingCandidate:(id)a0 nonRevGeoCandidates:(id)a1 deduper:(id)a2 inferredMapItemDeduperState:(id *)a3 dedupedRelabelingCandidate:(id *)a4 dedupedNonRevGeoCandidates:(id *)a5 error:(id *)a6;
- (void)enableLogging:(BOOL)a0;
- (id)filterAoiCandidates:(id)a0 error:(id *)a1;
- (id)filterFarCandidates:(id)a0 referenceLocation:(id)a1 error:(id *)a2;
- (id)filterOldCandidates:(id)a0 referenceDate:(id)a1 error:(id *)a2;
- (id)generateRelabeledInferredMapItemsFromProbMap:(id)a0 inferredMapItemDeduperState:(id)a1 hallucinatedUUIDs:(id)a2 originalCandidate:(id)a3 referenceLocation:(id)a4 error:(id *)a5;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1;
- (id)initWithDistanceCalculator:(id)a0 parameters:(id)a1;
- (BOOL)partitionCandidates:(id)a0 intoNonRevGeoCandidates:(id *)a1 revGeoCandidates:(id *)a2 error:(id *)a3;
- (BOOL)placeholderCandidate:(id)a0;
- (id)preprocessContextCandidates:(id)a0 relabelingCandidate:(id)a1 error:(id *)a2;
- (id)relabelCandidate:(id)a0 usingContextCandidates:(id)a1 metrics:(id)a2 outPriorVector:(id *)a3 outObservationVector:(id *)a4 outPosteriorVector:(id *)a5 error:(id *)a6;
- (id)relabeledInferredMapItemFromProbVector:(id)a0 error:(id *)a1;
- (id)relabeledProbVectorForCandidate:(id)a0 usingContextNonRevGeoCandidates:(id)a1 contextRevGeoCandidates:(id)a2 inferredMapItemDeduperState:(id)a3 referenceLocation:(id)a4 outPriorVector:(id *)a5 outObservationVector:(id *)a6 outPosteriorVector:(id *)a7 error:(id *)a8;

@end
