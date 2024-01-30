@class MLModel, MLModelAsset;

@interface SSCoreMLInterface : NSObject {
    MLModelAsset *asset;
    MLModel *model;
}

- (id)getVersionString;
- (void).cxx_destruct;
- (float)predict:(id)a0 error:(id *)a1;
- (float)predictFromValues:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)initSpecificModel:(id)a0 error:(id *)a1;
- (id)getDescription;

@end
