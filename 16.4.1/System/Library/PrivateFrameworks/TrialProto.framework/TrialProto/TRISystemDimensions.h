@class NSString, NSMutableArray;

@interface TRISystemDimensions : PBCodable <NSCopying> {
    struct { unsigned char targetedPopulation : 1; unsigned char experimentOptOutStatus : 1; unsigned char isBetaUser : 1; unsigned char isInternalBuild : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDeviceClass;
@property (retain, nonatomic) NSString *deviceClass;
@property (nonatomic) BOOL hasIsInternalBuild;
@property (nonatomic) BOOL isInternalBuild;
@property (nonatomic) BOOL hasIsBetaUser;
@property (nonatomic) BOOL isBetaUser;
@property (readonly, nonatomic) BOOL hasVersionTag;
@property (retain, nonatomic) NSString *versionTag;
@property (readonly, nonatomic) BOOL hasOsBuild;
@property (retain, nonatomic) NSString *osBuild;
@property (readonly, nonatomic) BOOL hasUserSettingsLanguageCode;
@property (retain, nonatomic) NSString *userSettingsLanguageCode;
@property (readonly, nonatomic) BOOL hasUserSettingsRegionCode;
@property (retain, nonatomic) NSString *userSettingsRegionCode;
@property (retain, nonatomic) NSMutableArray *userKeyboardEnabledInputModeIdentifiers;
@property (readonly, nonatomic) BOOL hasUserSettingsBcp47DeviceLocale;
@property (retain, nonatomic) NSString *userSettingsBcp47DeviceLocale;
@property (nonatomic) BOOL hasTargetedPopulation;
@property (nonatomic) int targetedPopulation;
@property (readonly, nonatomic) BOOL hasCarrierCountryIsoCode;
@property (retain, nonatomic) NSString *carrierCountryIsoCode;
@property (readonly, nonatomic) BOOL hasCarrierBundleIdentifier;
@property (retain, nonatomic) NSString *carrierBundleIdentifier;
@property (nonatomic) BOOL hasExperimentOptOutStatus;
@property (nonatomic) BOOL experimentOptOutStatus;
@property (readonly, nonatomic) BOOL hasAneVersion;
@property (retain, nonatomic) NSString *aneVersion;

+ (Class)userKeyboardEnabledInputModeIdentifiersType;

- (void)addUserKeyboardEnabledInputModeIdentifiers:(id)a0;
- (int)StringAsTargetedPopulation:(id)a0;
- (id)userKeyboardEnabledInputModeIdentifiersAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearUserKeyboardEnabledInputModeIdentifiers;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)userKeyboardEnabledInputModeIdentifiersCount;
- (id)targetedPopulationAsString:(int)a0;
- (void).cxx_destruct;

@end
