@class NSData, SISchemaVoiceTriggerMetrics;

@interface SISchemaAggregatedMetrics : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaVoiceTriggerMetrics *voiceTrigger;
@property (nonatomic) BOOL hasVoiceTrigger;
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
- (void)deleteVoiceTrigger;

@end
