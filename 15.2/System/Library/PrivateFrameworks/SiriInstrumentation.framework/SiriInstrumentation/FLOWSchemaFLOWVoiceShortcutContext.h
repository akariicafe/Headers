@class NSArray, NSData;

@interface FLOWSchemaFLOWVoiceShortcutContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *voiceShortcutActions;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addVoiceShortcutAction:(id)a0;
- (void)clearVoiceShortcutAction;
- (unsigned long long)voiceShortcutActionCount;
- (id)voiceShortcutActionAtIndex:(unsigned long long)a0;

@end
