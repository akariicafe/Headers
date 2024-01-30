@class NSString, CESRModelProperties;

@interface _CESRModelPropertiesMutation : NSObject <CESRModelPropertiesMutating> {
    CESRModelProperties *_baseModel;
    NSString *_modelVersion;
    NSString *_modelType;
    NSString *_modelRoot;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasModelVersion : 1; unsigned char hasModelType : 1; unsigned char hasModelRoot : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setModelVersion:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setModelType:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setModelRoot:(id)a0;

@end
