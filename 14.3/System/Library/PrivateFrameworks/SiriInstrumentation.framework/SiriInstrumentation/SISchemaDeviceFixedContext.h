@class NSString, SISchemaSiriUISettings, NSData, SISchemaVoiceSettings;

@interface SISchemaDeviceFixedContext : PBCodable {
    struct { unsigned char isSatellitePaired : 1; } _has;
}

@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (copy, nonatomic) NSString *siriInputLanguage;
@property (nonatomic) BOOL hasSiriInputLanguage;
@property (copy, nonatomic) NSString *siriVoiceLanguage;
@property (nonatomic) BOOL hasSiriVoiceLanguage;
@property (copy, nonatomic) NSString *systemLocale;
@property (nonatomic) BOOL hasSystemLocale;
@property (copy, nonatomic) NSString *siriDeviceID;
@property (nonatomic) BOOL hasSiriDeviceID;
@property (copy, nonatomic) NSString *speechID;
@property (nonatomic) BOOL hasSpeechID;
@property (retain, nonatomic) SISchemaSiriUISettings *siriUISettings;
@property (nonatomic) BOOL hasSiriUISettings;
@property (nonatomic) BOOL isSatellitePaired;
@property (nonatomic) BOOL hasIsSatellitePaired;
@property (retain, nonatomic) SISchemaVoiceSettings *voiceSettings;
@property (nonatomic) BOOL hasVoiceSettings;
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
