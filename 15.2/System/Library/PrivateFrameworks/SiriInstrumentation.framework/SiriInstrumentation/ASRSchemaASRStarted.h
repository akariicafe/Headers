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

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
