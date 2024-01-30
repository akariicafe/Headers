@class NSData;

@interface INFERENCESchemaINFERENCECommonAppIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char rawLanguage : 1; unsigned char rawLocale : 1; unsigned char rawStateOrProvince : 1; unsigned char rawCountry : 1; unsigned char rawRequestDeviceCategory : 1; unsigned char clientDayOfWeek : 1; unsigned char rawClientHourOfDay : 1; unsigned char isClientDaylight : 1; unsigned char appResolutionType : 1; unsigned char sirikitResponseCode : 1; unsigned char appSelectionUses : 1; unsigned char modelVersion : 1; } _has;
}

@property (nonatomic) long long rawLanguage;
@property (nonatomic) BOOL hasRawLanguage;
@property (nonatomic) long long rawLocale;
@property (nonatomic) BOOL hasRawLocale;
@property (nonatomic) long long rawStateOrProvince;
@property (nonatomic) BOOL hasRawStateOrProvince;
@property (nonatomic) long long rawCountry;
@property (nonatomic) BOOL hasRawCountry;
@property (nonatomic) long long rawRequestDeviceCategory;
@property (nonatomic) BOOL hasRawRequestDeviceCategory;
@property (nonatomic) int clientDayOfWeek;
@property (nonatomic) BOOL hasClientDayOfWeek;
@property (nonatomic) int rawClientHourOfDay;
@property (nonatomic) BOOL hasRawClientHourOfDay;
@property (nonatomic) BOOL isClientDaylight;
@property (nonatomic) BOOL hasIsClientDaylight;
@property (nonatomic) int appResolutionType;
@property (nonatomic) BOOL hasAppResolutionType;
@property (nonatomic) int sirikitResponseCode;
@property (nonatomic) BOOL hasSirikitResponseCode;
@property (nonatomic) int appSelectionUses;
@property (nonatomic) BOOL hasAppSelectionUses;
@property (nonatomic) unsigned int modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteRawLocale;
- (void)deleteAppResolutionType;
- (void)deleteAppSelectionUses;
- (void)deleteClientDayOfWeek;
- (void)deleteIsClientDaylight;
- (void)deleteModelVersion;
- (void)deleteRawClientHourOfDay;
- (void)deleteRawCountry;
- (void)deleteRawLanguage;
- (void)deleteRawRequestDeviceCategory;
- (void)deleteRawStateOrProvince;
- (void)deleteSirikitResponseCode;

@end
