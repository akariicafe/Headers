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

+ (id)entitlements;
+ (id)eventStream;
+ (id)_eventWithBatteryPercentage:(double)a0 isFullyCharged:(BOOL)a1;
+ (void)setCurrentBatteryPercentage:(double)a0;

- (void)synchronouslyReflectCurrentValue;
- (void)_handleBatteryNotification;
- (BOOL)fullyChargedFromPowerSourceDictionary:(id)a0;
- (void)postImminentShutdownNotification:(double)a0;
- (void)completeStart;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)batteryStateChangeHandler;
- (void)_queue_handleNotification;
- (BOOL)externalConnected:(id)a0 differsFrom:(id)a1;
- (BOOL)fullyCharged:(id)a0 differsFrom:(id)a1;
- (BOOL)voltage:(id)a0 differsFrom:(id)a1;
- (BOOL)adapterType:(id)a0 differsFrom:(id)a1;
- (BOOL)isCharging:(id)a0 differsFrom:(id)a1;
- (void)updateBatteryStateDictionary:(id)a0 currentBatteryPercentage:(double)a1;
- (double)batteryPercentageFromPowerSourceDictionary:(id)a0;
- (void)start;
- (BOOL)temperature:(id)a0 differsFrom:(id)a1;
- (id)getBatteryProperties;
- (BOOL)newBatteryState:(id)a0 differsSignificantlyFromState:(id)a1 currentBatteryPercentage:(double)a2 previousBatteryPercentage:(double)a3;
- (void)deactivate;
- (double)currentBatteryPercentage;
- (BOOL)percentage:(double)a0 differsFrom:(double)a1;

@end
