@class NLv4EmbeddingTensor, NSString, NSArray, CDMTokenChain;

@interface CDMPlumRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) NSString *utterance;
@property (readonly, nonatomic) NSString *normalizedUtterance;
@property (readonly, nonatomic) unsigned long long numTokensOfEmbedding;
@property (readonly, nonatomic) unsigned long long numLayersOfEmbedding;
@property (readonly, nonatomic) unsigned long long embeddingDimOfEmbedding;
@property (readonly, nonatomic) CDMTokenChain *tokenChain;
@property (readonly, nonatomic) NSArray *matchingSpans;
@property (readonly, nonatomic) NLv4EmbeddingTensor *embeddingTensor;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithTokenChain:(id)a0 matchingSpans:(id)a1 embeddingTensor:(id)a2 numTokensOfEmbedding:(unsigned long long)a3 numLayersOfEmbedding:(unsigned long long)a4 embeddingDimOfEmbedding:(unsigned long long)a5;

@end
