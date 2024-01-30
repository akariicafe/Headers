@class NSData;

@interface CLPInstSchemaCLPNLv4SampleEvaluationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char evaluated : 1; unsigned char evaluationResultOnTheFirstUserParse : 1; unsigned char userStatedTaskOnTheFirstUserParse : 1; unsigned char matchedIndex : 1; unsigned char evaluationResult : 1; unsigned char userProfileSandboxRequested : 1; } _has;
}

@property (nonatomic) BOOL evaluated;
@property (nonatomic) BOOL hasEvaluated;
@property (nonatomic) BOOL evaluationResultOnTheFirstUserParse;
@property (nonatomic) BOOL hasEvaluationResultOnTheFirstUserParse;
@property (nonatomic) BOOL userStatedTaskOnTheFirstUserParse;
@property (nonatomic) BOOL hasUserStatedTaskOnTheFirstUserParse;
@property (nonatomic) int matchedIndex;
@property (nonatomic) BOOL hasMatchedIndex;
@property (nonatomic) BOOL evaluationResult;
@property (nonatomic) BOOL hasEvaluationResult;
@property (nonatomic) BOOL userProfileSandboxRequested;
@property (nonatomic) BOOL hasUserProfileSandboxRequested;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
