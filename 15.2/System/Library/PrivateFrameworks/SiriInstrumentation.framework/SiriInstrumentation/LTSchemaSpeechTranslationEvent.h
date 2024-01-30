@class NSString, LTSchemaError, NSData, LTSchemaTask;

@interface LTSchemaSpeechTranslationEvent : SISchemaInstrumentationMessage {
    struct { unsigned char inRestrictedMode : 1; unsigned char isAutomaticLID : 1; unsigned char uiMode : 1; unsigned char timeToFirstPartialDisplayed : 1; unsigned char timeToRecordingDialogDismissed : 1; unsigned char timeToShowTranslationCard : 1; unsigned char timeToCancel : 1; unsigned char status : 1; } _has;
}

@property (retain, nonatomic) LTSchemaTask *task;
@property (nonatomic) BOOL hasTask;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) BOOL hasSessionID;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasRequestID;
@property (nonatomic) BOOL inRestrictedMode;
@property (nonatomic) BOOL hasInRestrictedMode;
@property (nonatomic) BOOL isAutomaticLID;
@property (nonatomic) BOOL hasIsAutomaticLID;
@property (retain, nonatomic) LTSchemaError *error;
@property (nonatomic) BOOL hasError;
@property (nonatomic) int uiMode;
@property (nonatomic) BOOL hasUiMode;
@property (copy, nonatomic) NSString *mobileAssetConfigVersion;
@property (nonatomic) BOOL hasMobileAssetConfigVersion;
@property (nonatomic) unsigned int timeToFirstPartialDisplayed;
@property (nonatomic) BOOL hasTimeToFirstPartialDisplayed;
@property (nonatomic) unsigned int timeToRecordingDialogDismissed;
@property (nonatomic) BOOL hasTimeToRecordingDialogDismissed;
@property (nonatomic) unsigned int timeToShowTranslationCard;
@property (nonatomic) BOOL hasTimeToShowTranslationCard;
@property (nonatomic) unsigned int timeToCancel;
@property (nonatomic) BOOL hasTimeToCancel;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
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
