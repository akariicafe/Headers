@interface CRWrappingClassifierFeatureExtractor : NSObject

+ (void)_extractLexicalFeaturesTo:(void *)a0 string1:(id)a1 string2:(id)a2 configuration:(id)a3 forCJK:(BOOL)a4;
+ (void)_extractBagOfTokensFeaturesTo:(void *)a0 vocabulary:(id)a1 tokens:(id)a2 beginIndex:(long long)a3 endIndex:(long long)a4;
+ (void)_extractEvaluatedFeaturesTo:(void *)a0 evaluation:(id)a1;
+ (void)_extractGeometricFeaturesTo:(void *)a0 evaluation:(id)a1;
+ (void)_extractLanguageModelFeaturesTo:(void *)a0 evaluation:(id)a1;
+ (id)_tokenizeString:(id)a0 usingWordUnits:(BOOL)a1 excludeWhitespace:(BOOL)a2;
+ (id)extractFeatureMultiArrayForLocale:(id)a0 textFeature:(id)a1 lastFeature:(id)a2 evaluation:(id)a3 imageSize:(struct CGSize { double x0; double x1; })a4;
+ (struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; })extractFeatureVectorForLocale:(id)a0 string1:(id)a1 string2:(id)a2 evaluation:(id)a3 imageSize:(struct CGSize { double x0; double x1; })a4;
+ (id)extractFeaturesForLocale:(id)a0 textFeature:(id)a1 lastFeature:(id)a2 imageSize:(struct CGSize { double x0; double x1; })a3 revision:(unsigned long long)a4;
+ (id)multiArrayFromVector:(const void *)a0;
+ (id)nsArrayFromVector:(const void *)a0;

@end
