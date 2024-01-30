@class NSString;

@interface _INPBWellnessUnitType : PBCodable <_INPBWellnessUnitType, NSSecureCoding, NSCopying> {
    struct { unsigned char bloodGlucoseUnit : 1; unsigned char bloodPressureUnit : 1; unsigned char energyUnit : 1; unsigned char heartRateUnit : 1; unsigned char lengthUnit : 1; unsigned char massUnit : 1; unsigned char respiratoryRateUnit : 1; unsigned char temperatureUnit : 1; unsigned char timeUnit : 1; unsigned char volumeUnit : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int bloodGlucoseUnit;
@property (nonatomic) BOOL hasBloodGlucoseUnit;
@property (nonatomic) int bloodPressureUnit;
@property (nonatomic) BOOL hasBloodPressureUnit;
@property (nonatomic) int energyUnit;
@property (nonatomic) BOOL hasEnergyUnit;
@property (nonatomic) int heartRateUnit;
@property (nonatomic) BOOL hasHeartRateUnit;
@property (nonatomic) int lengthUnit;
@property (nonatomic) BOOL hasLengthUnit;
@property (nonatomic) int massUnit;
@property (nonatomic) BOOL hasMassUnit;
@property (nonatomic) int respiratoryRateUnit;
@property (nonatomic) BOOL hasRespiratoryRateUnit;
@property (nonatomic) int temperatureUnit;
@property (nonatomic) BOOL hasTemperatureUnit;
@property (nonatomic) int timeUnit;
@property (nonatomic) BOOL hasTimeUnit;
@property (nonatomic) int volumeUnit;
@property (nonatomic) BOOL hasVolumeUnit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)bloodGlucoseUnitAsString:(int)a0;
- (id)energyUnitAsString:(int)a0;
- (int)StringAsBloodGlucoseUnit:(id)a0;
- (id)bloodPressureUnitAsString:(int)a0;
- (int)StringAsBloodPressureUnit:(id)a0;
- (int)StringAsEnergyUnit:(id)a0;
- (id)heartRateUnitAsString:(int)a0;
- (int)StringAsHeartRateUnit:(id)a0;
- (id)lengthUnitAsString:(int)a0;
- (int)StringAsLengthUnit:(id)a0;
- (id)massUnitAsString:(int)a0;
- (int)StringAsMassUnit:(id)a0;
- (id)respiratoryRateUnitAsString:(int)a0;
- (int)StringAsRespiratoryRateUnit:(id)a0;
- (id)temperatureUnitAsString:(int)a0;
- (int)StringAsTemperatureUnit:(id)a0;
- (id)timeUnitAsString:(int)a0;
- (int)StringAsTimeUnit:(id)a0;
- (id)volumeUnitAsString:(int)a0;
- (int)StringAsVolumeUnit:(id)a0;

@end
