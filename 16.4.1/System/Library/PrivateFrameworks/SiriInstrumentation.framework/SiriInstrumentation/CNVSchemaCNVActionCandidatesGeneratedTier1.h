@class NSArray, NSData;

@interface CNVSchemaCNVActionCandidatesGeneratedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *metadataTier1s;
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
- (void)addMetadataTier1:(id)a0;
- (void)clearMetadataTier1;
- (void)deleteMetadataTier1;
- (id)metadataTier1AtIndex:(unsigned long long)a0;
- (unsigned long long)metadataTier1Count;

@end
