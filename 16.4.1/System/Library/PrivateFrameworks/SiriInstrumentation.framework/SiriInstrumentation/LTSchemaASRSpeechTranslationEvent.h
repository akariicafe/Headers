@class NSString, NSData;

@interface LTSchemaASRSpeechTranslationEvent : SISchemaInstrumentationMessage {
    struct { unsigned char timeToFirstPartialMs : 1; unsigned char timeToFinalResultMs : 1; unsigned char latencyFinalResultMs : 1; unsigned char timeToSendFirstAudioPacket : 1; unsigned char timeToReceiveFirstAudioPacket : 1; unsigned char numAudioPacket : 1; unsigned char timeToSendFinishAudio : 1; } _has;
}

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasRequestID;
@property (copy, nonatomic) NSString *selectedLocale;
@property (nonatomic) BOOL hasSelectedLocale;
@property (nonatomic) unsigned int timeToFirstPartialMs;
@property (nonatomic) BOOL hasTimeToFirstPartialMs;
@property (nonatomic) unsigned int timeToFinalResultMs;
@property (nonatomic) BOOL hasTimeToFinalResultMs;
@property (nonatomic) unsigned int latencyFinalResultMs;
@property (nonatomic) BOOL hasLatencyFinalResultMs;
@property (nonatomic) unsigned int timeToSendFirstAudioPacket;
@property (nonatomic) BOOL hasTimeToSendFirstAudioPacket;
@property (nonatomic) unsigned int timeToReceiveFirstAudioPacket;
@property (nonatomic) BOOL hasTimeToReceiveFirstAudioPacket;
@property (nonatomic) unsigned int numAudioPacket;
@property (nonatomic) BOOL hasNumAudioPacket;
@property (nonatomic) unsigned int timeToSendFinishAudio;
@property (nonatomic) BOOL hasTimeToSendFinishAudio;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteRequestID;
- (void)deleteLatencyFinalResultMs;
- (void)deleteNumAudioPacket;
- (void)deleteSelectedLocale;
- (void)deleteTimeToFinalResultMs;
- (void)deleteTimeToFirstPartialMs;
- (void)deleteTimeToReceiveFirstAudioPacket;
- (void)deleteTimeToSendFinishAudio;
- (void)deleteTimeToSendFirstAudioPacket;

@end
