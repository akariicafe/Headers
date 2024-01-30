@class CDMTokenChain, NLv4EmbeddingTensor;

@interface CDMEmbeddingResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) NLv4EmbeddingTensor *embeddingTensor;
@property (readonly, nonatomic) CDMTokenChain *tokenChain;
@property (readonly, nonatomic) unsigned long long numTokens;
@property (readonly, nonatomic) unsigned long long numLayers;
@property (readonly, nonatomic) unsigned long long embeddingDim;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithTokenChain:(id)a0 embeddingTensor:(id)a1 numTokens:(unsigned long long)a2 numLayers:(unsigned long long)a3 embeddingDim:(unsigned long long)a4;

@end
