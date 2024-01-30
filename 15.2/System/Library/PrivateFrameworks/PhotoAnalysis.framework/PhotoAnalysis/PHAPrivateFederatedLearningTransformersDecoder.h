@class NSDictionary;

@interface PHAPrivateFederatedLearningTransformersDecoder : NSObject

@property (readonly, nonatomic) NSDictionary *transformerNameToClass;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_generateError:(id *)a0 errorCode:(long long)a1 errorMessage:(id)a2;
- (id)transformersForFeatureExtractorsFromDictionary:(id)a0 error:(id *)a1;
- (id)instancesForTransformerConfigList:(id)a0 error:(id *)a1;
- (id)instanceForTransformerConfig:(id)a0 error:(id *)a1;

@end
