@class NSDictionary, MLModelConfiguration, MLModelDescription;

@interface _MLVNDetectionPrintCustomModel : NSObject <MLCustomModel>

@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) unsigned long long detectionPrintRequestRevision;
@property (readonly, nonatomic) NSDictionary *expectedOutputShapeV1;
@property (readonly, nonatomic) MLModelConfiguration *configuration;

- (void).cxx_destruct;
- (id)featureValueFromDetectionPrint:(id)a0 featureName:(id)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
