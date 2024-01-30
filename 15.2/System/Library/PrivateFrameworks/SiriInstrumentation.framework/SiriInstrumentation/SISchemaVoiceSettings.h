@class NSString, NSData;

@interface SISchemaVoiceSettings : SISchemaInstrumentationMessage {
    struct { unsigned char voiceGender : 1; unsigned char voiceAccent : 1; } _has;
}

@property (nonatomic) int voiceGender;
@property (nonatomic) BOOL hasVoiceGender;
@property (nonatomic) int voiceAccent;
@property (nonatomic) BOOL hasVoiceAccent;
@property (copy, nonatomic) NSString *voiceName;
@property (nonatomic) BOOL hasVoiceName;
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
