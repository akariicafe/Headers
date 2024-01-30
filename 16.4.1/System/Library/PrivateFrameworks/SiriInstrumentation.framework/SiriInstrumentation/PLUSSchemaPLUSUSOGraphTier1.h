@class NSData, USOSchemaUSOGraphTier1;

@interface PLUSSchemaPLUSUSOGraphTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSOGraphTier1 *usoGraphTier1;
@property (nonatomic) BOOL hasUsoGraphTier1;
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
- (void)deleteUsoGraphTier1;

@end
