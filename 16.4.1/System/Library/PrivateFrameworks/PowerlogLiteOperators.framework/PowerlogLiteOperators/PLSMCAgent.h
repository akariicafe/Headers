@class PLStateTrackingComposition, PLTimer, NSDictionary, PLEntryNotificationOperatorComposition, NSDate, PLEntry, NSMutableDictionary;

@interface PLSMCAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *sbc;
@property (retain) PLStateTrackingComposition *stateTracker;
@property (retain) NSDictionary *lastAccumlatedKeysSample;
@property (retain) NSDictionary *lastAccumlatedKeysSampleCA;
@property (retain) PLEntryNotificationOperatorComposition *focalAppSwitch;
@property (retain) NSDate *lastFocalSampleDate;
@property (retain) PLTimer *focalSwitchFilterTimer;
@property (retain) PLTimer *thermalAggregationTimer;
@property (retain) PLTimer *thermalMonitorTimer;
@property (retain) PLTimer *thermalLoggingTimer;
@property (retain) PLEntry *lastThermalInstantEntry;
@property (retain) NSDictionary *lastPowerAccumlatedSample;
@property (retain) NSDictionary *lastPowerAccumlatedSampleCA;
@property (retain) NSMutableDictionary *lastAccumValueDict;
@property (retain) NSMutableDictionary *lastAccumCycleCountDict;
@property struct { unsigned int x0; BOOL x1; struct SMCAccumPlatformInfo *x2; struct { unsigned int x0; struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; } x1; union { unsigned long long x0; long long x1; double x2; } x2; union { unsigned long long x0; long long x1; double x2; } x3; union { unsigned long long x0; long long x1; double x2; } x4; } x3[4]; struct { unsigned int x0; struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; } x1; union { unsigned long long x0; long long x1; double x2; } x2; union { unsigned long long x0; long long x1; double x2; } x3; union { unsigned long long x0; long long x1; double x2; } x4; } x4[4]; unsigned char x5; unsigned char x6; BOOL x7; BOOL x8; BOOL x9; struct { unsigned int x0[4]; unsigned int x1[4]; unsigned char x2; unsigned char x3; } x10; BOOL x11; } *smcConnection;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionThermalKeys;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (BOOL)supportsThermalSMC;
+ (id)channelValueKey:(id)a0;
+ (id)variantKey:(id)a0;
+ (id)cycleCountKey:(id)a0;
+ (id)entryEventBackwardDefinitionAccumulatedKeys;
+ (id)channelValueDiffKey:(id)a0;
+ (id)entryEventBackwardDefinitionPowerAccumulatedKeys;
+ (id)entryEventNoneDefinitionPowerDeliveryKeys;
+ (id)entryEventPointDefinitionThermalInstantKeys;

- (void)initOperatorDependancies;
- (id)getAccumEntryFromSample:(id)a0 lastSample:(id)a1 withEntryKey:(id)a2 withDate:(id)a3;
- (void)logAccumulatedKeysToPowerlog:(BOOL)a0 ToCoreAnalytics:(BOOL)a1 withDate:(id)a2 isWake:(BOOL)a3;
- (void)logAccumKeysToCA:(id)a0 withLastSample:(id)a1 andDate:(id)a2;
- (BOOL)sampleKey:(struct { double x0; unsigned int x1; unsigned char x2; } *)a0 forKey:(unsigned int)a1;
- (BOOL)writeKeyNumeric:(id)a0 withValue:(unsigned long long)a1;
- (BOOL)SMCKeyExists:(id)a0;
- (id)powerDeliveryKeys;
- (id)sampleAccumulatedKeys:(id)a0;
- (void)log;
- (void)logThermalAggregationKeysToCA;
- (id)accumulatedKeys;
- (void)logEventPointThermalKeys;
- (id)readKey:(id)a0;
- (id)resetAccumulatedKeys:(id)a0;
- (void)parseThermalThresholds:(BOOL)a0 thermalPressure:(BOOL)a1 virtualTemp:(BOOL)a2 thermalLevel:(BOOL)a3;
- (void)logThermalInstantAndAccumlatedKeys;
- (id)powerDeliveryResetKeys;
- (void)dealloc;
- (void)virtualTemperatureMonitorCallback;
- (id)thermalInstantKeys;
- (BOOL)anyVirtualTemperatureAboveThreshold;
- (void)logPowerDeliveryKeys;
- (void)handleStateChangeForSMCStats;
- (void)registerThermalTimer;
- (BOOL)readKeyViaOSAccum:(id)a0 toOutput:(struct { double x0; unsigned int x1; unsigned char x2; } *)a1;
- (id)init;
- (id)virtualTemperatureKeys;
- (const struct SMCAccumChannelInfo { } *)getChannelInfo:(unsigned int)a0;
- (id)thermalAggregationKeys;
- (BOOL)accumSupported;
- (void)stopThermalTimerAndlogFirstLowSample:(BOOL)a0;
- (id)powerAccumulatedKeys;
- (void).cxx_destruct;
- (id)thermalKeys;

@end
