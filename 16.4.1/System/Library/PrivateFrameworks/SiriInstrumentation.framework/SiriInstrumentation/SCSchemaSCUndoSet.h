@class NSData, SCSchemaSCSetUndoArgs;

@interface SCSchemaSCUndoSet : SISchemaInstrumentationMessage

@property (retain, nonatomic) SCSchemaSCSetUndoArgs *setUndoArgs;
@property (nonatomic) BOOL hasSetUndoArgs;
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
- (void)deleteSetUndoArgs;

@end
