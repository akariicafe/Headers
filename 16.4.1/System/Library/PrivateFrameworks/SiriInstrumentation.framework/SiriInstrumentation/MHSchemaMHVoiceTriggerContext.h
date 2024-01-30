@class MHSchemaMHVoiceTriggerSecondPassRejected, MHSchemaMHVoiceTriggerSecondPassStarted, NSData, MHSchemaMHVoiceTriggerSecondPassCancelled, MHSchemaMHVoiceTriggerSecondPassTriggered;

@interface MHSchemaMHVoiceTriggerContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHVoiceTriggerSecondPassStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) MHSchemaMHVoiceTriggerSecondPassTriggered *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) MHSchemaMHVoiceTriggerSecondPassRejected *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) MHSchemaMHVoiceTriggerSecondPassCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteCancelled;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
