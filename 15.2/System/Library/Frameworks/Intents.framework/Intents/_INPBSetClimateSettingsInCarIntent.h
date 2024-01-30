@class NSString, _INPBInteger, _INPBDataString, _INPBDouble, _INPBIntentMetadata, _INPBTemperature;

@interface _INPBSetClimateSettingsInCarIntent : PBCodable <_INPBSetClimateSettingsInCarIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char airCirculationMode : 1; unsigned char climateZone : 1; unsigned char enableAirConditioner : 1; unsigned char enableAutoMode : 1; unsigned char enableClimateControl : 1; unsigned char enableFan : 1; unsigned char relativeFanSpeedSetting : 1; unsigned char relativeTemperatureSetting : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int airCirculationMode;
@property (nonatomic) BOOL hasAirCirculationMode;
@property (retain, nonatomic) _INPBDataString *carName;
@property (readonly, nonatomic) BOOL hasCarName;
@property (nonatomic) int climateZone;
@property (nonatomic) BOOL hasClimateZone;
@property (nonatomic) BOOL enableAirConditioner;
@property (nonatomic) BOOL hasEnableAirConditioner;
@property (nonatomic) BOOL enableAutoMode;
@property (nonatomic) BOOL hasEnableAutoMode;
@property (nonatomic) BOOL enableClimateControl;
@property (nonatomic) BOOL hasEnableClimateControl;
@property (nonatomic) BOOL enableFan;
@property (nonatomic) BOOL hasEnableFan;
@property (retain, nonatomic) _INPBInteger *fanSpeedIndex;
@property (readonly, nonatomic) BOOL hasFanSpeedIndex;
@property (retain, nonatomic) _INPBDouble *fanSpeedPercentage;
@property (readonly, nonatomic) BOOL hasFanSpeedPercentage;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int relativeFanSpeedSetting;
@property (nonatomic) BOOL hasRelativeFanSpeedSetting;
@property (nonatomic) int relativeTemperatureSetting;
@property (nonatomic) BOOL hasRelativeTemperatureSetting;
@property (retain, nonatomic) _INPBTemperature *temperature;
@property (readonly, nonatomic) BOOL hasTemperature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)airCirculationModeAsString:(int)a0;
- (int)StringAsAirCirculationMode:(id)a0;
- (id)climateZoneAsString:(int)a0;
- (int)StringAsClimateZone:(id)a0;
- (id)relativeFanSpeedSettingAsString:(int)a0;
- (int)StringAsRelativeFanSpeedSetting:(id)a0;
- (id)relativeTemperatureSettingAsString:(int)a0;
- (int)StringAsRelativeTemperatureSetting:(id)a0;
- (id)dictionaryRepresentation;

@end
