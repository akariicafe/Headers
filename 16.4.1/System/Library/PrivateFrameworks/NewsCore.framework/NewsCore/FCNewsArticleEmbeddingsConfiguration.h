@class FCNewsArticleEmbeddingConfiguration;

@interface FCNewsArticleEmbeddingsConfiguration : NSObject

@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *titleEmbeddingConfiguration;
@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *bodyEmbeddingConfiguration;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
