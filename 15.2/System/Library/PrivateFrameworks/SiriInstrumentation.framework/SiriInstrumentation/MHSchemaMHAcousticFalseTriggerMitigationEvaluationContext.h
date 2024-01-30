@class MHSchemaMHAcousticFalseTriggerMitigationStarted, MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated, NSData, MHSchemaMHAcousticFalseTriggerMitigationFailed;

@interface MHSchemaMHAcousticFalseTriggerMitigationEvaluationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated *scoreGenerated;
@property (nonatomic) BOOL hasScoreGenerated;
@property (retain, nonatomic) MHSchemaMHAcousticFalseTriggerMitigationFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
