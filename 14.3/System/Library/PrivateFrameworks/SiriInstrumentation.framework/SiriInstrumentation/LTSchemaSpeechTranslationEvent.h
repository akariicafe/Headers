@class NSString, LTSchemaError, NSData, LTSchemaTask;

@interface LTSchemaSpeechTranslationEvent : PBCodable {
    struct { unsigned char inRestrictedMode : 1; unsigned char isAutomaticLID : 1; unsigned char uiMode : 1; } _has;
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
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
