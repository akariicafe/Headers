@class NSString, NSArray;

@interface MAFeatureExtractor : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *featureNames;

- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)defaultFloatVectorWithError:(id *)a0;
- (id)featureVectorsWithEntities:(id)a0 entityLabels:(id)a1 error:(id *)a2;
- (id)featureVectorWithEntity:(id)a0 error:(id *)a1;
- (id)floatMatrixWithEntities:(id)a0 error:(id *)a1;

@end
