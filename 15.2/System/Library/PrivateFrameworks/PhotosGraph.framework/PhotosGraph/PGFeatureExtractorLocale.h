@class NSLocale;

@interface PGFeatureExtractorLocale : PGFeatureExtractor

@property (retain, nonatomic) NSLocale *currentLocale;

- (id)featureNames;
- (void).cxx_destruct;
- (id)init;
- (id)name;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
