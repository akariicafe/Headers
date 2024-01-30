@class NSData, FLOWSchemaFLOWEntityContext;

@interface FLOWSchemaFLOWPlatformContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWEntityContext *entityContext;
@property (nonatomic) BOOL hasEntityContext;
@property (retain, nonatomic) FLOWSchemaFLOWEntityContext *entityContextValue;
@property (nonatomic) BOOL hasEntityContextValue;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichPlatformcontext;

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
- (void)deleteEntityContext;
- (void)deleteEntityContextValue;

@end
