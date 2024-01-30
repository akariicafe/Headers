@interface IOAccessoryUserLdcmParamClass : NSObject

@property unsigned long long minVhiDurationSec;
@property unsigned long long maxVhiDurationSec;
@property unsigned long long maxUpFluctuationMv;
@property int userBehaviorMask;
@property int fdpBehaviorMask;
@property unsigned long long numEisHalogenSamples;
@property unsigned long long wetPollingIntervalSec;
@property unsigned long long dryPollingIntervalSec;
@property unsigned long long ldcmArbiterRetrySec;
@property unsigned long long ldcmStartMeasurementsDelayMs;
@property unsigned long long ldcmStartMeasurementsRetryMs;
@property unsigned long long minDryReadings;
@property unsigned long long enableHalogenSnrTtr;
@property unsigned long long enableHalogenMitigationsAndUI;
@property double wetTransitionCapacitanceThreshold;
@property double dryTransitionCapacitanceThreshold;

- (id)init;

@end
