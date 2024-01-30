@class NSData, SISchemaUUID;

@interface SISchemaUEIDictationVoiceCommandExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char commandStatus : 1; unsigned char commandType : 1; unsigned char commandTargetWordCount : 1; unsigned char commandPayloadWordCount : 1; unsigned char commandTargetCharacterCount : 1; unsigned char commandPayloadCharacterCount : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) BOOL hasVoiceCommandId;
@property (nonatomic) int commandStatus;
@property (nonatomic) BOOL hasCommandStatus;
@property (nonatomic) int commandType;
@property (nonatomic) BOOL hasCommandType;
@property (nonatomic) unsigned long long commandTargetWordCount;
@property (nonatomic) BOOL hasCommandTargetWordCount;
@property (nonatomic) unsigned long long commandPayloadWordCount;
@property (nonatomic) BOOL hasCommandPayloadWordCount;
@property (nonatomic) unsigned long long commandTargetCharacterCount;
@property (nonatomic) BOOL hasCommandTargetCharacterCount;
@property (nonatomic) unsigned long long commandPayloadCharacterCount;
@property (nonatomic) BOOL hasCommandPayloadCharacterCount;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteCommandPayloadCharacterCount;
- (void)deleteCommandPayloadWordCount;
- (void)deleteCommandStatus;
- (void)deleteCommandTargetCharacterCount;
- (void)deleteCommandTargetWordCount;
- (void)deleteCommandType;
- (void)deleteVoiceCommandId;

@end
