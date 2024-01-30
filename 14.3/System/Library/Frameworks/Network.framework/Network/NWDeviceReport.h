@class NSString, NWAccumulator;

@interface NWDeviceReport : NSObject

@property (nonatomic) unsigned int batteryPercentage;
@property (nonatomic) unsigned int batteryCurrentCapacity;
@property (nonatomic) unsigned int batteryMaximumCapacity;
@property (nonatomic) unsigned int batteryDesignCapacity;
@property (nonatomic) unsigned int batteryAbsoluteCapacity;
@property (nonatomic) unsigned int batteryVoltage;
@property (nonatomic) unsigned int batteryTimeRemaining;
@property (nonatomic) BOOL batteryExternalPowerIsConnected;
@property (nonatomic) BOOL batteryIsCharging;
@property (nonatomic) BOOL batteryFullyCharged;
@property (nonatomic) BOOL batteryAtWarnLevel;
@property (nonatomic) BOOL batteryAtCriticalLevel;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL rnfEnabled;
@property (nonatomic) BOOL devicePluggedIn;
@property (nonatomic) BOOL deviceScreenOn;
@property (nonatomic) unsigned int motionState;
@property (nonatomic) unsigned int thermalPressure;
@property (retain, nonatomic) NWAccumulator *batteryAccumulator;

- (id)createAWDReport;
- (void).cxx_destruct;
- (id)description;

@end
