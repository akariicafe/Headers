@class NSArray, NSData;

@interface MHSchemaMHAssistantDaemonAudioStopRecordingEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *fanInfos;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addFanInfo:(id)a0;
- (void)clearFanInfo;
- (unsigned long long)fanInfoCount;
- (id)fanInfoAtIndex:(unsigned long long)a0;

@end
