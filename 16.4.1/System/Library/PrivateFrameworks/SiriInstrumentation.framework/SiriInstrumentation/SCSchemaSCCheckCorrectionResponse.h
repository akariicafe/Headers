@class NSArray, NSData;

@interface SCSchemaSCCheckCorrectionResponse : SISchemaInstrumentationMessage {
    struct { unsigned char candidateCount : 1; } _has;
}

@property (copy, nonatomic) NSArray *results;
@property (nonatomic) unsigned int candidateCount;
@property (nonatomic) BOOL hasCandidateCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)resultsAtIndex:(unsigned long long)a0;
- (void)addResults:(id)a0;
- (id)suppressMessageUnderConditions;
- (unsigned long long)resultsCount;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearResults;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteCandidateCount;
- (void)deleteResults;

@end
