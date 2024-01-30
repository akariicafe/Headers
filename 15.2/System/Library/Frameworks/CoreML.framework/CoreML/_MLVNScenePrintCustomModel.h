@class MLModelConfiguration, MLModelDescription;

@interface _MLVNScenePrintCustomModel : NSObject <MLCustomModel>

@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) unsigned long long scenePrintRequestRevision;
@property (readonly, nonatomic) MLModelConfiguration *configuration;

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;
- (id)featureValueFromScenePrint:(id)a0 elementSize:(unsigned long long)a1;

@end
