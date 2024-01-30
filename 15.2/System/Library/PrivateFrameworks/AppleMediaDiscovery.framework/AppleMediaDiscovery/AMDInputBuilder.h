@class NSString, NSMutableDictionary;

@interface AMDInputBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *inputsDefinitions;
@property (retain, nonatomic) NSString *modelId;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithDictionary:(id)a0 andModelId:(id)a1;
- (id)getInputsWithMetadata:(id)a0 usingFeatureProvider:(id)a1 andModelAssets:(id)a2 error:(id *)a3;
- (void *)allocateMemoryForInput:(long long)a0 withSize:(int)a1;
- (id)getModelInput:(id)a0 usingMetadata:(id)a1 withInputFeatureDefinition:(id)a2;
- (id)getModelInput:(id)a0 usingMetadata:(id)a1 usingFeatureProvider:(id)a2 andModelAssets:(id)a3;
- (id)getMinimalCToLMapping;

@end
