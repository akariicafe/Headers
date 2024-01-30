@class NSData;

@interface SUTSchemaTestOutcomeRecorded : SISchemaInstrumentationMessage {
    struct { unsigned char testOutcome : 1; } _has;
}

@property (nonatomic) int testOutcome;
@property (nonatomic) BOOL hasTestOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteTestOutcome;

@end
