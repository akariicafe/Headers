@class NSString;

@interface NLEmbedding : NSObject {
    void *_embedding;
}

@property (readonly) unsigned long long dimension;
@property (readonly) unsigned long long vocabularySize;
@property (readonly, copy) NSString *language;
@property (readonly) unsigned long long revision;

+ (id)wordEmbeddingForLanguage:(id)a0;
+ (id)sentenceEmbeddingForLanguage:(id)a0;
+ (id)wordEmbeddingForLanguage:(id)a0 revision:(unsigned long long)a1;
+ (id)contextualWordEmbeddingForLanguage:(id)a0 revision:(unsigned long long)a1;
+ (id)embeddingWithData:(id)a0 error:(id *)a1;
+ (id)_embeddingWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)_embeddingWithData:(id)a0 error:(id *)a1;
+ (id)supportedRevisionsForType:(id)a0 locale:(id)a1;
+ (unsigned long long)currentRevisionForType:(id)a0 locale:(id)a1;
+ (BOOL)_writeEmbeddingForDictionary:(id)a0 language:(id)a1 revision:(unsigned long long)a2 toURL:(id)a3 orData:(id)a4 error:(id *)a5;
+ (id)embeddingDataForDictionary:(id)a0 language:(id)a1 revision:(unsigned long long)a2 error:(id *)a3;
+ (id)modelDescriptionForEmbedding:(id)a0;
+ (id)contextualWordEmbeddingForLanguage:(id)a0;
+ (id)sentenceEmbeddingForLanguage:(id)a0 revision:(unsigned long long)a1;
+ (id)supportedRevisionsForLanguage:(id)a0;
+ (id)supportedContextualWordEmbeddingRevisionsForLanguage:(id)a0;
+ (id)supportedSentenceEmbeddingRevisionsForLanguage:(id)a0;
+ (unsigned long long)currentRevisionForLanguage:(id)a0;
+ (unsigned long long)currentContextualWordEmbeddingRevisionForLanguage:(id)a0;
+ (unsigned long long)currentSentenceEmbeddingRevisionForLanguage:(id)a0;
+ (BOOL)writeEmbeddingForDictionary:(id)a0 language:(id)a1 revision:(unsigned long long)a2 toURL:(id)a3 error:(id *)a4;
+ (BOOL)writeEmbeddingMLModelForDictionary:(id)a0 language:(id)a1 revision:(unsigned long long)a2 toURL:(id)a3 options:(id)a4 error:(id *)a5;
+ (id)embeddingWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)embeddingWithMLModel:(id)a0 error:(id *)a1;

- (BOOL)containsString:(id)a0;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)neighborsForString:(id)a0 maximumCount:(unsigned long long)a1 maximumDistance:(double)a2 distanceType:(long long)a3;
- (id)initWithMLModel:(id)a0 error:(id *)a1;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithLocale:(struct __CFLocale { } *)a0;
- (id)initWithNLModel:(id)a0 error:(id *)a1;
- (id)vectorsForSentences:(id)a0 maxTokens:(unsigned long long)a1;
- (id)initWithType:(id)a0 locale:(id)a1 version:(id)a2;
- (void *)_createEmbeddingRefWithContentsOfURL:(id)a0;
- (void *)_createEmbeddingRefWithData:(id)a0;
- (double)distanceBetweenString:(id)a0 andString:(id)a1 distanceType:(long long)a2;
- (void)enumerateNeighborsForString:(id)a0 maximumCount:(unsigned long long)a1 maximumDistance:(double)a2 distanceType:(long long)a3 usingBlock:(id /* block */)a4;
- (void)enumerateNeighborsForVector:(id)a0 maximumCount:(unsigned long long)a1 maximumDistance:(double)a2 distanceType:(long long)a3 usingBlock:(id /* block */)a4;
- (id)neighborsForVector:(id)a0 maximumCount:(unsigned long long)a1 maximumDistance:(double)a2 distanceType:(long long)a3;
- (id)vectorForString:(id)a0;
- (id)_initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)_initWithData:(id)a0 error:(id *)a1;
- (id)initContextualEmbeddingWithLocale:(struct __CFLocale { } *)a0;
- (id)initSentenceEmbeddingWithLocale:(struct __CFLocale { } *)a0;
- (void)enumerateNeighborsForString:(id)a0 maximumCount:(unsigned long long)a1 distanceType:(long long)a2 usingBlock:(id /* block */)a3;
- (id)neighborsForString:(id)a0 maximumCount:(unsigned long long)a1 distanceType:(long long)a2;
- (void)enumerateNeighborsForVector:(id)a0 maximumCount:(unsigned long long)a1 distanceType:(long long)a2 usingBlock:(id /* block */)a3;
- (id)neighborsForVector:(id)a0 maximumCount:(unsigned long long)a1 distanceType:(long long)a2;
- (BOOL)getVector:(float *)a0 forString:(id)a1;

@end
