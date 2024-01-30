@interface _DKThermalPressureMonitor : _DKMonitor

@property (nonatomic) BOOL initialized;
@property (nonatomic) int thermalPressureToken;
@property (nonatomic) int lastThermalPressureLevel;
@property (nonatomic) int peakPowerPressureToken;
@property (nonatomic) BOOL peakPowerPressureLevel;

+ (id)eventStream;
+ (id)entitlements;

- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)saveState;
- (id)loadState;
- (void)setCurrentThermalLevel:(int)a0;
- (void)dealloc;
- (void)getPeakPowerPressureLevelWithToken:(int)a0;
- (void)setCurrentPeakPowerPressureLevel:(unsigned int)a0;
- (void)stop;
- (void)getThermalPressureLevelWithToken:(int)a0;
- (void)start;

@end
