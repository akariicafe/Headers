@class NSArray, SISchemaAnnounceEnabledStatus, NSData, SISchemaSendWithoutConfirmation, SISchemaAdaptiveVolumeUserPreferences;

@interface SISchemaEnabledStatus : SISchemaInstrumentationMessage {
    struct { unsigned char assistantEnabled : 1; unsigned char dictationEnabled : 1; unsigned char hardwareButtonEnabled : 1; unsigned char heySiriEnabled : 1; unsigned char assistantOnLockscreen : 1; unsigned char raiseToSpeakEnabled : 1; unsigned char spokenNotificationsEnabled : 1; unsigned char hasHomekitHome : 1; unsigned char shortcutsAvailable : 1; unsigned char dataSharingOptInStatus : 1; unsigned char typeToSiriEnabled : 1; unsigned char isPreciseLocationEnabled : 1; unsigned char voiceFeedback : 1; unsigned char isAdaptiveVolumeEnabled : 1; unsigned char isRemoteDarwinHeySiriEnabled : 1; unsigned char isAutoPunctuationEnabled : 1; unsigned char isHSHangupEnabled : 1; unsigned char isSiriInCallEnabled : 1; unsigned char hsHangupEnablementState : 1; unsigned char siriInCallEnablementState : 1; unsigned char isAlwaysShowSiriCaptionsEnabled : 1; unsigned char isAlwaysShowSpeechEnabled : 1; unsigned char isShowAppsBehindSiriEnabled : 1; } _has;
}

@property (nonatomic) BOOL assistantEnabled;
@property (nonatomic) BOOL hasAssistantEnabled;
@property (nonatomic) BOOL dictationEnabled;
@property (nonatomic) BOOL hasDictationEnabled;
@property (nonatomic) BOOL hardwareButtonEnabled;
@property (nonatomic) BOOL hasHardwareButtonEnabled;
@property (nonatomic) BOOL heySiriEnabled;
@property (nonatomic) BOOL hasHeySiriEnabled;
@property (nonatomic) BOOL assistantOnLockscreen;
@property (nonatomic) BOOL hasAssistantOnLockscreen;
@property (nonatomic) BOOL raiseToSpeakEnabled;
@property (nonatomic) BOOL hasRaiseToSpeakEnabled;
@property (nonatomic) BOOL spokenNotificationsEnabled;
@property (nonatomic) BOOL hasSpokenNotificationsEnabled;
@property (nonatomic) BOOL hasHomekitHome;
@property (nonatomic) BOOL hasHasHomekitHome;
@property (nonatomic) int shortcutsAvailable;
@property (nonatomic) BOOL hasShortcutsAvailable;
@property (nonatomic) int dataSharingOptInStatus;
@property (nonatomic) BOOL hasDataSharingOptInStatus;
@property (nonatomic) BOOL typeToSiriEnabled;
@property (nonatomic) BOOL hasTypeToSiriEnabled;
@property (nonatomic) BOOL isPreciseLocationEnabled;
@property (nonatomic) BOOL hasIsPreciseLocationEnabled;
@property (nonatomic) int voiceFeedback;
@property (nonatomic) BOOL hasVoiceFeedback;
@property (retain, nonatomic) SISchemaAnnounceEnabledStatus *announceEnabledStatus;
@property (nonatomic) BOOL hasAnnounceEnabledStatus;
@property (nonatomic) BOOL isAdaptiveVolumeEnabled;
@property (nonatomic) BOOL hasIsAdaptiveVolumeEnabled;
@property (retain, nonatomic) SISchemaAdaptiveVolumeUserPreferences *adaptiveVolumeUserPreferences;
@property (nonatomic) BOOL hasAdaptiveVolumeUserPreferences;
@property (nonatomic) BOOL isRemoteDarwinHeySiriEnabled;
@property (nonatomic) BOOL hasIsRemoteDarwinHeySiriEnabled;
@property (copy, nonatomic) NSArray *gradingOptInStateChanges;
@property (nonatomic) BOOL isAutoPunctuationEnabled;
@property (nonatomic) BOOL hasIsAutoPunctuationEnabled;
@property (retain, nonatomic) SISchemaSendWithoutConfirmation *sendWithoutConfirmation;
@property (nonatomic) BOOL hasSendWithoutConfirmation;
@property (nonatomic) BOOL isHSHangupEnabled;
@property (nonatomic) BOOL hasIsHSHangupEnabled;
@property (nonatomic) BOOL isSiriInCallEnabled;
@property (nonatomic) BOOL hasIsSiriInCallEnabled;
@property (nonatomic) int hsHangupEnablementState;
@property (nonatomic) BOOL hasHsHangupEnablementState;
@property (nonatomic) int siriInCallEnablementState;
@property (nonatomic) BOOL hasSiriInCallEnablementState;
@property (nonatomic) BOOL isAlwaysShowSiriCaptionsEnabled;
@property (nonatomic) BOOL hasIsAlwaysShowSiriCaptionsEnabled;
@property (nonatomic) BOOL isAlwaysShowSpeechEnabled;
@property (nonatomic) BOOL hasIsAlwaysShowSpeechEnabled;
@property (nonatomic) BOOL isShowAppsBehindSiriEnabled;
@property (nonatomic) BOOL hasIsShowAppsBehindSiriEnabled;
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
- (void)deleteIsAlwaysShowSpeechEnabled;
- (void)deleteSiriInCallEnablementState;
- (void)addGradingOptInStateChanges:(id)a0;
- (void)clearGradingOptInStateChanges;
- (void)deleteAdaptiveVolumeUserPreferences;
- (void)deleteAnnounceEnabledStatus;
- (void)deleteAssistantEnabled;
- (void)deleteAssistantOnLockscreen;
- (void)deleteDataSharingOptInStatus;
- (void)deleteDictationEnabled;
- (void)deleteGradingOptInStateChanges;
- (void)deleteHardwareButtonEnabled;
- (void)deleteHasHomekitHome;
- (void)deleteHeySiriEnabled;
- (void)deleteHsHangupEnablementState;
- (void)deleteIsAdaptiveVolumeEnabled;
- (void)deleteIsAlwaysShowSiriCaptionsEnabled;
- (void)deleteIsAutoPunctuationEnabled;
- (void)deleteIsHSHangupEnabled;
- (void)deleteIsPreciseLocationEnabled;
- (void)deleteIsRemoteDarwinHeySiriEnabled;
- (void)deleteIsShowAppsBehindSiriEnabled;
- (void)deleteIsSiriInCallEnabled;
- (void)deleteRaiseToSpeakEnabled;
- (void)deleteSendWithoutConfirmation;
- (void)deleteShortcutsAvailable;
- (void)deleteSpokenNotificationsEnabled;
- (void)deleteTypeToSiriEnabled;
- (void)deleteVoiceFeedback;
- (id)gradingOptInStateChangesAtIndex:(unsigned long long)a0;
- (unsigned long long)gradingOptInStateChangesCount;

@end
