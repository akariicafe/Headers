@class NSString, NSData, SISchemaVoiceSettings, DIMSchemaDIMWatchDeviceAttributes;

@interface DIMSchemaDIMDeviceFixedContext : SISchemaInstrumentationMessage {
    struct { unsigned char systemLocale : 1; unsigned char siriInputLocale : 1; unsigned char dataSharingOptInState : 1; unsigned char countryCode : 1; unsigned char isStoreDemoMode : 1; unsigned char timeIntervalSince1970 : 1; unsigned char isLowPowerModeEnabled : 1; } _has;
}

@property (nonatomic) int systemLocale;
@property (nonatomic) BOOL hasSystemLocale;
@property (nonatomic) int siriInputLocale;
@property (nonatomic) BOOL hasSiriInputLocale;
@property (retain, nonatomic) SISchemaVoiceSettings *siriVoiceSettings;
@property (nonatomic) BOOL hasSiriVoiceSettings;
@property (nonatomic) int dataSharingOptInState;
@property (nonatomic) BOOL hasDataSharingOptInState;
@property (copy, nonatomic) NSString *timezoneOffset;
@property (nonatomic) BOOL hasTimezoneOffset;
@property (nonatomic) int countryCode;
@property (nonatomic) BOOL hasCountryCode;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) BOOL hasDeviceType;
@property (copy, nonatomic) NSString *systemBuild;
@property (nonatomic) BOOL hasSystemBuild;
@property (nonatomic) BOOL isStoreDemoMode;
@property (nonatomic) BOOL hasIsStoreDemoMode;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic) BOOL hasTimeIntervalSince1970;
@property (retain, nonatomic) DIMSchemaDIMWatchDeviceAttributes *watchDeviceAttributes;
@property (nonatomic) BOOL hasWatchDeviceAttributes;
@property (nonatomic) BOOL isLowPowerModeEnabled;
@property (nonatomic) BOOL hasIsLowPowerModeEnabled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDeviceattributes;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
