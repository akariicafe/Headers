@class MLModel;

@interface _PSContactEmbedding : NSObject

@property (readonly, nonatomic) MLModel *model;

- (id)initWithModel:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)convertToNSArrayFromMLMultiArray:(id)a0;
- (id)getEmbeddingForContact:(id)a0;
- (id)getEmbeddingFromFeatureDict:(id)a0;
- (id)getEmbeddingsForContacts:(id)a0;

@end
