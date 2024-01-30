@class NSData, SISchemaVoiceSettings, TTSSchemaTTSVoiceContext;

@interface TTSSchemaTTSVoiceFallbackOccurred : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaVoiceSettings *voiceSettings;
@property (nonatomic) BOOL hasVoiceSettings;
@property (retain, nonatomic) TTSSchemaTTSVoiceContext *context;
@property (nonatomic) BOOL hasContext;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
