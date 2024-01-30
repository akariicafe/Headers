@class NSDictionary, NSString;

@interface PHAPrivateFederatedLearningFiltersDecoder : NSObject

@property (readonly, nonatomic) NSDictionary *assetFeatureExtractorNameToClass;
@property (readonly, nonatomic) NSDictionary *graphFeatureExtractorNameToClass;
@property (readonly, nonatomic) NSDictionary *facesFeatureExtractorNameToClass;
@property (readonly, nonatomic) NSDictionary *assetPhotoLibraryFeatureExtractorNameToClass;
@property (readonly, nonatomic) NSString *fingerprintVersionString;

- (void).cxx_destruct;
- (BOOL)_generateError:(id *)a0 errorCode:(long long)a1 errorMessage:(id)a2;
- (id)featureExtractorFromName:(id)a0 error:(id *)a1;
- (long long)featureExtractorTypeForFeatureExtractorName:(id)a0;
- (id)featureValidatorForFilterConfig:(id)a0 featureExtractor:(id)a1 featureValidatorType:(long long)a2 featureExtractorType:(long long)a3 error:(id *)a4;
- (long long)featureValidatorTypeForFeatureExtractorName:(id)a0;
- (id)featureValidatorsForFilterConfigList:(id)a0 featureExtractor:(id)a1 featureValidatorType:(long long)a2 featureExtractorType:(long long)a3 error:(id *)a4;
- (id)filtersByDatasetNameFromDictionary:(id)a0 error:(id *)a1;
- (id)filtersFromDictionary:(id)a0 error:(id *)a1;
- (id)initWithFingeprintVersionString:(id)a0;
- (BOOL)validateFiltersForDatasetName:(id)a0 error:(id *)a1;

@end
