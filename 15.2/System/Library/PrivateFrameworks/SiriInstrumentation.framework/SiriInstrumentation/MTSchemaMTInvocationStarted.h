@class NSData, SISchemaUUID;

@interface MTSchemaMTInvocationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char isOnDeviceTranslation : 1; unsigned char mobileAssetConfigVersion : 1; unsigned char task : 1; unsigned char inputSource : 1; unsigned char isExplicitLanguageFilterEnabled : 1; unsigned char isLanguageIdentificationEnabled : 1; unsigned char displayMode : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) BOOL isOnDeviceTranslation;
@property (nonatomic) BOOL hasIsOnDeviceTranslation;
@property (nonatomic) unsigned int mobileAssetConfigVersion;
@property (nonatomic) BOOL hasMobileAssetConfigVersion;
@property (nonatomic) int task;
@property (nonatomic) BOOL hasTask;
@property (nonatomic) int inputSource;
@property (nonatomic) BOOL hasInputSource;
@property (nonatomic) BOOL isExplicitLanguageFilterEnabled;
@property (nonatomic) BOOL hasIsExplicitLanguageFilterEnabled;
@property (nonatomic) BOOL isLanguageIdentificationEnabled;
@property (nonatomic) BOOL hasIsLanguageIdentificationEnabled;
@property (nonatomic) int displayMode;
@property (nonatomic) BOOL hasDisplayMode;
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
