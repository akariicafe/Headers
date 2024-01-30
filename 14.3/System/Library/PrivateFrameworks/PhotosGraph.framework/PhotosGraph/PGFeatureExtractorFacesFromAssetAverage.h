@class NSString, MAFeatureExtractor;

@interface PGFeatureExtractorFacesFromAssetAverage : PGFacesFromAssetFeatureExtractor

@property (readonly) MAFeatureExtractor *faceFeatureExtractor;
@property (readonly) NSString *name;

- (void).cxx_destruct;
- (id)featureNames;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)initWithFaceFeatureExtractor:(id)a0 name:(id)a1;
- (id)floatVectorWithFaces:(id)a0 error:(id *)a1;
- (BOOL)_generateError:(id *)a0 withCode:(long long)a1 andMessage:(id)a2 underlyingError:(id)a3;

@end
