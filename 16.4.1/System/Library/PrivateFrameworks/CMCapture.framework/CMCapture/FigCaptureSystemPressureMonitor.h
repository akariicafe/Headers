@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FigCaptureSystemPressureMonitor : NSObject {
    id /* block */ _systemPressureLevelChangedHandler;
    NSObject<OS_dispatch_queue> *_systemPressureLevelChangedHandlerQueue;
    int _thermalPressureNotificationToken;
    int _systemPressureLevelByThermalPressureLevel[5];
    int _currentSystemPressureFromThermalPressure;
    int _peakPowerNotificationToken;
    int _systemPressureLevelByPeakPowerLevel[5];
    int _currentSystemPressureFromPeakPower;
    struct { float min; float max; } _systemPressureLevelByProjectorTemperature[5];
    int _currentSystemPressureFromProjectorTemperature;
    NSObject<OS_dispatch_source> *_pearlPollTimer;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _pollingTimerStopTime;
}

@property (copy) id /* block */ systemPressureLevelChangedHandler;
@property (readonly) int systemPressureLevelFromPearlProjector;

+ (void)initialize;

- (void)startMonitoringPearlProjectorTemperatureUntilNominal;
- (id)initWithPearlModuleType:(int)a0;
- (void)updateWithPearlProjectorTemperature:(float)a0;
- (void)dealloc;
- (void)callSystemPressureLevelChangedHandler;

@end
