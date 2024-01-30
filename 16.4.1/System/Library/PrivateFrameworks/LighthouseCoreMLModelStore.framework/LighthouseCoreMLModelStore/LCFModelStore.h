@class NSURL, NSString, LCFModelStoreModelMetadataProvider;

@interface LCFModelStore : NSObject

@property (readonly, nonatomic) NSURL *originalEmptyModelURL;
@property (readonly, nonatomic) NSURL *modelStoreRootWithKeyURL;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSURL *modelStoreRootURL;
@property (readonly, nonatomic) NSURL *emptyModelURL;
@property (readonly, nonatomic) LCFModelStoreModelMetadataProvider *modelMetadataProvider;

- (BOOL)clear;
- (void).cxx_destruct;
- (BOOL)deleteModel:(id)a0;
- (id)getBaseModelURL:(id)a0;
- (id)getModelMetadata:(id)a0;
- (id)getModelURL:(id)a0;
- (id)init:(id)a0 modelStoreRootURL:(id)a1;
- (id)init:(id)a0 modelStoreRootURL:(id)a1 originalEmptyModelURL:(id)a2;
- (id)listModelNames;
- (BOOL)markModelTrained:(id)a0;
- (BOOL)setModelMetadata:(id)a0 key:(id)a1 value:(id)a2;
- (id)storeModel:(id)a0;

@end
