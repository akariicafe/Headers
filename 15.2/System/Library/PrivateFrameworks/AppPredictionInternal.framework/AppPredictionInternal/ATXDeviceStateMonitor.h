@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>

+ (BOOL)airplaneMode;
+ (void)setAirplaneMode:(BOOL)a0;
+ (BOOL)onWifi;
+ (id)SSID;
+ (void)stopMockingSystem;
+ (void)setSSID:(id)a0;
+ (void)startMockingSystem;

@end
