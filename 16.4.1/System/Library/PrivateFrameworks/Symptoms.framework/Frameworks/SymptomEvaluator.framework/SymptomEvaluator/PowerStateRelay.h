@class NSObject;
@protocol OS_dispatch_queue;

@interface PowerStateRelay : NSObject {
    int powerStateToken;
    int screenStateToken;
    int screenBrightnessToken;
    int thermalPressureToken;
    int keybagToken;
    NSObject<OS_dispatch_queue> *_powerStateQueue;
    unsigned int _batteryService;
    unsigned int _batteryNotification;
    struct IONotificationPort { } *_batteryPort;
}

@property BOOL pluggedIn;
@property BOOL screenNotDark;
@property BOOL screenUnlocked;
@property unsigned int screenBrightness;
@property double batteryPercentage;
@property unsigned int batteryCurrentCapacity;
@property unsigned int batteryMaximumCapacity;
@property unsigned int batteryDesignCapacity;
@property unsigned int batteryAbsoluteCapacity;
@property unsigned int batteryVoltage;
@property unsigned int batteryTimeRemaining;
@property int batteryTemperature;
@property BOOL batteryExternalPowerIsConnected;
@property BOOL batteryIsCharging;
@property BOOL batteryFullyCharged;
@property BOOL batteryAtWarnLevel;
@property BOOL batteryAtCriticalLevel;
@property long long thermalPressure;
@property (nonatomic) BOOL lowPowerModeEnabled;

+ (id)defaultRelay;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)getCurrentKeybagLockState;
- (void)enableIOKitBatteryLevelNotifications;
- (void)updateBatteryValuesFromPowerSourceDictionary:(id)a0;
- (void)handlePowerStateChange:(id)a0;
- (void)dealloc;
- (void)handleBatteryNotification;
- (id)init;
- (id)getBatteryProperties;
- (id)thermalPressureLevelToString:(long long)a0;
- (void)disableIOKitBatteryLevelNotifications;
- (void).cxx_destruct;

@end
