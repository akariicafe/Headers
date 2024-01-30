@class NSData;

@interface SISchemaConversationTrace : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *previousTurnID;
@property (nonatomic) BOOL hasPreviousTurnID;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (void)deletePreviousTurnID;

@end
