@class NSString, NSArray, PGManager, PHPhotoLibrary, NSDictionary, PHACoreDuetDatasetStorage, PGFeatureTransformersForFeatureExtractors, NSNumber;

@interface PHADatasetBuilder : NSObject

@property (retain, nonatomic) NSArray *positiveLocalIdentifiers;
@property (retain, nonatomic) NSArray *negativeLocalIdentifiers;
@property (retain, nonatomic) PHACoreDuetDatasetStorage *datasetStore;
@property (retain, nonatomic) PGManager *graphManager;
@property (readonly, nonatomic) PGFeatureTransformersForFeatureExtractors *transformersForFeatureExtractors;
@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) long long labelPolicy;
@property (readonly, nonatomic) long long fingerprintVersion;
@property (readonly, nonatomic) NSString *inputName;
@property (readonly, nonatomic) NSString *labelName;
@property (readonly, nonatomic) NSString *positivesDatasetName;
@property (readonly, nonatomic) NSString *positivesSubsetName;
@property (readonly, nonatomic) NSString *negativesDatasetName;
@property (readonly, nonatomic) NSString *negativesSubsetName;
@property (readonly, nonatomic) NSNumber *totalNumberOfSamples;
@property (readonly, nonatomic) NSNumber *oversamplingRate;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSArray *augmenters;
@property (readonly, nonatomic) NSDictionary *filtersByDatasetName;

+ (id)_randomIndicesWithUpperBound:(unsigned long long)a0 count:(unsigned long long)a1;
+ (long long)datasetBuilderPolicyForPolicyName:(id)a0;
+ (long long)labelPolicyForLabelPolicyName:(id)a0;
+ (id)labelVectorsForLabelPolicy:(long long)a0;

- (void).cxx_destruct;
- (BOOL)_generateError:(id *)a0 errorCode:(long long)a1 errorMessage:(id)a2 underlyingError:(id)a3;
- (id)_assetPropertiesPredicateForKeywordFromFeatureExtractorFilters:(id)a0;
- (id)_currentFetchOptionPropertySet;
- (id)_datasetForLocalIdentifiers:(id)a0 positiveFingerprints:(id)a1 negativeFingerprints:(id)a2 error:(id *)a3;
- (id)_fetchObjectsForFingerprintVersion:(long long)a0 options:(id)a1 error:(id *)a2;
- (id)_fetchObjectsForFingerprintVersion:(long long)a0 options:(id)a1 localIdentifiers:(id)a2 error:(id *)a3;
- (id)_filterDataSamples:(id)a0 filters:(id)a1 numberOfSamples:(id)a2 error:(id *)a3;
- (id)_fingerprintsForDatasetName:(id)a0 localIdentifiers:(id)a1 labelName:(id)a2 numberOfSamples:(id)a3 filters:(id)a4 error:(id *)a5;
- (id)_fingerprintsForObjects:(id)a0 fingerprintVersion:(long long)a1 error:(id *)a2;
- (BOOL)_isFeatureNameForAssetPredicateWithFeatureName:(id)a0;
- (id)_localIdentifiersForCoreDuetDatasetName:(id)a0 subsetName:(id)a1;
- (id)_localIdentifiersToExcludeForLabel:(id)a0;
- (id)_mergeLocalIdentifiersFromPositiveLocalIdentifiers:(id)a0 negativeLocalIdentifiers:(id)a1 numberOfPositiveSamples:(id)a2 numberOfNegativeSamples:(id)a3 error:(id *)a4;
- (unsigned long long)_minAvailableNumberOfSamples;
- (id)_numberOfSamplesPerClassWithError:(id *)a0;
- (id)_performAugmentationsOnLabeledSamples:(id)a0 error:(id *)a1;
- (id)_randomSamplesOfCount:(unsigned long long)a0 filterPredicateForKeyword:(id)a1 labelName:(id)a2 error:(id *)a3;
- (id)_samplesOfCount:(unsigned long long)a0 fromLocalIdentifiers:(id)a1 filterPredicateForKeyword:(id)a2 error:(id *)a3;
- (long long)_validatePHObject:(id)a0 withFeatureValidator:(id)a1 error:(id *)a2;
- (id)datasetForEvaluationForLabel:(id)a0 error:(id *)a1;
- (id)datasetWithError:(id *)a0;
- (id)initWithFingerprintVersion:(long long)a0 policy:(long long)a1 labelPolicy:(long long)a2 inputName:(id)a3 labelName:(id)a4 positivesDatasetName:(id)a5 positivesSubsetName:(id)a6 negativesDatasetName:(id)a7 negativesSubsetName:(id)a8 totalNumberOfSamples:(id)a9 oversamplingRate:(id)a10 photoLibrary:(id)a11 graphManager:(id)a12 transformersForFeatureExtractors:(id)a13 augmenters:(id)a14 filtersByDatasetName:(id)a15;

@end
