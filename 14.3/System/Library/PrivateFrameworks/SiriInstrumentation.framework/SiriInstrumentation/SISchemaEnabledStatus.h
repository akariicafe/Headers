@class NSData;

@interface SISchemaEnabledStatus : PBCodable {
    struct { unsigned char assistantEnabled : 1; unsigned char dictationEnabled : 1; unsigned char hardwareButtonEnabled : 1; unsigned char heySiriEnabled : 1; unsigned char assistantOnLockscreen : 1; unsigned char raiseToSpeakEnabled : 1; unsigned char spokenNotificationsEnabled : 1; unsigned char hasHomekitHome : 1; unsigned char shortcutsAvailable : 1; unsigned char dataSharingOptInStatus : 1; unsigned char typeToSiriEnabled : 1; unsigned char isPreciseLocationEnabled : 1; unsigned char voiceFeedback : 1; } _has;
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
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
