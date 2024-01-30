@interface _DKThermalPressureMonitor : _DKMonitor

@property (nonatomic) BOOL initialized;
@property (nonatomic) int thermalPressureToken;
@property (nonatomic) int lastThermalPressureLevel;
@property (nonatomic) int peakPowerPressureToken;
@property (nonatomic) BOOL peakPowerPressureLevel;

+ (id)entitlements;
+ (id)eventStream;

- (void)synchronouslyReflectCurrentValue;
- (void)saveState;
- (id)loadState;
- (void)dealloc;
- (void)stop;
- (void)getThermalPressureLevelWithToken:(int)a0;
- (void)start;
- (void)getPeakPowerPressureLevelWithToken:(int)a0;
- (void)setCurrentThermalLevel:(int)a0;
- (void)deactivate;
- (void)setCurrentPeakPowerPressureLevel:(unsigned int)a0;

@end
