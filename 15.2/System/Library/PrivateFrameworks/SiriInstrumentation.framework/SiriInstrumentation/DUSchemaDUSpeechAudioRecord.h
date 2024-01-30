@class NSString, NSData, SISchemaUUID;

@interface DUSchemaDUSpeechAudioRecord : SISchemaInstrumentationMessage {
    struct { unsigned char audioCreatedTimestampMs : 1; } _has;
}

@property (copy, nonatomic) NSString *language;
@property (nonatomic) BOOL hasLanguage;
@property (copy, nonatomic) NSString *codec;
@property (nonatomic) BOOL hasCodec;
@property (retain, nonatomic) SISchemaUUID *interactionId;
@property (nonatomic) BOOL hasInteractionId;
@property (retain, nonatomic) SISchemaUUID *speechId;
@property (nonatomic) BOOL hasSpeechId;
@property (copy, nonatomic) NSString *speechIdString;
@property (nonatomic) BOOL hasSpeechIdString;
@property (nonatomic) unsigned long long audioCreatedTimestampMs;
@property (nonatomic) BOOL hasAudioCreatedTimestampMs;
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
