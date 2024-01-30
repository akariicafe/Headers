@class NSString, NSData, SISchemaUUID;

@interface ASRSchemaASRStarted : SISchemaInstrumentationMessage {
    struct { unsigned char task : 1; unsigned char modelLocale : 1; unsigned char isHighQualityAsset : 1; unsigned char geoLanguageModelLoaded : 1; unsigned char speechProfileAgeInNs : 1; } _has;
}

@property (nonatomic) int task;
@property (nonatomic) BOOL hasTask;
@property (nonatomic) int modelLocale;
@property (nonatomic) BOOL hasModelLocale;
@property (copy, nonatomic) NSString *datapackVersion;
@property (nonatomic) BOOL hasDatapackVersion;
@property (nonatomic) BOOL isHighQualityAsset;
@property (nonatomic) BOOL hasIsHighQualityAsset;
@property (copy, nonatomic) NSString *hammerVersion;
@property (nonatomic) BOOL hasHammerVersion;
@property (copy, nonatomic) NSString *geoLanguageModelRegion;
@property (nonatomic) BOOL hasGeoLanguageModelRegion;
@property (nonatomic) BOOL geoLanguageModelLoaded;
@property (nonatomic) BOOL hasGeoLanguageModelLoaded;
@property (nonatomic) unsigned long long speechProfileAgeInNs;
@property (nonatomic) BOOL hasSpeechProfileAgeInNs;
@property (retain, nonatomic) SISchemaUUID *dictationUiInteractionId;
@property (nonatomic) BOOL hasDictationUiInteractionId;
@property (copy, nonatomic) NSString *portraitExperimentVariantName;
@property (nonatomic) BOOL hasPortraitExperimentVariantName;
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
- (void)deleteDatapackVersion;
- (void)deleteDictationUiInteractionId;
- (void)deleteGeoLanguageModelLoaded;
- (void)deleteGeoLanguageModelRegion;
- (void)deleteHammerVersion;
- (void)deleteIsHighQualityAsset;
- (void)deleteModelLocale;
- (void)deletePortraitExperimentVariantName;
- (void)deleteSpeechProfileAgeInNs;
- (void)deleteTask;

@end
