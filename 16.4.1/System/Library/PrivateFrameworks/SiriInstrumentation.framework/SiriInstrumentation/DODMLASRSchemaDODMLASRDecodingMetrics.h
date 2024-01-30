@class NSArray, NSData;

@interface DODMLASRSchemaDODMLASRDecodingMetrics : SISchemaInstrumentationMessage {
    struct { unsigned char wallRealTimeFactor : 1; unsigned char averageActiveTokensPerFrame : 1; unsigned char jitQueryDurationInMs : 1; unsigned char jitLanguageModelEnrollmentDurationInMs : 1; } _has;
}

@property (nonatomic) float wallRealTimeFactor;
@property (nonatomic) BOOL hasWallRealTimeFactor;
@property (copy, nonatomic) NSArray *languageModelInterpolationWeights;
@property (nonatomic) float averageActiveTokensPerFrame;
@property (nonatomic) BOOL hasAverageActiveTokensPerFrame;
@property (nonatomic) unsigned long long jitQueryDurationInMs;
@property (nonatomic) BOOL hasJitQueryDurationInMs;
@property (nonatomic) unsigned long long jitLanguageModelEnrollmentDurationInMs;
@property (nonatomic) BOOL hasJitLanguageModelEnrollmentDurationInMs;
@property (copy, nonatomic) NSArray *preprocessingEntityCategoryCounts;
@property (copy, nonatomic) NSArray *postprocessingEntityCategoryCounts;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addLanguageModelInterpolationWeights:(id)a0;
- (void)addPostprocessingEntityCategoryCounts:(id)a0;
- (void)addPreprocessingEntityCategoryCounts:(id)a0;
- (void)clearLanguageModelInterpolationWeights;
- (void)clearPostprocessingEntityCategoryCounts;
- (void)clearPreprocessingEntityCategoryCounts;
- (void)deleteAverageActiveTokensPerFrame;
- (void)deleteJitLanguageModelEnrollmentDurationInMs;
- (void)deleteJitQueryDurationInMs;
- (void)deleteLanguageModelInterpolationWeights;
- (void)deletePostprocessingEntityCategoryCounts;
- (void)deletePreprocessingEntityCategoryCounts;
- (void)deleteWallRealTimeFactor;
- (id)languageModelInterpolationWeightsAtIndex:(unsigned long long)a0;
- (unsigned long long)languageModelInterpolationWeightsCount;
- (id)postprocessingEntityCategoryCountsAtIndex:(unsigned long long)a0;
- (unsigned long long)postprocessingEntityCategoryCountsCount;
- (id)preprocessingEntityCategoryCountsAtIndex:(unsigned long long)a0;
- (unsigned long long)preprocessingEntityCategoryCountsCount;

@end
