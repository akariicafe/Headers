@class NSDictionary;

@interface _DKBatteryMonitor : _DKMonitor {
    unsigned int _powerService;
    unsigned int _batteryNotification;
    struct IONotificationPort { } *_notifyPort;
}

@property (nonatomic) int immediateShutdownThreshold;
@property (nonatomic) BOOL hasInternalBattery;
@property (retain, nonatomic) NSDictionary *previousBatteryState;
@property (nonatomic) double previousPercentage;
@property (nonatomic) BOOL previouslyFullyCharged;

+ (id)_eventWithBatteryPercentage:(double)a0 isFullyCharged:(BOOL)a1;
+ (id)eventStream;
+ (void)setCurrentBatteryPercentage:(double)a0;
+ (id)entitlements;

- (BOOL)voltage:(id)a0 differsFrom:(id)a1;
- (BOOL)isCharging:(id)a0 differsFrom:(id)a1;
- (void)_queue_handleNotification;
- (void)updateBatteryStateDictionary:(id)a0 currentBatteryPercentage:(double)a1;
- (double)currentBatteryPercentage;
- (void)_handleBatteryNotification;
- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (double)batteryPercentageFromPowerSourceDictionary:(id)a0;
- (id)getBatteryProperties;
- (void)batteryStateChangeHandler;
- (void).cxx_destruct;
- (BOOL)adapterType:(id)a0 differsFrom:(id)a1;
- (BOOL)externalConnected:(id)a0 differsFrom:(id)a1;
- (BOOL)newBatteryState:(id)a0 differsSignificantlyFromState:(id)a1 currentBatteryPercentage:(double)a2 previousBatteryPercentage:(double)a3;
- (void)deactivate;
- (BOOL)temperature:(id)a0 differsFrom:(id)a1;
- (BOOL)fullyCharged:(id)a0 differsFrom:(id)a1;
- (void)dealloc;
- (void)completeStart;
- (void)postImminentShutdownNotification:(double)a0;
- (BOOL)fullyChargedFromPowerSourceDictionary:(id)a0;
- (BOOL)percentage:(double)a0 differsFrom:(double)a1;
- (void)stop;

@end
