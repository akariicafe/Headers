@class SIRINLURequest, NLv4EmbeddingTensor;

@interface CDMCATIRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) NLv4EmbeddingTensor *embeddingTensor;
@property (readonly, nonatomic) SIRINLURequest *nluRequest;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithEmbedding:(id)a0 nluRequest:(id)a1;

@end
