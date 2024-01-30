@class NSDictionary, BMSource;

@interface _DKBatteryMonitor : _DKMonitor {
    unsigned int _powerService;
    unsigned int _batteryNotification;
    struct IONotificationPort { } *_notifyPort;
    BMSource *_source;
}

@property (nonatomic) int immediateShutdownThreshold;
@property (nonatomic) BOOL hasInternalBattery;
@property (retain, nonatomic) NSDictionary *previousBatteryState;
@property (nonatomic) double previousPercentage;
@property (nonatomic) BOOL previouslyFullyCharged;

+ (id)eventStream;
+ (id)entitlements;
+ (id)_eventWithBatteryPercentage:(double)a0 isFullyCharged:(BOOL)a1;
+ (void)setCurrentBatteryPercentage:(double)a0;
+ (id)_BMEventWithBatteryPercentage:(double)a0 isFullyCharged:(BOOL)a1;

- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)_handleBatteryNotification;
- (BOOL)fullyCharged:(id)a0 differsFrom:(id)a1;
- (double)batteryPercentageFromPowerSourceDictionary:(id)a0;
- (void)postImminentShutdownNotification:(double)a0;
- (void)batteryStateChangeHandler;
- (BOOL)adapterType:(id)a0 differsFrom:(id)a1;
- (BOOL)isCharging:(id)a0 differsFrom:(id)a1;
- (void)updateBatteryStateDictionary:(id)a0 currentBatteryPercentage:(double)a1;
- (void)dealloc;
- (BOOL)externalConnected:(id)a0 differsFrom:(id)a1;
- (void)stop;
- (void)completeStart;
- (BOOL)newBatteryState:(id)a0 differsSignificantlyFromState:(id)a1 currentBatteryPercentage:(double)a2 previousBatteryPercentage:(double)a3;
- (id)getBatteryProperties;
- (void)start;
- (void)_queue_handleNotification;
- (BOOL)temperature:(id)a0 differsFrom:(id)a1;
- (BOOL)percentage:(double)a0 differsFrom:(double)a1;
- (BOOL)voltage:(id)a0 differsFrom:(id)a1;
- (BOOL)fullyChargedFromPowerSourceDictionary:(id)a0;
- (void).cxx_destruct;
- (double)currentBatteryPercentage;

@end
