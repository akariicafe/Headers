@class NSData;

@interface INFERENCESchemaINFERENCEABModelEvaluated : SISchemaInstrumentationMessage {
    struct { unsigned char projectIntent : 1; unsigned char numCandidateApps : 1; unsigned char isDecisionCorrect : 1; unsigned char modelVersion : 1; } _has;
}

@property (nonatomic) int projectIntent;
@property (nonatomic) BOOL hasProjectIntent;
@property (nonatomic) int numCandidateApps;
@property (nonatomic) BOOL hasNumCandidateApps;
@property (nonatomic) BOOL isDecisionCorrect;
@property (nonatomic) BOOL hasIsDecisionCorrect;
@property (nonatomic) unsigned int modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteIsDecisionCorrect;
- (void)deleteModelVersion;
- (void)deleteNumCandidateApps;
- (void)deleteProjectIntent;

@end
