@class HDFitnessMachineCharacteristicUInt24Field, HDFitnessMachineCharacteristicUInt8Field, NSDate, HDFitnessMachineCharacteristicDoubleField, HDFitnessMachineCharacteristicUInt16Field;

@interface HDTreadmillData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering> {
    HDFitnessMachineCharacteristicDoubleField *_instantaneousSpeedField;
    HDFitnessMachineCharacteristicDoubleField *_averageSpeedField;
    HDFitnessMachineCharacteristicUInt24Field *_totalDistanceField;
    HDFitnessMachineCharacteristicDoubleField *_inclinationField;
    HDFitnessMachineCharacteristicDoubleField *_rampSettingField;
    HDFitnessMachineCharacteristicDoubleField *_positiveElevationGainField;
    HDFitnessMachineCharacteristicDoubleField *_negativeElevationGainField;
    HDFitnessMachineCharacteristicDoubleField *_instantaneousPaceField;
    HDFitnessMachineCharacteristicDoubleField *_averagePaceField;
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_forceOnBeltField;
    HDFitnessMachineCharacteristicUInt16Field *_powerOutputField;
}

@property (readonly, nonatomic) NSDate *updateTime;
@property (readonly, nonatomic) BOOL instantaneousSpeedIsSet;
@property (readonly, nonatomic) double instantaneousSpeed;
@property (readonly, nonatomic) BOOL averageSpeedIsSet;
@property (readonly, nonatomic) double averageSpeed;
@property (readonly, nonatomic) BOOL totalDistanceIsSet;
@property (readonly, nonatomic) unsigned int totalDistance;
@property (readonly, nonatomic) BOOL inclinationIsSet;
@property (readonly, nonatomic) double inclination;
@property (readonly, nonatomic) BOOL rampSettingIsSet;
@property (readonly, nonatomic) double rampSetting;
@property (readonly, nonatomic) BOOL positiveElevationGainIsSet;
@property (readonly, nonatomic) double positiveElevationGain;
@property (readonly, nonatomic) BOOL negativeElevationGainIsSet;
@property (readonly, nonatomic) double negativeElevationGain;
@property (readonly, nonatomic) BOOL instantaneousPaceIsSet;
@property (readonly, nonatomic) double instantaneousPace;
@property (readonly, nonatomic) BOOL averagePaceIsSet;
@property (readonly, nonatomic) double averagePace;
@property (readonly, nonatomic) BOOL totalEnergyIsSet;
@property (readonly, nonatomic) unsigned short totalEnergy;
@property (readonly, nonatomic) BOOL energyPerHourIsSet;
@property (readonly, nonatomic) unsigned short energyPerHour;
@property (readonly, nonatomic) BOOL energyPerMinuteIsSet;
@property (readonly, nonatomic) unsigned char energyPerMinute;
@property (readonly, nonatomic) BOOL heartRateIsSet;
@property (readonly, nonatomic) unsigned char heartRate;
@property (readonly, nonatomic) BOOL metabolicEquivalentIsSet;
@property (readonly, nonatomic) unsigned char metabolicEquivalent;
@property (readonly, nonatomic) BOOL elapsedTimeIsSet;
@property (readonly, nonatomic) unsigned short elapsedTime;
@property (readonly, nonatomic) BOOL remainingTimeIsSet;
@property (readonly, nonatomic) unsigned short remainingTime;
@property (readonly, nonatomic) BOOL forceOnBeltIsSet;
@property (readonly, nonatomic) unsigned short forceOnBelt;
@property (readonly, nonatomic) BOOL powerOutputIsSet;
@property (readonly, nonatomic) unsigned short powerOutput;

+ (id)uuid;
+ (unsigned char)flagFieldLength;
+ (id)unitTest_fakeTreadmillDataForDistance:(unsigned int)a0 energy:(unsigned short)a1 elapsedTime:(unsigned short)a2;

- (id)_init;
- (id)description;
- (void).cxx_destruct;
- (id)allFields;
- (id)generateDatums:(id)a0;

@end
