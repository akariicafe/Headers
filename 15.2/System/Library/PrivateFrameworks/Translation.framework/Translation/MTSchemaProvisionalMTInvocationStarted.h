@class NSString, MTSchemaProvisionalMTLanguagePair, NSData;

@interface MTSchemaProvisionalMTInvocationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char isOnDeviceTranslationEnabled : 1; unsigned char task : 1; unsigned char inputMode : 1; unsigned char isExplicitLanguageFilterEnabled : 1; unsigned char isLanguageIdentificationEnabled : 1; unsigned char uiMode : 1; } _has;
}

@property (nonatomic) BOOL isOnDeviceTranslationEnabled;
@property (nonatomic) BOOL hasIsOnDeviceTranslationEnabled;
@property (copy, nonatomic) NSString *mobileAssetConfigVersion;
@property (nonatomic) BOOL hasMobileAssetConfigVersion;
@property (nonatomic) int task;
@property (nonatomic) BOOL hasTask;
@property (retain, nonatomic) MTSchemaProvisionalMTLanguagePair *mtLanguagePair;
@property (nonatomic) BOOL hasMtLanguagePair;
@property (nonatomic) int inputMode;
@property (nonatomic) BOOL hasInputMode;
@property (nonatomic) BOOL isExplicitLanguageFilterEnabled;
@property (nonatomic) BOOL hasIsExplicitLanguageFilterEnabled;
@property (nonatomic) BOOL isLanguageIdentificationEnabled;
@property (nonatomic) BOOL hasIsLanguageIdentificationEnabled;
@property (nonatomic) int uiMode;
@property (nonatomic) BOOL hasUiMode;
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
