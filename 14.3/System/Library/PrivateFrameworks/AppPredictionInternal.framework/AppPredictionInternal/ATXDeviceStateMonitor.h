@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>

+ (id)SSID;
+ (BOOL)onWifi;
+ (void)setSSID:(id)a0;
+ (void)startMockingSystem;
+ (BOOL)airplaneMode;
+ (void)stopMockingSystem;
+ (void)setAirplaneMode:(BOOL)a0;

@end
