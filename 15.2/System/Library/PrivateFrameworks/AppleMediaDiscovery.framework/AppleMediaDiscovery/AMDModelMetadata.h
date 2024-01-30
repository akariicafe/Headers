@class NSString, NSMutableDictionary, AMDModelAssetsMetadata;

@interface AMDModelMetadata : NSObject

@property (retain, nonatomic) NSString *modelId;
@property (retain, nonatomic) NSString *modelUid;
@property char modelArchType;
@property (retain, nonatomic) NSMutableDictionary *inputsMetadata;
@property (retain, nonatomic) NSMutableDictionary *outputsMetadata;
@property (retain, nonatomic) AMDModelAssetsMetadata *assetsMetadata;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithMetadataJSON:(id)a0 error:(id *)a1;
- (id)getAssetsMetadata;
- (id)getModelUid;
- (id)getInputsMetadata;
- (id)getOutputsMetadata;
- (char)getModelArchType;

@end
