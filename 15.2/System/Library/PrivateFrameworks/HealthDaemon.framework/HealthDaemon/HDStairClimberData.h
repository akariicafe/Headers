@class HDFitnessMachineCharacteristicUInt8Field, HDFitnessMachineCharacteristicUInt16Field, NSDate;

@interface HDStairClimberData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering> {
    HDFitnessMachineCharacteristicUInt16Field *_floorsField;
    HDFitnessMachineCharacteristicUInt16Field *_stepsPerMinuteField;
    HDFitnessMachineCharacteristicUInt16Field *_averageStepRateField;
    HDFitnessMachineCharacteristicUInt16Field *_positiveElevationGainField;
    HDFitnessMachineCharacteristicUInt16Field *_stepCountField;
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;
}

@property (readonly, nonatomic) NSDate *updateTime;
@property (readonly, nonatomic) BOOL floorsIsSet;
@property (readonly, nonatomic) unsigned short floors;
@property (readonly, nonatomic) BOOL stepsPerMinuteIsSet;
@property (readonly, nonatomic) unsigned short stepsPerMinute;
@property (readonly, nonatomic) BOOL averageStepRateIsSet;
@property (readonly, nonatomic) unsigned short averageStepRate;
@property (readonly, nonatomic) BOOL positiveElevationGainIsSet;
@property (readonly, nonatomic) unsigned short positiveElevationGain;
@property (readonly, nonatomic) BOOL stepCountIsSet;
@property (readonly, nonatomic) unsigned short stepCount;
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

+ (id)uuid;
+ (unsigned char)flagFieldLength;

- (id)description;
- (void).cxx_destruct;
- (id)allFields;
- (id)_init;
- (id)generateDatums:(id)a0;

@end
