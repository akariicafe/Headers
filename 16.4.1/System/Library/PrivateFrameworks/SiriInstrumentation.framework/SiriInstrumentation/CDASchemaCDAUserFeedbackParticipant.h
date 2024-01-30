@class NSString, CDASchemaCDAScoreBoosters, NSData, SISchemaUUID;

@interface CDASchemaCDAUserFeedbackParticipant : SISchemaInstrumentationMessage {
    struct { unsigned char decision : 1; unsigned char voiceTriggerTimeNS : 1; unsigned char rawGoodnessScore : 1; unsigned char granularBoostValue : 1; unsigned char granularBoostDecay : 1; unsigned char trumpReason : 1; unsigned char psdScore : 1; unsigned char mediaState : 1; unsigned char alarmState : 1; unsigned char timerState : 1; unsigned char timeSinceLastWinInMilliseconds : 1; unsigned char triggerType : 1; unsigned char timeSinceTriggerInMilliseconds : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *siriSpeechId;
@property (nonatomic) BOOL hasSiriSpeechId;
@property (retain, nonatomic) SISchemaUUID *cdaId;
@property (nonatomic) BOOL hasCdaId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SISchemaUUID *halTargetSiriSpeechId;
@property (nonatomic) BOOL hasHalTargetSiriSpeechId;
@property (nonatomic) int decision;
@property (nonatomic) BOOL hasDecision;
@property (nonatomic) unsigned long long voiceTriggerTimeNS;
@property (nonatomic) BOOL hasVoiceTriggerTimeNS;
@property (nonatomic) unsigned int rawGoodnessScore;
@property (nonatomic) BOOL hasRawGoodnessScore;
@property (nonatomic) unsigned int granularBoostValue;
@property (nonatomic) BOOL hasGranularBoostValue;
@property (nonatomic) double granularBoostDecay;
@property (nonatomic) BOOL hasGranularBoostDecay;
@property (nonatomic) int trumpReason;
@property (nonatomic) BOOL hasTrumpReason;
@property (nonatomic) unsigned int psdScore;
@property (nonatomic) BOOL hasPsdScore;
@property (nonatomic) int mediaState;
@property (nonatomic) BOOL hasMediaState;
@property (nonatomic) int alarmState;
@property (nonatomic) BOOL hasAlarmState;
@property (nonatomic) int timerState;
@property (nonatomic) BOOL hasTimerState;
@property (nonatomic) unsigned long long timeSinceLastWinInMilliseconds;
@property (nonatomic) BOOL hasTimeSinceLastWinInMilliseconds;
@property (nonatomic) int triggerType;
@property (nonatomic) BOOL hasTriggerType;
@property (copy, nonatomic) NSString *roomNameHash;
@property (nonatomic) BOOL hasRoomNameHash;
@property (nonatomic) unsigned long long timeSinceTriggerInMilliseconds;
@property (nonatomic) BOOL hasTimeSinceTriggerInMilliseconds;
@property (retain, nonatomic) CDASchemaCDAScoreBoosters *scoreBoosters;
@property (nonatomic) BOOL hasScoreBoosters;
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
- (void)deleteRequestId;
- (void)deleteAlarmState;
- (void)deleteCdaId;
- (void)deleteDecision;
- (void)deleteGranularBoostDecay;
- (void)deleteGranularBoostValue;
- (void)deleteHalTargetSiriSpeechId;
- (void)deleteMediaState;
- (void)deletePsdScore;
- (void)deleteRawGoodnessScore;
- (void)deleteRoomNameHash;
- (void)deleteScoreBoosters;
- (void)deleteSiriSpeechId;
- (void)deleteTimeSinceLastWinInMilliseconds;
- (void)deleteTimeSinceTriggerInMilliseconds;
- (void)deleteTimerState;
- (void)deleteTriggerType;
- (void)deleteTrumpReason;
- (void)deleteVoiceTriggerTimeNS;

@end
