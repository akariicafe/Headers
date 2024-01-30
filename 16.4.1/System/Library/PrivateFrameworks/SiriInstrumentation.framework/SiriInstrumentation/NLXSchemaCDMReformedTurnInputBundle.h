@class NLXSchemaCDMTurnInput, NSData;

@interface NLXSchemaCDMReformedTurnInputBundle : SISchemaInstrumentationMessage {
    struct { unsigned char type : 1; unsigned char previousTurnsSkip : 1; } _has;
}

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NLXSchemaCDMTurnInput *currentTurn;
@property (nonatomic) BOOL hasCurrentTurn;
@property (nonatomic) unsigned int previousTurnsSkip;
@property (nonatomic) BOOL hasPreviousTurnsSkip;
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
- (void)deleteType;
- (void).cxx_destruct;
- (void)deleteCurrentTurn;
- (void)deletePreviousTurnsSkip;

@end
