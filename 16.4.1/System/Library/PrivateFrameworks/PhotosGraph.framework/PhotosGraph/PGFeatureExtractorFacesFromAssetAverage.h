@class NSString, MAFeatureExtractor;

@interface PGFeatureExtractorFacesFromAssetAverage : PGFacesFromAssetFeatureExtractor

@property (readonly) MAFeatureExtractor *faceFeatureExtractor;
@property (readonly) NSString *name;

- (id)featureNames;
- (void).cxx_destruct;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)_generateError:(id *)a0 withCode:(long long)a1 andMessage:(id)a2 underlyingError:(id)a3;
- (long long)featureLength;
- (id)floatVectorWithFaces:(id)a0 error:(id *)a1;
- (id)initWithFaceFeatureExtractor:(id)a0 name:(id)a1;

@end
