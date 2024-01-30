@class MLModel, MLModelAsset;

@interface SSCoreMLInterface : NSObject {
    MLModelAsset *asset;
    MLModel *model;
}

- (void).cxx_destruct;
- (id)initSpecificModel:(id)a0 error:(id *)a1;
- (float)predict:(id)a0 error:(id *)a1;
- (id)getVersionString;
- (id)getDescription;
- (id)initWithURL:(id)a0 error:(id *)a1;

@end
