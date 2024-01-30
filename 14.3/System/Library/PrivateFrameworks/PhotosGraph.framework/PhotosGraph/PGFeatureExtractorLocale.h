@class NSLocale;

@interface PGFeatureExtractorLocale : PGFeatureExtractor

@property (retain, nonatomic) NSLocale *currentLocale;

- (id)init;
- (void).cxx_destruct;
- (id)featureNames;
- (id)name;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
