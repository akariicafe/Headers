@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRLanguageModelMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char linearInterpolationWeight : 1; unsigned char totalDurationInMs : 1; unsigned char numUtterances : 1; unsigned char numWords : 1; unsigned char numOutOfVocabularyWords : 1; unsigned char numInvalidTokens : 1; unsigned char numInvalidUtterances : 1; unsigned char perplexity : 1; unsigned char perplexityOne : 1; } _has;
}

@property (nonatomic) float linearInterpolationWeight;
@property (nonatomic) BOOL hasLinearInterpolationWeight;
@property (nonatomic) unsigned long long totalDurationInMs;
@property (nonatomic) BOOL hasTotalDurationInMs;
@property (nonatomic) unsigned int numUtterances;
@property (nonatomic) BOOL hasNumUtterances;
@property (nonatomic) unsigned int numWords;
@property (nonatomic) BOOL hasNumWords;
@property (nonatomic) unsigned int numOutOfVocabularyWords;
@property (nonatomic) BOOL hasNumOutOfVocabularyWords;
@property (nonatomic) unsigned int numInvalidTokens;
@property (nonatomic) BOOL hasNumInvalidTokens;
@property (nonatomic) unsigned int numInvalidUtterances;
@property (nonatomic) BOOL hasNumInvalidUtterances;
@property (nonatomic) float perplexity;
@property (nonatomic) BOOL hasPerplexity;
@property (nonatomic) float perplexityOne;
@property (nonatomic) BOOL hasPerplexityOne;
@property (copy, nonatomic) NSArray *ngramHits;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addNgramHits:(id)a0;
- (void)clearNgramHits;
- (unsigned long long)ngramHitsCount;
- (id)ngramHitsAtIndex:(unsigned long long)a0;

@end
