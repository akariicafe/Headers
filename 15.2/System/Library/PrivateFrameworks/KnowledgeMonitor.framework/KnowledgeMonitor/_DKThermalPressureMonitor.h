@interface _DKThermalPressureMonitor : _DKMonitor

@property (nonatomic) BOOL initialized;
@property (nonatomic) int thermalPressureToken;
@property (nonatomic) int lastThermalPressureLevel;
@property (nonatomic) int peakPowerPressureToken;
@property (nonatomic) BOOL peakPowerPressureLevel;

+ (id)eventStream;
+ (id)entitlements;

- (void)getThermalPressureLevelWithToken:(int)a0;
- (void)saveState;
- (id)loadState;
- (void)synchronouslyReflectCurrentValue;
- (void)setCurrentPeakPowerPressureLevel:(unsigned int)a0;
- (void)start;
- (void)getPeakPowerPressureLevelWithToken:(int)a0;
- (void)setCurrentThermalLevel:(int)a0;
- (void)deactivate;
- (void)dealloc;
- (void)stop;

@end
