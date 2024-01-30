@class MHSchemaMHAssistantDaemonAudioRecordingEnded, NSData, MHSchemaMHAssistantDaemonAudioRecordingStarted;

@interface MHSchemaMHAssistantDaemonAudioRecordingContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) MHSchemaMHAssistantDaemonAudioRecordingEnded *ended;
@property (nonatomic) BOOL hasEnded;
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
