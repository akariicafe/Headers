@interface CUTPowerMonitor : NSObject {
    id _internal;
}

@property (readonly, nonatomic) BOOL isExternalPowerConnected;
@property (readonly, nonatomic) double batteryPercentRemaining;

+ (id)sharedInstance;

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_initIOService;
- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;
- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)a0 notificationID:(void *)a1;
- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)a0;
- (id)_init;
- (BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)a0;

@end
