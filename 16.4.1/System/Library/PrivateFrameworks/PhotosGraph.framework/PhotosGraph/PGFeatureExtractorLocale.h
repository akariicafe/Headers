@class NSLocale;

@interface PGFeatureExtractorLocale : PGFeatureExtractor

@property (retain, nonatomic) NSLocale *currentLocale;

- (id)featureNames;
- (id)init;
- (void).cxx_destruct;
- (id)name;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (long long)featureLength;

@end
