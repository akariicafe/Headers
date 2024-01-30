@interface CDMPlumServiceUtils : NSObject

+ (id)buildPLUMRequestWithTokens:(id)a0 embedding:(id)a1 spans:(id)a2 numTokensOfEmbedding:(unsigned long long)a3 numLayersOfEmbedding:(unsigned long long)a4 embeddingDimOfEmbedding:(unsigned long long)a5;
+ (id)buildSetupPLUMRequest;
+ (id)CDMTokenChainToUPPLTokenization:(id)a0;
+ (id)NLv4EmbeddingTensorToUPPLEmbeddingTensor:(id)a0 withNumTokens:(unsigned long long)a1 withNumLayers:(unsigned long long)a2 withEmbeddingDim:(unsigned long long)a3;
+ (id)nluMatchingSpanToUPPLMatchedSpan:(id)a0;
+ (id)CDMTokenToUPPLToken:(id)a0;

@end
