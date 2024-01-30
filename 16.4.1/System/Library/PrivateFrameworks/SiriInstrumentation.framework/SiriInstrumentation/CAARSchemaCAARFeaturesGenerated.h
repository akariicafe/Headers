@class NSArray, NSData;

@interface CAARSchemaCAARFeaturesGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *actionFeatureSets;
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
- (id)actionFeatureSetsAtIndex:(unsigned long long)a0;
- (unsigned long long)actionFeatureSetsCount;
- (void)addActionFeatureSets:(id)a0;
- (void)clearActionFeatureSets;
- (void)deleteActionFeatureSets;

@end
