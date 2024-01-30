@class TTSSchemaTTSSpeechEnded, NSData, TTSSchemaTTSSpeechFailed, SISchemaUUID, TTSSchemaTTSSpeechCancelled, TTSSchemaTTSSpeechStarted;

@interface TTSSchemaTTSClientSpeechContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) TTSSchemaTTSSpeechStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) TTSSchemaTTSSpeechEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) TTSSchemaTTSSpeechFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) TTSSchemaTTSSpeechCancelled *cancelled;
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
- (void)deleteContextId;
- (void)deleteCancelled;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;

@end
