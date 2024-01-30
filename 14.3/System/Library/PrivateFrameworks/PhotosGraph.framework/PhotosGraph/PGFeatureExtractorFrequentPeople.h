@class PHFetchResult;

@interface PGFeatureExtractorFrequentPeople : PGAssetFeatureExtractor

@property (readonly, nonatomic) unsigned long long numberOfFrequentPeopleToExtract;
@property (retain, nonatomic) PHFetchResult *frequencySortedPersons;

- (void).cxx_destruct;
- (id)featureNames;
- (id)name;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)initWithNumberOfFrequentPeopleToExtract:(unsigned long long)a0;

@end
