@class NSString, NSArray, NSData, PLUSSchemaPLUSMediaSuggestionEvaluation, SISchemaUUID, PLUSSchemaPLUSMediaConfiguredState;

@interface PLUSSchemaPLUSMediaEvaluationSummaryReported : SISchemaInstrumentationMessage {
    struct { unsigned char playUserFeedback : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (nonatomic) int playUserFeedback;
@property (nonatomic) BOOL hasPlayUserFeedback;
@property (retain, nonatomic) PLUSSchemaPLUSMediaSuggestionEvaluation *suggestionEvaluation;
@property (nonatomic) BOOL hasSuggestionEvaluation;
@property (copy, nonatomic) NSArray *groundTruthSummaries;
@property (retain, nonatomic) PLUSSchemaPLUSMediaConfiguredState *configuredState;
@property (nonatomic) BOOL hasConfiguredState;
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
- (void)addGroundTruthSummaries:(id)a0;
- (void)clearGroundTruthSummaries;
- (void)deleteConfiguredState;
- (void)deleteGroundTruthSummaries;
- (void)deleteOriginalRequestId;
- (void)deletePlayUserFeedback;
- (void)deleteResultCandidateId;
- (void)deleteSuggestionEvaluation;
- (id)groundTruthSummariesAtIndex:(unsigned long long)a0;
- (unsigned long long)groundTruthSummariesCount;

@end
